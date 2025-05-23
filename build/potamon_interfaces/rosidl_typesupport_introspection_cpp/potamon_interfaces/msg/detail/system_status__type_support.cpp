// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "potamon_interfaces/msg/detail/system_status__functions.h"
#include "potamon_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace potamon_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SystemStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) potamon_interfaces::msg::SystemStatus(_init);
}

void SystemStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<potamon_interfaces::msg::SystemStatus *>(message_memory);
  typed_message->~SystemStatus();
}

size_t size_function__SystemStatus__bridge_faults(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SystemStatus__bridge_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemStatus__bridge_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemStatus__bridge_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SystemStatus__bridge_faults(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SystemStatus__bridge_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SystemStatus__bridge_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__SystemStatus__overcurrent_faults(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SystemStatus__overcurrent_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemStatus__overcurrent_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemStatus__overcurrent_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SystemStatus__overcurrent_faults(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SystemStatus__overcurrent_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SystemStatus__overcurrent_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemStatus_message_member_array[4] = {
  {
    "bus_comms_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::SystemStatus, bus_comms_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "usb_comms_fault",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::SystemStatus, usb_comms_fault),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bridge_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::SystemStatus, bridge_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemStatus__bridge_faults,  // size() function pointer
    get_const_function__SystemStatus__bridge_faults,  // get_const(index) function pointer
    get_function__SystemStatus__bridge_faults,  // get(index) function pointer
    fetch_function__SystemStatus__bridge_faults,  // fetch(index, &value) function pointer
    assign_function__SystemStatus__bridge_faults,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "overcurrent_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::SystemStatus, overcurrent_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemStatus__overcurrent_faults,  // size() function pointer
    get_const_function__SystemStatus__overcurrent_faults,  // get_const(index) function pointer
    get_function__SystemStatus__overcurrent_faults,  // get(index) function pointer
    fetch_function__SystemStatus__overcurrent_faults,  // fetch(index, &value) function pointer
    assign_function__SystemStatus__overcurrent_faults,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemStatus_message_members = {
  "potamon_interfaces::msg",  // message namespace
  "SystemStatus",  // message name
  4,  // number of fields
  sizeof(potamon_interfaces::msg::SystemStatus),
  false,  // has_any_key_member_
  SystemStatus_message_member_array,  // message members
  SystemStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemStatus_message_members,
  get_message_typesupport_handle_function,
  &potamon_interfaces__msg__SystemStatus__get_type_hash,
  &potamon_interfaces__msg__SystemStatus__get_type_description,
  &potamon_interfaces__msg__SystemStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace potamon_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<potamon_interfaces::msg::SystemStatus>()
{
  return &::potamon_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, potamon_interfaces, msg, SystemStatus)() {
  return &::potamon_interfaces::msg::rosidl_typesupport_introspection_cpp::SystemStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
