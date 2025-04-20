// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from potamon_interfaces:msg/WheelAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_angles.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__STRUCT_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__potamon_interfaces__msg__WheelAngles __attribute__((deprecated))
#else
# define DEPRECATED__potamon_interfaces__msg__WheelAngles __declspec(deprecated)
#endif

namespace potamon_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelAngles_
{
  using Type = WheelAngles_<ContainerAllocator>;

  explicit WheelAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->angles.begin(), this->angles.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
    }
  }

  explicit WheelAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angles(_alloc),
    angular_velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->angles.begin(), this->angles.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->angular_velocity.begin(), this->angular_velocity.end(), 0.0f);
    }
  }

  // field types and members
  using _angles_type =
    std::array<float, 4>;
  _angles_type angles;
  using _angular_velocity_type =
    std::array<float, 4>;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__angles(
    const std::array<float, 4> & _arg)
  {
    this->angles = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::array<float, 4> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    potamon_interfaces::msg::WheelAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const potamon_interfaces::msg::WheelAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::msg::WheelAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::msg::WheelAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__potamon_interfaces__msg__WheelAngles
    std::shared_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__potamon_interfaces__msg__WheelAngles
    std::shared_ptr<potamon_interfaces::msg::WheelAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelAngles_ & other) const
  {
    if (this->angles != other.angles) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelAngles_

// alias to use template instance with default allocator
using WheelAngles =
  potamon_interfaces::msg::WheelAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__STRUCT_HPP_
