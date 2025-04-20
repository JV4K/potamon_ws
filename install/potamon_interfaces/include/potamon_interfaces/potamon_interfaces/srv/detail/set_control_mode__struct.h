// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from potamon_interfaces:srv/SetControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/srv/set_control_mode.h"


#ifndef POTAMON_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__STRUCT_H_
#define POTAMON_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_IDLE'.
/**
  * Стоп
 */
enum
{
  potamon_interfaces__srv__SetControlMode_Request__MODE_IDLE = 0
};

/// Constant 'MODE_VELOCITY'.
/**
  * Управление скоростью платформы (vx, vy, wz)
 */
enum
{
  potamon_interfaces__srv__SetControlMode_Request__MODE_VELOCITY = 1
};

/// Constant 'MODE_TRAJECTORY'.
/**
  * Траектория ...
 */
enum
{
  potamon_interfaces__srv__SetControlMode_Request__MODE_TRAJECTORY = 2
};

/// Constant 'MODE_WHEELS_VELOCITY'.
/**
  * Управление скоростями колес
 */
enum
{
  potamon_interfaces__srv__SetControlMode_Request__MODE_WHEELS_VELOCITY = 3
};

/// Constant 'MODE_WHEELS_ANGLE'.
/**
  * Управление углами колес
 */
enum
{
  potamon_interfaces__srv__SetControlMode_Request__MODE_WHEELS_ANGLE = 4
};

/// Struct defined in srv/SetControlMode in the package potamon_interfaces.
typedef struct potamon_interfaces__srv__SetControlMode_Request
{
  /// Requested control mode (use the constants above)
  uint8_t mode;
} potamon_interfaces__srv__SetControlMode_Request;

// Struct for a sequence of potamon_interfaces__srv__SetControlMode_Request.
typedef struct potamon_interfaces__srv__SetControlMode_Request__Sequence
{
  potamon_interfaces__srv__SetControlMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} potamon_interfaces__srv__SetControlMode_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetControlMode in the package potamon_interfaces.
typedef struct potamon_interfaces__srv__SetControlMode_Response
{
  /// True if mode switch succeeded
  bool success;
  /// Status/error message
  rosidl_runtime_c__String message;
} potamon_interfaces__srv__SetControlMode_Response;

// Struct for a sequence of potamon_interfaces__srv__SetControlMode_Response.
typedef struct potamon_interfaces__srv__SetControlMode_Response__Sequence
{
  potamon_interfaces__srv__SetControlMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} potamon_interfaces__srv__SetControlMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  potamon_interfaces__srv__SetControlMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  potamon_interfaces__srv__SetControlMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetControlMode in the package potamon_interfaces.
typedef struct potamon_interfaces__srv__SetControlMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  potamon_interfaces__srv__SetControlMode_Request__Sequence request;
  potamon_interfaces__srv__SetControlMode_Response__Sequence response;
} potamon_interfaces__srv__SetControlMode_Event;

// Struct for a sequence of potamon_interfaces__srv__SetControlMode_Event.
typedef struct potamon_interfaces__srv__SetControlMode_Event__Sequence
{
  potamon_interfaces__srv__SetControlMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} potamon_interfaces__srv__SetControlMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POTAMON_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__STRUCT_H_
