// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from potamon_interfaces:msg/WheelStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_states.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__BUILDER_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "potamon_interfaces/msg/detail/wheel_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace potamon_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelStates_current
{
public:
  explicit Init_WheelStates_current(::potamon_interfaces::msg::WheelStates & msg)
  : msg_(msg)
  {}
  ::potamon_interfaces::msg::WheelStates current(::potamon_interfaces::msg::WheelStates::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::potamon_interfaces::msg::WheelStates msg_;
};

class Init_WheelStates_angular_velocity
{
public:
  explicit Init_WheelStates_angular_velocity(::potamon_interfaces::msg::WheelStates & msg)
  : msg_(msg)
  {}
  Init_WheelStates_current angular_velocity(::potamon_interfaces::msg::WheelStates::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_WheelStates_current(msg_);
  }

private:
  ::potamon_interfaces::msg::WheelStates msg_;
};

class Init_WheelStates_angle
{
public:
  Init_WheelStates_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelStates_angular_velocity angle(::potamon_interfaces::msg::WheelStates::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_WheelStates_angular_velocity(msg_);
  }

private:
  ::potamon_interfaces::msg::WheelStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::potamon_interfaces::msg::WheelStates>()
{
  return potamon_interfaces::msg::builder::Init_WheelStates_angle();
}

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__BUILDER_HPP_
