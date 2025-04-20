// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "potamon_interfaces/msg/system_status.hpp"


#ifndef POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
#define POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "potamon_interfaces/msg/detail/system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace potamon_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: bus_comms_fault
  {
    out << "bus_comms_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_comms_fault, out);
    out << ", ";
  }

  // member: usb_comms_fault
  {
    out << "usb_comms_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_comms_fault, out);
    out << ", ";
  }

  // member: bridge_faults
  {
    if (msg.bridge_faults.size() == 0) {
      out << "bridge_faults: []";
    } else {
      out << "bridge_faults: [";
      size_t pending_items = msg.bridge_faults.size();
      for (auto item : msg.bridge_faults) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: overcurrent_faults
  {
    if (msg.overcurrent_faults.size() == 0) {
      out << "overcurrent_faults: []";
    } else {
      out << "overcurrent_faults: [";
      size_t pending_items = msg.overcurrent_faults.size();
      for (auto item : msg.overcurrent_faults) {
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
  const SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bus_comms_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_comms_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_comms_fault, out);
    out << "\n";
  }

  // member: usb_comms_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_comms_fault: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_comms_fault, out);
    out << "\n";
  }

  // member: bridge_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bridge_faults.size() == 0) {
      out << "bridge_faults: []\n";
    } else {
      out << "bridge_faults:\n";
      for (auto item : msg.bridge_faults) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: overcurrent_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.overcurrent_faults.size() == 0) {
      out << "overcurrent_faults: []\n";
    } else {
      out << "overcurrent_faults:\n";
      for (auto item : msg.overcurrent_faults) {
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

inline std::string to_yaml(const SystemStatus & msg, bool use_flow_style = false)
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
  const potamon_interfaces::msg::SystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  potamon_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use potamon_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const potamon_interfaces::msg::SystemStatus & msg)
{
  return potamon_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<potamon_interfaces::msg::SystemStatus>()
{
  return "potamon_interfaces::msg::SystemStatus";
}

template<>
inline const char * name<potamon_interfaces::msg::SystemStatus>()
{
  return "potamon_interfaces/msg/SystemStatus";
}

template<>
struct has_fixed_size<potamon_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<potamon_interfaces::msg::SystemStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<potamon_interfaces::msg::SystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POTAMON_INTERFACES__MSG__DETAIL__SYSTEM_STATUS__TRAITS_HPP_
