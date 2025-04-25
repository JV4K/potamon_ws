#include <rclcpp/rclcpp.hpp>

#include <stdio.h>
#include <string.h>

#include <stdint.h>
#include <stddef.h>
#include <math.h>

// Timing stuff
#include <thread>
#include <chrono>
#include <atomic>

#include <iostream>

// Linux headers for vcp
#include <fcntl.h>        // Contains file controls like O_RDWR
#include <errno.h>        // Error integer and strerror() function
#include <asm/termbits.h> // Contains POSIX terminal control definitions
#include <unistd.h>       // write(), read(), close()
#include <sys/ioctl.h>    // Used for TCGETS2/TCSETS2, which is required for custom baud rates
#include <unistd.h>

// Custom messages and services
#include "potamon_interfaces/msg/wheel_states.hpp"
#include "potamon_interfaces/msg/wheel_angles.hpp"
#include "potamon_interfaces/msg/wheel_velocities.hpp"
#include "potamon_interfaces/msg/system_status.hpp"
#include "std_srvs/srv/trigger.hpp"
#include "potamon_interfaces/srv/set_control_mode.hpp"

// builtin messages and services and libs for them
#include <nav_msgs/msg/odometry.hpp>
#include "sensor_msgs/msg/imu.hpp"
#include <tf2/LinearMath/Quaternion.h>
#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/empty.hpp"

#include "potamon_USBVCP.h"

#define VCP_RES_FLAG_MSK 0b11111000

class PotamonNode : public rclcpp::Node
{
public:
    PotamonNode() : Node("potamon_com_node")
    {
        // Initialize USB device
        if (!setupUSB())
        {
            RCLCPP_ERROR(this->get_logger(), "USB initialization failed!");
            rclcpp::shutdown();
            return;
        }
        // ========== PUBLISHERS ===========
        wheel_state_pub = this->create_publisher<potamon_interfaces::msg::WheelStates>(
            "/feedback/wheel_states", 10);
        status_pub = this->create_publisher<potamon_interfaces::msg::SystemStatus>(
            "/feedback/status", 10);

        odom_pub_ = this->create_publisher<nav_msgs::msg::Odometry>(
            "/feedback/odometry",
            rclcpp::SensorDataQoS());
        imu_pub_ = this->create_publisher<sensor_msgs::msg::Imu>(
            "/feedback/imu",
            rclcpp::SensorDataQoS());

        // ========== SUBSCRIPTIONS ===========
        vel_cmd_sub = this->create_subscription<geometry_msgs::msg::Twist>(
            "/control/cmd_velocity",
            rclcpp::QoS(10),
            std::bind(&PotamonNode::velocityCallback, this, std::placeholders::_1));

        wheel_vel_cmd_sub = this->create_subscription<potamon_interfaces::msg::WheelVelocities>(
            "/control/cmd_wheel_velocities",
            rclcpp::QoS(10),
            std::bind(&PotamonNode::wheelVelocityCallback, this, std::placeholders::_1));

        // `/control/cmd_wheel_angles
        wheel_ang_cmd_sub = this->create_subscription<potamon_interfaces::msg::WheelAngles>(
            "/control/cmd_wheel_angles",
            rclcpp::QoS(10),
            std::bind(&PotamonNode::wheelAngleCallback, this, std::placeholders::_1));

        heartbeat_sub = this->create_subscription<std_msgs::msg::Empty>(
            "/heartbeat",
            rclcpp::QoS(10),
            std::bind(&PotamonNode::heartbeatCallback, this, std::placeholders::_1));
        last_heartbeat_time_ = this->now();

        // Services

        // Control mode service
        auto qos = rclcpp::QoS(rclcpp::ServicesQoS().keep_last(10));
        set_mode_srv_ = create_service<potamon_interfaces::srv::SetControlMode>(
            "/set_control_mode",
            std::bind(&PotamonNode::handleSetMode, this, std::placeholders::_1, std::placeholders::_2), qos);

        glob_dom_on_srv = create_service<std_srvs::srv::Trigger>(
            "/global_domain_on",
            std::bind(&PotamonNode::handleGlobDomOn, this, std::placeholders::_1, std::placeholders::_2), qos);

        glob_dom_off_srv = create_service<std_srvs::srv::Trigger>(
            "/global_domain_off",
            std::bind(&PotamonNode::handleGlobDomOff, this, std::placeholders::_1, std::placeholders::_2), qos);

        pid_head_on_srv = create_service<std_srvs::srv::Trigger>(
            "/heading_pid_on",
            std::bind(&PotamonNode::handlePidHeadEnable, this, std::placeholders::_1, std::placeholders::_2), qos);

        pid_head_off_srv = create_service<std_srvs::srv::Trigger>(
            "/heading_pid_off",
            std::bind(&PotamonNode::handlePidHeadDisable, this, std::placeholders::_1, std::placeholders::_2), qos);

        reset_odom_srv_ = create_service<std_srvs::srv::Trigger>(
            "/reset_odometry",
            std::bind(&PotamonNode::handleResetOdometry, this, std::placeholders::_1, std::placeholders::_2), qos);

        clear_fault_srv_ = create_service<std_srvs::srv::Trigger>(
            "/clear_overcurrent_fault",
            std::bind(&PotamonNode::handleClearFault, this, std::placeholders::_1, std::placeholders::_2), qos);

        // Start communication thread
        com_thread_ = std::thread(&PotamonNode::comLoop, this);
    }

