// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/system_status.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__potamon_interfaces__msg__SystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__potamon_interfaces__msg__SystemStatus __declspec(deprecated)
#endif

namespace potamon_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemStatus_
{
  using Type = SystemStatus_<ContainerAllocator>;

  explicit SystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus_comms_fault = false;
      this->usb_comms_fault = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->bridge_faults.begin(), this->bridge_faults.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->overcurrent_faults.begin(), this->overcurrent_faults.end(), false);
    }
  }

  explicit SystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bridge_faults(_alloc),
    overcurrent_faults(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bus_comms_fault = false;
      this->usb_comms_fault = false;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->bridge_faults.begin(), this->bridge_faults.end(), false);
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->overcurrent_faults.begin(), this->overcurrent_faults.end(), false);
    }
  }

  // field types and members
  using _bus_comms_fault_type =
    bool;
  _bus_comms_fault_type bus_comms_fault;
  using _usb_comms_fault_type =
    bool;
  _usb_comms_fault_type usb_comms_fault;
  using _bridge_faults_type =
    std::array<bool, 4>;
  _bridge_faults_type bridge_faults;
  using _overcurrent_faults_type =
    std::array<bool, 4>;
  _overcurrent_faults_type overcurrent_faults;

  // setters for named parameter idiom
  Type & set__bus_comms_fault(
    const bool & _arg)
  {
    this->bus_comms_fault = _arg;
    return *this;
  }
  Type & set__usb_comms_fault(
    const bool & _arg)
  {
    this->usb_comms_fault = _arg;
    return *this;
  }
  Type & set__bridge_faults(
    const std::array<bool, 4> & _arg)
  {
    this->bridge_faults = _arg;
    return *this;
  }
  Type & set__overcurrent_faults(
    const std::array<bool, 4> & _arg)
  {
    this->overcurrent_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    potamon_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const potamon_interfaces::msg::SystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::msg::SystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__potamon_interfaces__msg__SystemStatus
    std::shared_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__potamon_interfaces__msg__SystemStatus
    std::shared_ptr<potamon_interfaces::msg::SystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemStatus_ & other) const
  {
    if (this->bus_comms_fault != other.bus_comms_fault) {
      return false;
    }
    if (this->usb_comms_fault != other.usb_comms_fault) {
      return false;
    }
    if (this->bridge_faults != other.bridge_faults) {
      return false;
    }
    if (this->overcurrent_faults != other.overcurrent_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemStatus_

// alias to use template instance with default allocator
using SystemStatus =
  potamon_interfaces::msg::SystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__STRUCT_HPP_
