// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from potamon_interfaces:msg/WheelAngles.idl
// generated code does not contain a copyright notice
#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "potamon_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "potamon_interfaces/msg/detail/wheel_angles__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
bool cdr_serialize_potamon_interfaces__msg__WheelAngles(
  const potamon_interfaces__msg__WheelAngles * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
bool cdr_deserialize_potamon_interfaces__msg__WheelAngles(
  eprosima::fastcdr::Cdr &,
  potamon_interfaces__msg__WheelAngles * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
size_t get_serialized_size_potamon_interfaces__msg__WheelAngles(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
size_t max_serialized_size_potamon_interfaces__msg__WheelAngles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
bool cdr_serialize_key_potamon_interfaces__msg__WheelAngles(
  const potamon_interfaces__msg__WheelAngles * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
size_t get_serialized_size_key_potamon_interfaces__msg__WheelAngles(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
size_t max_serialized_size_key_potamon_interfaces__msg__WheelAngles(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_potamon_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, potamon_interfaces, msg, WheelAngles)();

#ifdef __cplusplus
}
#endif

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
