// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from potamon_interfaces:msg/WheelAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_angles.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__BUILDER_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "potamon_interfaces/msg/detail/wheel_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace potamon_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelAngles_angular_velocity
{
public:
  explicit Init_WheelAngles_angular_velocity(::potamon_interfaces::msg::WheelAngles & msg)
  : msg_(msg)
  {}
  ::potamon_interfaces::msg::WheelAngles angular_velocity(::potamon_interfaces::msg::WheelAngles::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::potamon_interfaces::msg::WheelAngles msg_;
};

class Init_WheelAngles_angles
{
public:
  Init_WheelAngles_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelAngles_angular_velocity angles(::potamon_interfaces::msg::WheelAngles::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_WheelAngles_angular_velocity(msg_);
  }

private:
  ::potamon_interfaces::msg::WheelAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::potamon_interfaces::msg::WheelAngles>()
{
  return potamon_interfaces::msg::builder::Init_WheelAngles_angles();
}

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__BUILDER_HPP_
