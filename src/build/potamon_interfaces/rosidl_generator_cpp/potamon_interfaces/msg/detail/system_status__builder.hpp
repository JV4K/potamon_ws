// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/system_status.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "potamon_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace potamon_interfaces
{

namespace msg
{

namespace builder
{

class Init_SystemStatus_overcurrent_faults
{
public:
  explicit Init_SystemStatus_overcurrent_faults(::potamon_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  ::potamon_interfaces::msg::SystemStatus overcurrent_faults(::potamon_interfaces::msg::SystemStatus::_overcurrent_faults_type arg)
  {
    msg_.overcurrent_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::potamon_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_bridge_faults
{
public:
  explicit Init_SystemStatus_bridge_faults(::potamon_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_overcurrent_faults bridge_faults(::potamon_interfaces::msg::SystemStatus::_bridge_faults_type arg)
  {
    msg_.bridge_faults = std::move(arg);
    return Init_SystemStatus_overcurrent_faults(msg_);
  }

private:
  ::potamon_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_usb_comms_fault
{
public:
  explicit Init_SystemStatus_usb_comms_fault(::potamon_interfaces::msg::SystemStatus & msg)
  : msg_(msg)
  {}
  Init_SystemStatus_bridge_faults usb_comms_fault(::potamon_interfaces::msg::SystemStatus::_usb_comms_fault_type arg)
  {
    msg_.usb_comms_fault = std::move(arg);
    return Init_SystemStatus_bridge_faults(msg_);
  }

private:
  ::potamon_interfaces::msg::SystemStatus msg_;
};

class Init_SystemStatus_bus_comms_fault
{
public:
  Init_SystemStatus_bus_comms_fault()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemStatus_usb_comms_fault bus_comms_fault(::potamon_interfaces::msg::SystemStatus::_bus_comms_fault_type arg)
  {
    msg_.bus_comms_fault = std::move(arg);
    return Init_SystemStatus_usb_comms_fault(msg_);
  }

private:
  ::potamon_interfaces::msg::SystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::potamon_interfaces::msg::SystemStatus>()
{
  return potamon_interfaces::msg::builder::Init_SystemStatus_bus_comms_fault();
}

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__BUILDER_HPP_