    ~PotamonNode()
    {
        stop_thread_ = true;
        if (com_thread_.joinable())
        {
            com_thread_.join();
        }
        close(serial_port); // Close USB port
    }

private:
    bool setupUSB()
    {
        // Open USB VCP COM port
        serial_port = open("/dev/ttyACM0", O_RDWR);
        if (serial_port < 0)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to open USB device");
            return false;
        }

        // COM config
        ioctl(serial_port, TCGETS2, &tty);

        tty.c_cflag &= ~PARENB;        // Clear parity bit, disabling parity (most common)
        tty.c_cflag &= ~CSTOPB;        // Clear stop field, only one stop bit used in communication (most common)
        tty.c_cflag &= ~CSIZE;         // Clear all bits that set the data size
        tty.c_cflag |= CS8;            // 8 bits per byte (most common)
        tty.c_cflag &= ~CRTSCTS;       // Disable RTS/CTS hardware flow control (most common)
        tty.c_cflag |= CREAD | CLOCAL; // Turn on READ & ignore ctrl lines (CLOCAL = 1)

        tty.c_lflag &= ~ICANON;
        tty.c_lflag &= ~ECHO;                                                        // Disable echo
        tty.c_lflag &= ~ECHOE;                                                       // Disable erasure
        tty.c_lflag &= ~ECHONL;                                                      // Disable new-line echo
        tty.c_lflag &= ~ISIG;                                                        // Disable interpretation of INTR, QUIT and SUSP
        tty.c_iflag &= ~(IXON | IXOFF | IXANY);                                      // Turn off s/w flow ctrl
        tty.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP | INLCR | IGNCR | ICRNL); // Disable any special handling of received bytes

        tty.c_oflag &= ~OPOST; // Prevent special interpretation of output bytes (e.g. newline chars)
        tty.c_oflag &= ~ONLCR; // Prevent conversion of newline to carriage return/line feed

        tty.c_cc[VTIME] = 10; // Wait for up to 1s (10 deciseconds), returning as soon as any data is received.
        tty.c_cc[VMIN] = 0;

        tty.c_cflag &= ~CBAUD;
        tty.c_cflag |= CBAUDEX;

        tty.c_ispeed = 1000000; // What a custom baud rate!
        tty.c_ospeed = 1000000;

        ioctl(serial_port, TCSETS2, &tty);

        ptm_vcp_host.FLAGS = 0b00001111;

        return true;
    }

    void comLoop()
    {
        while (rclcpp::ok() && !stop_thread_)
        {
            // Check heartbeat
            auto since_last_heartbeat = this->now() - last_heartbeat_time_;
            if (since_last_heartbeat > heartbeat_timeout_)
            {
                heartbeat_ok_ = false;
                RCLCPP_WARN_THROTTLE(get_logger(), *get_clock(), 1000,
                                     "Heartbeat timeout! Last received %.1fms ago",
                                     since_last_heartbeat.seconds() * 1000);

                mid_mode = IDLE;
            }

            auto loop_start = std::chrono::steady_clock::now();

            // 1. Prepare data (callbacks)
            ptm_vcp_host.MODE = (uint8_t)mid_mode;
            if (odom_reset_isRequested){
                ptm_vcp_host.FLAGS |= 1;
                odom_reset_isRequested = 0;
            }
            if (clear_fault_isRequested){
                ptm_vcp_host.FLAGS |= 1 << 2;
                clear_fault_isRequested = 0;
            }

            // 2. Send to COM
            ssize_t bytesWritten = write(serial_port, &ptm_vcp_host, sizeof(ptm_vcp_host));
            if (bytesWritten < 0)
            {
                RCLCPP_WARN(this->get_logger(), "Write failed: %s (errno %d)", strerror(errno), errno);
                continue;
            }
            else if (bytesWritten != sizeof(ptmn_usb_host_t))
            {
                RCLCPP_WARN(this->get_logger(),
                            "Partial write: %zd/%zu bytes",
                            bytesWritten, sizeof(ptmn_usb_host_t));
            }

            // Reset clear/reset request flags after sending
            ptm_vcp_host.FLAGS &= VCP_RES_FLAG_MSK;

            // 3. Receive response
            ssize_t bytesRead = read(serial_port, &ptmn_vcp_device, sizeof(ptmn_vcp_device));
            if (bytesRead < 0)
            {
                RCLCPP_WARN(get_logger(), "Read failed: %s (errno %d)", strerror(errno), errno);
                continue;
            }

            // 4. Use the data (example: print motor current)
            if (bytesRead == sizeof(ptmn_vcp_device))
            {
                // ============== Status ==============
                auto status_msg = potamon_interfaces::msg::SystemStatus();
                status_msg.bus_comms_fault = !!(ptmn_vcp_device.STAT & (1 << 6));
                status_msg.bridge_faults[0] = !!(ptmn_vcp_device.STAT & (1 << 4));
                status_msg.bridge_faults[1] = !!(ptmn_vcp_device.STAT & (1 << 5));
                status_msg.overcurrent_faults[0] = !!(ptmn_vcp_device.STAT & (1));
                status_msg.overcurrent_faults[1] = !!(ptmn_vcp_device.STAT & (1 << 1));
                status_msg.overcurrent_faults[2] = !!(ptmn_vcp_device.STAT & (1 << 2));
                status_msg.overcurrent_faults[3] = !!(ptmn_vcp_device.STAT & (1 << 3));
                status_pub->publish(status_msg);

                // ============== Odometry ==============
                auto odom_msg = nav_msgs::msg::Odometry();
                // Header
                odom_msg.header.stamp = this->now();
                odom_msg.header.frame_id = "odom";
                odom_msg.child_frame_id = "base_link";

                // Position (x, y, z)
                odom_msg.pose.pose.position.x = ptmn_vcp_device.X_FB;
                odom_msg.pose.pose.position.y = ptmn_vcp_device.Y_FB;

                // Orientation odom - quaternion
                tf2::Quaternion q;
                q.setRPY(
                    0,
                    0,
                    ptmn_vcp_device.PHI_FB);
                odom_msg.pose.pose.orientation.x = q.x();
                odom_msg.pose.pose.orientation.y = q.y();
                odom_msg.pose.pose.orientation.z = q.z();
                odom_msg.pose.pose.orientation.w = q.w();

                // Velocity (linear and angular)
                odom_msg.twist.twist.linear.x = (float)(ptmn_vcp_device.VX_FB) / 1024.0f;
                odom_msg.twist.twist.linear.y = (float)(ptmn_vcp_device.VY_FB) / 1024.0f;
                odom_msg.twist.twist.angular.z = (float)(ptmn_vcp_device.WZ_FB) / 1024.0f;

                odom_pub_->publish(odom_msg);

                // ============== IMU ==============
                auto imu_msg = sensor_msgs::msg::Imu();
                // Header
                imu_msg.header.stamp = this->now();
                imu_msg.header.frame_id = "imu_link";

                // Orientation
                imu_msg.orientation.x = (float)(ptmn_vcp_device.IMU_Q_X) / 16384.0f;
                imu_msg.orientation.y = (float)(ptmn_vcp_device.IMU_Q_Y) / 16384.0f;
                imu_msg.orientation.z = (float)(ptmn_vcp_device.IMU_Q_Z) / 16384.0f;
                imu_msg.orientation.w = (float)(ptmn_vcp_device.IMU_Q_W) / 16384.0f;

                // Angular velocity (rad/s)
                imu_msg.angular_velocity.x = (float)(ptmn_vcp_device.IMU_GYRO_X) / 900.0f;
                imu_msg.angular_velocity.y = (float)(ptmn_vcp_device.IMU_GYRO_Y) / 900.0f;
                imu_msg.angular_velocity.z = (float)(ptmn_vcp_device.IMU_GYRO_Z) / 900.0f;

                // Linear acceleration (m/s²)
                imu_msg.linear_acceleration.x = (float)(ptmn_vcp_device.IMU_LACC_X) / 100.0f;
                imu_msg.linear_acceleration.y = (float)(ptmn_vcp_device.IMU_LACC_Y) / 100.0f;
                imu_msg.linear_acceleration.z = (float)(ptmn_vcp_device.IMU_LACC_Z) / 100.0f;

                imu_pub_->publish(imu_msg);

                //  ============== Wheel States ==============
                auto wh_states_msg = potamon_interfaces::msg::WheelStates();
                wh_states_msg.angle[0] = (float)ptmn_vcp_device.M1_ANG_FB / 1024.0f;
                wh_states_msg.angle[1] = (float)ptmn_vcp_device.M2_ANG_FB / 1024.0f;
                wh_states_msg.angle[2] = (float)ptmn_vcp_device.M3_ANG_FB / 1024.0f;
                wh_states_msg.angle[3] = (float)ptmn_vcp_device.M4_ANG_FB / 1024.0f;

                wh_states_msg.angular_velocity[0] = (float)ptmn_vcp_device.M1_VEL_FB / 512.0f;
                wh_states_msg.angular_velocity[1] = (float)ptmn_vcp_device.M2_VEL_FB / 512.0f;
                wh_states_msg.angular_velocity[2] = (float)ptmn_vcp_device.M3_VEL_FB / 512.0f;
                wh_states_msg.angular_velocity[3] = (float)ptmn_vcp_device.M4_VEL_FB / 512.0f;

                wh_states_msg.current[0] = (float)ptmn_vcp_device.M1_CUR_FB / 1024.0f;
                wh_states_msg.current[1] = (float)ptmn_vcp_device.M2_CUR_FB / 1024.0f;
                wh_states_msg.current[2] = (float)ptmn_vcp_device.M3_CUR_FB / 1024.0f;
                wh_states_msg.current[3] = (float)ptmn_vcp_device.M4_CUR_FB / 1024.0f;

                wheel_state_pub->publish(wh_states_msg);
            }
            else if (bytesRead > 0)
            {
                RCLCPP_WARN(get_logger(), "Incomplete packet received (%zd bytes)\n", bytesRead);
            }

            // Publish stuff

            // Maintain 1kHz rate
            std::this_thread::sleep_until(loop_start + std::chrono::milliseconds(2));
        }
    }

    void velocityCallback(const geometry_msgs::msg::Twist::SharedPtr msg)
    {
        ptm_vcp_host.VX = (int16_t)(msg->linear.x * 1024.0f);
        ptm_vcp_host.VY = (int16_t)(msg->linear.y * 1024.0f);
        ptm_vcp_host.WZ = (int16_t)(msg->angular.z * 1024.0f);
    }

    void wheelVelocityCallback(const potamon_interfaces::msg::WheelVelocities::SharedPtr msg)
    {
        // velocities
        ptm_vcp_host.M1_VEL_TASK = (int16_t)(msg->velocities[0] * 512.0f);
        ptm_vcp_host.M2_VEL_TASK = (int16_t)(msg->velocities[1] * 512.0f);
        ptm_vcp_host.M3_VEL_TASK = (int16_t)(msg->velocities[2] * 512.0f);
        ptm_vcp_host.M4_VEL_TASK = (int16_t)(msg->velocities[3] * 512.0f);
    }

    void wheelAngleCallback(const potamon_interfaces::msg::WheelAngles::SharedPtr msg)
    {
        /*
        float32[4] angles            # Target angles (radians) for 4 wheels
        float32[4] angular_velocity  # Target angular velocities (rad/s) for 4 wheels
        */
        ptm_vcp_host.M1_ANG_TASK = (int32_t)(msg->angles[0] * 1024.0f);
        ptm_vcp_host.M2_ANG_TASK = (int32_t)(msg->angles[1] * 1024.0f);
        ptm_vcp_host.M3_ANG_TASK = (int32_t)(msg->angles[2] * 1024.0f);
        ptm_vcp_host.M4_ANG_TASK = (int32_t)(msg->angles[3] * 1024.0f);

        ptm_vcp_host.M1_VEL_TASK = (int16_t)(msg->angular_velocity[0] * 512.0f);
        ptm_vcp_host.M2_VEL_TASK = (int16_t)(msg->angular_velocity[1] * 512.0f);
        ptm_vcp_host.M3_VEL_TASK = (int16_t)(msg->angular_velocity[2] * 512.0f);
        ptm_vcp_host.M4_VEL_TASK = (int16_t)(msg->angular_velocity[3] * 512.0f);
    }

    void heartbeatCallback(const std_msgs::msg::Empty::SharedPtr /*msg*/)
    {
        // heartbeat timeout thingy
        last_heartbeat_time_ = this->now();
        heartbeat_ok_ = true;
    }

    // ============== SERVICES =====================

    void handleSetMode(
        const potamon_interfaces::srv::SetControlMode::Request::SharedPtr req,
        potamon_interfaces::srv::SetControlMode::Response::SharedPtr res)
    {
        switch (req->mode)
        {
        case potamon_interfaces::srv::SetControlMode::Request::MODE_IDLE:
            mid_mode = IDLE;
            res->success = true;
            res->message = "Switched to IDLE mode";
            break;

        case potamon_interfaces::srv::SetControlMode::Request::MODE_VELOCITY:
            if (!faults_flag)
            {
                mid_mode = VELOCITY;
                res->success = true;
                res->message = "Switched to VELOCITY mode";
            }
            else
            {
                mid_mode = IDLE;
                res->success = false;
                res->message = "Failed to switch modes, there are faults in system";
            }

            break;

        case potamon_interfaces::srv::SetControlMode::Request::MODE_TRAJECTORY:
            if (!faults_flag)
            {
                mid_mode = VELOCITY;
            }
            else
            {
                mid_mode = IDLE;
            }
            res->success = true;
            res->message = "Switched to Trajectory mode (currently dont work)";
            break;

        case potamon_interfaces::srv::SetControlMode::Request::MODE_WHEELS_VELOCITY:
            if (!faults_flag)
            {
                mid_mode = WHEELS_VELOCITY;
                res->success = true;
                res->message = "Switched to direct wheel angular vel control";
            }
            else
            {
                mid_mode = IDLE;
                res->success = false;
                res->message = "Failed to switch modes, there are faults in system";
            }

            break;

        case potamon_interfaces::srv::SetControlMode::Request::MODE_WHEELS_ANGLE:
            if (!faults_flag)
            {
                mid_mode = WHEELS_ANGLE;
                res->success = true;
                res->message = "Switched to direct wheel angle control)";
            }
            else
            {
                mid_mode = IDLE;
                res->success = false;
                res->message = "Failed to switch modes, there are faults in system";
            }
            break;

        default:
            mid_mode = IDLE;
            res->success = false;
            res->message = "Invalid mode requested";
            RCLCPP_WARN(get_logger(), "Invalid control mode: %d", req->mode);
        }

        // current_mode_ = req->mode;
    }

    void handleResetOdometry(
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr res)
    {
        odom_reset_isRequested = 1;
        res->success = true;
        res->message = "Odometry reset";
    }

    void handleClearFault(
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr res)
    {
        clear_fault_isRequested = 1;
        res->success = true;
        res->message = "Faults cleared";
    }

    void handleGlobDomOn(
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr res)
    {
        ptm_vcp_host.FLAGS |= 1 << 3;
        res->success = true;
        res->message = "Global domain on";
    }

    void handleGlobDomOff(
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr res)
    {
        ptm_vcp_host.FLAGS &= 0b11110111;
        res->success = true;
        res->message = "Global domain off";
    }

    void handlePidHeadEnable(
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr res)
    {
        ptm_vcp_host.FLAGS |= 1 << 4;
        res->success = true;
        res->message = "Global domain on";
    }

    void handlePidHeadDisable(
        const std_srvs::srv::Trigger::Request::SharedPtr,
        std_srvs::srv::Trigger::Response::SharedPtr res)
    {
        ptm_vcp_host.FLAGS &= 0b11101111;
        res->success = true;
        res->message = "Global domain off";
    }

    // =================================================

    int serial_port;
    struct termios2 tty; // COM port settings struct

    // Globals
    VCP_mode_cmd_t mid_mode = IDLE;
    uint8_t faults_flag = 0;
    uint8_t clear_fault_isRequested = 0;
    uint8_t odom_reset_isRequested = 0;

    // Comms packets
    ptmn_usb_device_t ptmn_vcp_device;
    ptmn_usb_host_t ptm_vcp_host;

    // Timing
    std::thread com_thread_;
    std::atomic<bool> stop_thread_{false};

    // Heartbeat
    rclcpp::Time last_heartbeat_time_;
    std::atomic<bool> heartbeat_ok_{false};
    std::chrono::milliseconds heartbeat_timeout_{200}; // Default 200ms timeout

    // Publisher
    rclcpp::Publisher<potamon_interfaces::msg::SystemStatus>::SharedPtr status_pub;
    rclcpp::Publisher<potamon_interfaces::msg::WheelStates>::SharedPtr wheel_state_pub;
    rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
    rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub_;

    // Subscribers
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr vel_cmd_sub;
    rclcpp::Subscription<potamon_interfaces::msg::WheelVelocities>::SharedPtr wheel_vel_cmd_sub;
    rclcpp::Subscription<potamon_interfaces::msg::WheelAngles>::SharedPtr wheel_ang_cmd_sub;
    rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr heartbeat_sub;

    // Services
    rclcpp::Service<potamon_interfaces::srv::SetControlMode>::SharedPtr set_mode_srv_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr glob_dom_on_srv;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr glob_dom_off_srv;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr pid_head_on_srv;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr pid_head_off_srv;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr reset_odom_srv_;
    rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr clear_fault_srv_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PotamonNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
