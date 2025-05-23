// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from potamon_interfaces:srv/SetControlMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/srv/set_control_mode.hpp"


#ifndef POTAMON_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__STRUCT_HPP_
#define POTAMON_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__potamon_interfaces__srv__SetControlMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__potamon_interfaces__srv__SetControlMode_Request __declspec(deprecated)
#endif

namespace potamon_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlMode_Request_
{
  using Type = SetControlMode_Request_<ContainerAllocator>;

  explicit SetControlMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit SetControlMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_IDLE =
    0u;
  static constexpr uint8_t MODE_VELOCITY =
    1u;
  static constexpr uint8_t MODE_TRAJECTORY =
    2u;
  static constexpr uint8_t MODE_WHEELS_VELOCITY =
    3u;
  static constexpr uint8_t MODE_WHEELS_ANGLE =
    4u;

  // pointer types
  using RawPtr =
    potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__potamon_interfaces__srv__SetControlMode_Request
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__potamon_interfaces__srv__SetControlMode_Request
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlMode_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlMode_Request_

// alias to use template instance with default allocator
using SetControlMode_Request =
  potamon_interfaces::srv::SetControlMode_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetControlMode_Request_<ContainerAllocator>::MODE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetControlMode_Request_<ContainerAllocator>::MODE_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetControlMode_Request_<ContainerAllocator>::MODE_TRAJECTORY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetControlMode_Request_<ContainerAllocator>::MODE_WHEELS_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SetControlMode_Request_<ContainerAllocator>::MODE_WHEELS_ANGLE;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace potamon_interfaces


#ifndef _WIN32
# define DEPRECATED__potamon_interfaces__srv__SetControlMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__potamon_interfaces__srv__SetControlMode_Response __declspec(deprecated)
#endif

namespace potamon_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlMode_Response_
{
  using Type = SetControlMode_Response_<ContainerAllocator>;

  explicit SetControlMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetControlMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__potamon_interfaces__srv__SetControlMode_Response
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__potamon_interfaces__srv__SetControlMode_Response
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlMode_Response_

// alias to use template instance with default allocator
using SetControlMode_Response =
  potamon_interfaces::srv::SetControlMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace potamon_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__potamon_interfaces__srv__SetControlMode_Event __attribute__((deprecated))
#else
# define DEPRECATED__potamon_interfaces__srv__SetControlMode_Event __declspec(deprecated)
#endif

namespace potamon_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetControlMode_Event_
{
  using Type = SetControlMode_Event_<ContainerAllocator>;

  explicit SetControlMode_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetControlMode_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<potamon_interfaces::srv::SetControlMode_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<potamon_interfaces::srv::SetControlMode_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__potamon_interfaces__srv__SetControlMode_Event
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__potamon_interfaces__srv__SetControlMode_Event
    std::shared_ptr<potamon_interfaces::srv::SetControlMode_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetControlMode_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetControlMode_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetControlMode_Event_

// alias to use template instance with default allocator
using SetControlMode_Event =
  potamon_interfaces::srv::SetControlMode_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace potamon_interfaces

namespace potamon_interfaces
{

namespace srv
{

struct SetControlMode
{
  using Request = potamon_interfaces::srv::SetControlMode_Request;
  using Response = potamon_interfaces::srv::SetControlMode_Response;
  using Event = potamon_interfaces::srv::SetControlMode_Event;
};

}  // namespace srv

}  // namespace potamon_interfaces

#endif  // POTAMON_INTERFACES__SRV__DETAIL__SET_CONTROL_MODE__STRUCT_HPP_
