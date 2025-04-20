#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <std_msgs/msg/empty.hpp>
#include "potamon_interfaces/srv/set_control_mode.hpp"
#include <map>
#include <memory>

#define WIRELESS 1

float joy_gain = 1;
float max_angular_speed = 6.282f; // π rad/s (~180°/s)

class XboxGamepadReader : public rclcpp::Node
{
public:
    XboxGamepadReader() : Node("xbox_gamepad_reader"),
                          current_mode_(0), // Start in IDLE mode
                          a_button_prev_state_(false)
    {
        // Initialize button and axis mappings
        initButtonMappings();
        initAxisMappings();

        // Create subscriber for joy topic
        joy_sub_ = this->create_subscription<sensor_msgs::msg::Joy>(
            "joy", 10, std::bind(&XboxGamepadReader::joyCallback, this, std::placeholders::_1));

        // Create publishers
        twist_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/control/cmd_velocity", 10);
        heartbeat_pub_ = this->create_publisher<std_msgs::msg::Empty>("/heartbeat", 10);

        // Create service client for mode switching
        mode_client_ = this->create_client<potamon_interfaces::srv::SetControlMode>("/set_control_mode");

        // Create timer for heartbeat (50Hz = 20ms)
        heartbeat_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(20),
            std::bind(&XboxGamepadReader::publishHeartbeat, this));

        RCLCPP_INFO(this->get_logger(), "Xbox Gamepad Reader node started");
    }

private:
    void initButtonMappings()
    {
        if (WIRELESS)
        {
            button_map_ = {
                {"A", 0}, {"B", 1}, {"X", 2}, {"Y", 3}, {"LB", 4}, {"RB", 5}, {"View", 6}, {"Menu", 7}, {"Xbox", 8}, {"LStick", 9}, {"RStick", 10}};
        }
        else
        {
            button_map_ = {
                {"A", 0}, {"B", 1}, {"X", 2}, {"Y", 3}, {"LB", 4}, {"RB", 5}, {"View", 6}, {"Menu", 7}, {"Xbox", 8}, {"LStick", 9}, {"RStick", 10}};
        }
    }

    void initAxisMappings()
    {
        axis_map_ = {
            {"LStickX", 0}, {"LStickY", 1}, {"LT", 2}, {"RStickX", 3}, {"RStickY", 4}, {"RT", 5}, {"DPadX", 6}, {"DPadY", 7}};
    }

    void publishHeartbeat()
    {
        auto msg = std_msgs::msg::Empty();
        heartbeat_pub_->publish(msg);
    }

    void callSetModeService(uint8_t mode)
    {
        if (!mode_client_->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_WARN(this->get_logger(), "Service not available");
            return;
        }

        auto request = std::make_shared<potamon_interfaces::srv::SetControlMode::Request>();
        request->mode = mode;

        auto future = mode_client_->async_send_request(request,
                                                       [this](rclcpp::Client<potamon_interfaces::srv::SetControlMode>::SharedFuture future)
                                                       {
                                                           auto response = future.get();
                                                           if (response->success)
                                                           {
                                                               current_mode_ = (current_mode_ == 0) ? 1 : 0; // Toggle mode
                                                               RCLCPP_INFO(this->get_logger(), "Mode switched: %s", response->message.c_str());
                                                           }
                                                           else
                                                           {
                                                               RCLCPP_WARN(this->get_logger(), "Mode switch failed: %s", response->message.c_str());
                                                           }
                                                       });
    }

    void joyCallback(const sensor_msgs::msg::Joy::SharedPtr msg)
    {
        // Handle A button press for mode switching
        bool a_button_current = msg->buttons[button_map_["A"]] == 1;
        if (a_button_current && !a_button_prev_state_)
        {
            // Toggle between IDLE and VELOCITY modes
            uint8_t new_mode = (current_mode_ == 0) ? 1 : 0;
            callSetModeService(new_mode);
        }
        a_button_prev_state_ = a_button_current;

        // Handle X button for fault reset
        if (msg->buttons[button_map_["X"]] == 1)
        {
            RCLCPP_INFO(this->get_logger(), "Reset fault requested");
            // You could add a service call here too if needed
        }

        // Handle Y button for fault reset
        if (msg->buttons[button_map_["Y"]] == 1)
        {
            RCLCPP_INFO(this->get_logger(), "BTN Y pressed");
            // You could add a service call here too if needed
        }

        // Handle Y button for fault reset
        if (msg->buttons[button_map_["B"]] == 1)
        {
            RCLCPP_INFO(this->get_logger(), "BTN B pressed");
            // You could add a service call here too if needed
        }

        // Get stick and trigger values
        float left_stick_x = msg->axes[axis_map_["LStickX"]];
        float left_stick_y = msg->axes[axis_map_["LStickY"]];
        RCLCPP_INFO(this->get_logger(), "Left stick: X=%.3f, Y=%.3f", left_stick_x, left_stick_y);
        float left_trig = (msg->axes[axis_map_["LT"]] + 1.0f) / 2.0f;  // Convert from [-1,1] to [0,1]
        float right_trig = (msg->axes[axis_map_["RT"]] + 1.0f) / 2.0f; // Convert from [-1,1] to [0,1]

        // Calculate velocity commands
        auto twist_msg = geometry_msgs::msg::Twist();
        if (current_mode_ == 1)
        {                                                                        // Only send commands in VELOCITY mode
            twist_msg.linear.x = left_stick_y * joy_gain;                        // Forward/backward
            twist_msg.linear.y = left_stick_x * joy_gain;                        // Left/right strafe
            twist_msg.angular.z = -(left_trig - right_trig) * max_angular_speed; // Rotation

            // Apply deadzone
            const float deadzone = 0.1f;
            if (fabs(twist_msg.linear.x) < deadzone)
                twist_msg.linear.x = 0.0f;
            if (fabs(twist_msg.linear.y) < deadzone)
                twist_msg.linear.y = 0.0f;
            if (fabs(twist_msg.angular.z) < deadzone)
                twist_msg.angular.z = 0.0f;

            twist_pub_->publish(twist_msg);
        }

        // Debug output
        RCLCPP_DEBUG(this->get_logger(),
                     "Mode: %d, Cmd: vx=%.2f, vy=%.2f, wz=%.2f",
                     current_mode_,
                     twist_msg.linear.x,
                     twist_msg.linear.y,
                     twist_msg.angular.z);
    }

    // Member variables
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_sub_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr twist_pub_;
    rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr heartbeat_pub_;
    rclcpp::Client<potamon_interfaces::srv::SetControlMode>::SharedPtr mode_client_;
    rclcpp::TimerBase::SharedPtr heartbeat_timer_;

    std::map<std::string, int> button_map_;
    std::map<std::string, int> axis_map_;

    uint8_t current_mode_;
    bool a_button_prev_state_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<XboxGamepadReader>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}