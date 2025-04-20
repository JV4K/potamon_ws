#ifndef _POTAMON_USB_VCP_
#define _POTAMON_USB_VCP_

#include "stdint.h"

typedef enum
{
    IDLE,
    VELOCITY,
    WHEELS_VELOCITY,
    WHEELS_ANGLE
} VCP_mode_cmd_t;

typedef struct
{
    uint8_t MODE; // look VCP_mode_cmd_t enum
    // Bit field of flags for feature control
    // 7,6 - RSVD
    // 5 - USR_INF_BEEP
    // 4 - HEADING_PID_EN
    // 3 - GLOB_DOM_CTRL_EN
    // 2 - CLR_OVC_FLT
    // 1 - RST_ENC
    // 0 - RST_ODO
    uint8_t FLAGS;

    // Platform vel task
    int16_t VX; // m/s * 1024 (signed)
    int16_t VY; // m/s * 1024 (signed)
    int16_t WZ; // rad/s * 1024 (signed)

    // Heading pid task
    int16_t HEADING_TASK; // [-pi; pi] rad * 4096 (signed)

    // Motor individual tasks
    int32_t M1_ANG_TASK; // rad * 1024 (signed)
    int16_t M1_VEL_TASK; // rad/s * 512 (signed)
    int32_t M2_ANG_TASK; // rad * 1024 (signed)
    int16_t M2_VEL_TASK; // rad/s * 512 (signed)
    int32_t M3_ANG_TASK; // rad * 1024 (signed)
    int16_t M3_VEL_TASK; // rad/s * 512 (signed)
    int32_t M4_ANG_TASK; // rad * 1024 (signed)
    int16_t M4_VEL_TASK; // rad/s * 512 (signed)

} __attribute__((packed)) ptmn_usb_host_t;

typedef struct
{
    // Bit field of fault flags
    // 7 - RSVD
    // 6 - BUS_FAULT
    // 5 - REAR_BRG_FAULT
    // 4 - FRONT_BRG_FAULT
    // 3 - MT4_OVC_FAULT
    // 2 - MT3_OVC_FAULT
    // 1 - MT2_OVC_FAULT
    // 0 - MT1_OVC_FAULT
    uint8_t STAT;

    uint16_t FLAGS; // RSVD

    // Odometry platform velocities feedback
    int16_t VX_FB; // m/s * 1024 (signed)
    int16_t VY_FB; // m/s * 1024 (signed)
    int16_t WZ_FB; // rad/s * 1024 (signed)

    // Odometry platform pose feedback
    float X_FB;   // meters
    float Y_FB;   // meters
    float PHI_FB; // rad [0; 2pi)

    // IMU data feedback
    int16_t IMU_LACC_X;
    int16_t IMU_LACC_Y;
    int16_t IMU_LACC_Z;

    int16_t IMU_GYRO_X;
    int16_t IMU_GYRO_Y;
    int16_t IMU_GYRO_Z;

    int16_t IMU_Q_W; // Q14
    int16_t IMU_Q_X; // Q14
    int16_t IMU_Q_Y; // Q14
    int16_t IMU_Q_Z; // Q14

    // Motor feedbacks (angle, angular velocity and current)
    int32_t M1_ANG_FB; // rad * 1024 (signed)
    int16_t M1_VEL_FB; // rad/s * 512 (signed)
    int16_t M1_CUR_FB; // A * 1024 (signed)

    int32_t M2_ANG_FB; // rad * 1024 (signed)
    int16_t M2_VEL_FB; // rad/s * 512 (signed)
    int16_t M2_CUR_FB; // A * 1024 (signed)

    int32_t M3_ANG_FB; // rad * 1024 (signed)
    int16_t M3_VEL_FB; // rad/s * 512 (signed)
    int16_t M3_CUR_FB; // A * 1024 (signed)

    int32_t M4_ANG_FB; // rad * 1024 (signed)
    int16_t M4_VEL_FB; // rad/s * 512 (signed)
    int16_t M4_CUR_FB; // A * 1024 (signed)

} __attribute__((packed)) ptmn_usb_device_t;

#endif