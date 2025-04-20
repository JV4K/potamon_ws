// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from potamon_interfaces:msg/WheelAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/wheel_angles.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__TRAITS_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "potamon_interfaces/msg/detail/wheel_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace potamon_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelAngles & msg, bool use_flow_style = false)
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
  const potamon_interfaces::msg::WheelAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  potamon_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use potamon_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const potamon_interfaces::msg::WheelAngles & msg)
{
  return potamon_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<potamon_interfaces::msg::WheelAngles>()
{
  return "potamon_interfaces::msg::WheelAngles";
}

template<>
inline const char * name<potamon_interfaces::msg::WheelAngles>()
{
  return "potamon_interfaces/msg/WheelAngles";
}

template<>
struct has_fixed_size<potamon_interfaces::msg::WheelAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<potamon_interfaces::msg::WheelAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<potamon_interfaces::msg::WheelAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POTAMON_INTERFACES__MSG__DETAIL__WHEEL_ANGLES__TRAITS_HPP_
