// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from potamon_interfaces:msg/WheelStates.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_states.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__TRAITS_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "potamon_interfaces/msg/detail/wheel_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace potamon_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    if (msg.angle.size() == 0) {
      out << "angle: []";
    } else {
      out << "angle: [";
      size_t pending_items = msg.angle.size();
      for (auto item : msg.angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_velocity
  {
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []";
    } else {
      out << "angular_velocity: [";
      size_t pending_items = msg.angular_velocity.size();
      for (auto item : msg.angular_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current
  {
    if (msg.current.size() == 0) {
      out << "current: []";
    } else {
      out << "current: [";
      size_t pending_items = msg.current.size();
      for (auto item : msg.current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angle.size() == 0) {
      out << "angle: []\n";
    } else {
      out << "angle:\n";
      for (auto item : msg.angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_velocity.size() == 0) {
      out << "angular_velocity: []\n";
    } else {
      out << "angular_velocity:\n";
      for (auto item : msg.angular_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current.size() == 0) {
      out << "current: []\n";
    } else {
      out << "current:\n";
      for (auto item : msg.current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelStates & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace potamon_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use potamon_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const potamon_interfaces::msg::WheelStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  potamon_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use potamon_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const potamon_interfaces::msg::WheelStates & msg)
{
  return potamon_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<potamon_interfaces::msg::WheelStates>()
{
  return "potamon_interfaces::msg::WheelStates";
}

template<>
inline const char * name<potamon_interfaces::msg::WheelStates>()
{
  return "potamon_interfaces/msg/WheelStates";
}

template<>
struct has_fixed_size<potamon_interfaces::msg::WheelStates>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<potamon_interfaces::msg::WheelStates>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<potamon_interfaces::msg::WheelStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_STATES__TRAITS_HPP_
