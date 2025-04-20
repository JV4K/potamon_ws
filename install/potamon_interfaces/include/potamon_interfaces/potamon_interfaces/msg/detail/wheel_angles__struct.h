// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from potamon_interfaces:msg/WheelAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_angles.h"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__STRUCT_H_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WheelAngles in the package potamon_interfaces.
typedef struct potamon_interfaces__msg__WheelAngles
{
  /// Target angles (radians) for 4 wheels
  float angles[4];
  /// Target angular velocities (rad/s) for 4 wheels
  float angular_velocity[4];
} potamon_interfaces__msg__WheelAngles;

// Struct for a sequence of potamon_interfaces__msg__WheelAngles.
typedef struct potamon_interfaces__msg__WheelAngles__Sequence
{
  potamon_interfaces__msg__WheelAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} potamon_interfaces__msg__WheelAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__STRUCT_H_
