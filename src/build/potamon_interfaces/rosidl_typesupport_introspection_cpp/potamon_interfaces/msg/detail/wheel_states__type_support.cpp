// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from potamon_interfaces:msg/WheelStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "potamon_interfaces/msg/detail/wheel_states__functions.h"
#include "potamon_interfaces/msg/detail/wheel_states__struct.hpp"
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

void WheelStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) potamon_interfaces::msg::WheelStates(_init);
}

void WheelStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<potamon_interfaces::msg::WheelStates *>(message_memory);
  typed_message->~WheelStates();
}

size_t size_function__WheelStates__angle(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__angle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__angle(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__angle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__angle(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__WheelStates__angular_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__angular_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__angular_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__angular_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__angular_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__WheelStates__current(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelStates__current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelStates__current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelStates__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelStates__current(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelStates__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelStates__current(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelStates_message_member_array[3] = {
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::WheelStates, angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__angle,  // size() function pointer
    get_const_function__WheelStates__angle,  // get_const(index) function pointer
    get_function__WheelStates__angle,  // get(index) function pointer
    fetch_function__WheelStates__angle,  // fetch(index, &value) function pointer
    assign_function__WheelStates__angle,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::WheelStates, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__angular_velocity,  // size() function pointer
    get_const_function__WheelStates__angular_velocity,  // get_const(index) function pointer
    get_function__WheelStates__angular_velocity,  // get(index) function pointer
    fetch_function__WheelStates__angular_velocity,  // fetch(index, &value) function pointer
    assign_function__WheelStates__angular_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::WheelStates, current),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelStates__current,  // size() function pointer
    get_const_function__WheelStates__current,  // get_const(index) function pointer
    get_function__WheelStates__current,  // get(index) function pointer
    fetch_function__WheelStates__current,  // fetch(index, &value) function pointer
    assign_function__WheelStates__current,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelStates_message_members = {
  "potamon_interfaces::msg",  // message namespace
  "WheelStates",  // message name
  3,  // number of fields
  sizeof(potamon_interfaces::msg::WheelStates),
  false,  // has_any_key_member_
  WheelStates_message_member_array,  // message members
  WheelStates_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelStates_message_members,
  get_message_typesupport_handle_function,
  &potamon_interfaces__msg__WheelStates__get_type_hash,
  &potamon_interfaces__msg__WheelStates__get_type_description,
  &potamon_interfaces__msg__WheelStates__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace potamon_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<potamon_interfaces::msg::WheelStates>()
{
  return &::potamon_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, potamon_interfaces, msg, WheelStates)() {
  return &::potamon_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
