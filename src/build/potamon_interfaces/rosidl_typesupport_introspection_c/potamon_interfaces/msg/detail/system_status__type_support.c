// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "potamon_interfaces/msg/detail/system_status__rosidl_typesupport_introspection_c.h"
#include "potamon_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "potamon_interfaces/msg/detail/system_status__functions.h"
#include "potamon_interfaces/msg/detail/system_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  potamon_interfaces__msg__SystemStatus__init(message_memory);
}

void potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function(void * message_memory)
{
  potamon_interfaces__msg__SystemStatus__fini(message_memory);
}

size_t potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__bridge_faults(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__bridge_faults(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__bridge_faults(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__bridge_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__bridge_faults(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__bridge_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__bridge_faults(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__overcurrent_faults(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__overcurrent_faults(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__overcurrent_faults(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__overcurrent_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__overcurrent_faults(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__overcurrent_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__overcurrent_faults(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[4] = {
  {
    "bus_comms_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces__msg__SystemStatus, bus_comms_fault),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "usb_comms_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces__msg__SystemStatus, usb_comms_fault),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bridge_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces__msg__SystemStatus, bridge_faults),  // bytes offset in struct
    NULL,  // default value
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__bridge_faults,  // size() function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__bridge_faults,  // get_const(index) function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__bridge_faults,  // get(index) function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__bridge_faults,  // fetch(index, &value) function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__bridge_faults,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overcurrent_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces__msg__SystemStatus, overcurrent_faults),  // bytes offset in struct
    NULL,  // default value
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__overcurrent_faults,  // size() function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__overcurrent_faults,  // get_const(index) function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__overcurrent_faults,  // get(index) function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__overcurrent_faults,  // fetch(index, &value) function pointer
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__overcurrent_faults,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members = {
  "potamon_interfaces__msg",  // message namespace
  "SystemStatus",  // message name
  4,  // number of fields
  sizeof(potamon_interfaces__msg__SystemStatus),
  false,  // has_any_key_member_
  potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array,  // message members
  potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle = {
  0,
  &potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members,
  get_message_typesupport_handle_function,
  &potamon_interfaces__msg__SystemStatus__get_type_hash,
  &potamon_interfaces__msg__SystemStatus__get_type_description,
  &potamon_interfaces__msg__SystemStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_potamon_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, potamon_interfaces, msg, SystemStatus)() {
  if (!potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier) {
    potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &potamon_interfaces__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
