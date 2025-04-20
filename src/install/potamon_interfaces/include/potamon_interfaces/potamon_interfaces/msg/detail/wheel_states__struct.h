// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from potamon_interfaces:msg/WheelStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_states.h"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__STRUCT_H_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/WheelStates in the package potamon_interfaces.
typedef struct potamon_interfaces__msg__WheelStates
{
  /// Radians (for each of 4 motors)
  float angle[4];
  /// Radians/sec (for each motor)
  float angular_velocity[4];
  /// Amperes (for each motor)
  float current[4];
} potamon_interfaces__msg__WheelStates;

// Struct for a sequence of potamon_interfaces__msg__WheelStates.
typedef struct potamon_interfaces__msg__WheelStates__Sequence
{
  potamon_interfaces__msg__WheelStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} potamon_interfaces__msg__WheelStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__STRUCT_H_
