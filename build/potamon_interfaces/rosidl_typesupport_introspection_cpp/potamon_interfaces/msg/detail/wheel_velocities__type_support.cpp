// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from potamon_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "potamon_interfaces/msg/detail/wheel_velocities__functions.h"
#include "potamon_interfaces/msg/detail/wheel_velocities__struct.hpp"
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

void WheelVelocities_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) potamon_interfaces::msg::WheelVelocities(_init);
}

void WheelVelocities_fini_function(void * message_memory)
{
  auto typed_message = static_cast<potamon_interfaces::msg::WheelVelocities *>(message_memory);
  typed_message->~WheelVelocities();
}

size_t size_function__WheelVelocities__velocities(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__WheelVelocities__velocities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelVelocities__velocities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelVelocities__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__WheelVelocities__velocities(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__WheelVelocities__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__WheelVelocities__velocities(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelVelocities_message_member_array[1] = {
  {
    "velocities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(potamon_interfaces::msg::WheelVelocities, velocities),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelVelocities__velocities,  // size() function pointer
    get_const_function__WheelVelocities__velocities,  // get_const(index) function pointer
    get_function__WheelVelocities__velocities,  // get(index) function pointer
    fetch_function__WheelVelocities__velocities,  // fetch(index, &value) function pointer
    assign_function__WheelVelocities__velocities,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelVelocities_message_members = {
  "potamon_interfaces::msg",  // message namespace
  "WheelVelocities",  // message name
  1,  // number of fields
  sizeof(potamon_interfaces::msg::WheelVelocities),
  false,  // has_any_key_member_
  WheelVelocities_message_member_array,  // message members
  WheelVelocities_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelVelocities_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelVelocities_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelVelocities_message_members,
  get_message_typesupport_handle_function,
  &potamon_interfaces__msg__WheelVelocities__get_type_hash,
  &potamon_interfaces__msg__WheelVelocities__get_type_description,
  &potamon_interfaces__msg__WheelVelocities__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace potamon_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<potamon_interfaces::msg::WheelVelocities>()
{
  return &::potamon_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelVelocities_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, potamon_interfaces, msg, WheelVelocities)() {
  return &::potamon_interfaces::msg::rosidl_typesupport_introspection_cpp::WheelVelocities_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
