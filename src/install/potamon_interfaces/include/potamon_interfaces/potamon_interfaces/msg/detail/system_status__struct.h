// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/system_status.h"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SystemStatus in the package potamon_interfaces.
typedef struct potamon_interfaces__msg__SystemStatus
{
  /// True if bus communication failed
  bool bus_comms_fault;
  /// True if USB communication failed
  bool usb_comms_fault;
  /// Fault flags for each motor bridge (index 0-3)
  bool bridge_faults[4];
  /// Overcurrent flags for each motor (index 0-3)
  bool overcurrent_faults[4];
} potamon_interfaces__msg__SystemStatus;

// Struct for a sequence of potamon_interfaces__msg__SystemStatus.
typedef struct potamon_interfaces__msg__SystemStatus__Sequence
{
  potamon_interfaces__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} potamon_interfaces__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
