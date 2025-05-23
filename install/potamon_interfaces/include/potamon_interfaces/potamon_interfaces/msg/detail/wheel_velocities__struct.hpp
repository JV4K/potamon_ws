// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from potamon_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_velocities.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__potamon_interfaces__msg__WheelVelocities __attribute__((deprecated))
#else
# define DEPRECATED__potamon_interfaces__msg__WheelVelocities __declspec(deprecated)
#endif

namespace potamon_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelVelocities_
{
  using Type = WheelVelocities_<ContainerAllocator>;

  explicit WheelVelocities_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->velocities.begin(), this->velocities.end(), 0.0f);
    }
  }

  explicit WheelVelocities_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocities(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->velocities.begin(), this->velocities.end(), 0.0f);
    }
  }

  // field types and members
  using _velocities_type =
    std::array<float, 4>;
  _velocities_type velocities;

  // setters for named parameter idiom
  Type & set__velocities(
    const std::array<float, 4> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    potamon_interfaces::msg::WheelVelocities_<ContainerAllocator> *;
  using ConstRawPtr =
    const potamon_interfaces::msg::WheelVelocities_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::msg::WheelVelocities_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::msg::WheelVelocities_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__potamon_interfaces__msg__WheelVelocities
    std::shared_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__potamon_interfaces__msg__WheelVelocities
    std::shared_ptr<potamon_interfaces::msg::WheelVelocities_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelVelocities_ & other) const
  {
    if (this->velocities != other.velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelVelocities_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelVelocities_

// alias to use template instance with default allocator
using WheelVelocities =
  potamon_interfaces::msg::WheelVelocities_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_VELOCITIES__STRUCT_HPP_
