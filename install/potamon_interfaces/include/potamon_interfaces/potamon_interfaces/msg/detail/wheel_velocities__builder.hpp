// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from potamon_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_velocities.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "potamon_interfaces/msg/detail/wheel_velocities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace potamon_interfaces
{

namespace msg
{

namespace builder
{

class Init_WheelVelocities_velocities
{
public:
  Init_WheelVelocities_velocities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::potamon_interfaces::msg::WheelVelocities velocities(::potamon_interfaces::msg::WheelVelocities::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::potamon_interfaces::msg::WheelVelocities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::potamon_interfaces::msg::WheelVelocities>()
{
  return potamon_interfaces::msg::builder::Init_WheelVelocities_velocities();
}

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__BUILDER_HPP_
