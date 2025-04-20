// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "potamon_interfaces/msg/detail/system_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "potamon_interfaces/msg/detail/system_status__functions.h"
#include "potamon_interfaces/msg/detail/system_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace potamon_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
cdr_serialize(
  const potamon_interfaces::msg::SystemStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bus_comms_fault
  cdr << (ros_message.bus_comms_fault ? true : false);

  // Member: usb_comms_fault
  cdr << (ros_message.usb_comms_fault ? true : false);

  // Member: bridge_faults
  {
    cdr << ros_message.bridge_faults;
  }

  // Member: overcurrent_faults
  {
    cdr << ros_message.overcurrent_faults;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  potamon_interfaces::msg::SystemStatus & ros_message)
{
  // Member: bus_comms_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.bus_comms_fault = tmp ? true : false;
  }

  // Member: usb_comms_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.usb_comms_fault = tmp ? true : false;
  }

  // Member: bridge_faults
  {
    cdr >> ros_message.bridge_faults;
  }

  // Member: overcurrent_faults
  {
    cdr >> ros_message.overcurrent_faults;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
get_serialized_size(
  const potamon_interfaces::msg::SystemStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bus_comms_fault
  {
    size_t item_size = sizeof(ros_message.bus_comms_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: usb_comms_fault
  {
    size_t item_size = sizeof(ros_message.usb_comms_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bridge_faults
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.bridge_faults[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: overcurrent_faults
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.overcurrent_faults[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
max_serialized_size_SystemStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: bus_comms_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: usb_comms_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: bridge_faults
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: overcurrent_faults
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = potamon_interfaces::msg::SystemStatus;
    is_plain =
      (
      offsetof(DataType, overcurrent_faults) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
cdr_serialize_key(
  const potamon_interfaces::msg::SystemStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bus_comms_fault
  cdr << (ros_message.bus_comms_fault ? true : false);

  // Member: usb_comms_fault
  cdr << (ros_message.usb_comms_fault ? true : false);

  // Member: bridge_faults
  {
    cdr << ros_message.bridge_faults;
  }

  // Member: overcurrent_faults
  {
    cdr << ros_message.overcurrent_faults;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
get_serialized_size_key(
  const potamon_interfaces::msg::SystemStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bus_comms_fault
  {
    size_t item_size = sizeof(ros_message.bus_comms_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: usb_comms_fault
  {
    size_t item_size = sizeof(ros_message.usb_comms_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: bridge_faults
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.bridge_faults[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: overcurrent_faults
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.overcurrent_faults[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_potamon_interfaces
max_serialized_size_key_SystemStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: bus_comms_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usb_comms_fault
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bridge_faults
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overcurrent_faults
  {
    size_t array_size = 4;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = potamon_interfaces::msg::SystemStatus;
    is_plain =
      (
      offsetof(DataType, overcurrent_faults) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _SystemStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const potamon_interfaces::msg::SystemStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SystemStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<potamon_interfaces::msg::SystemStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SystemStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const potamon_interfaces::msg::SystemStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SystemStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SystemStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SystemStatus__callbacks = {
  "potamon_interfaces::msg",
  "SystemStatus",
  _SystemStatus__cdr_serialize,
  _SystemStatus__cdr_deserialize,
  _SystemStatus__get_serialized_size,
  _SystemStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SystemStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SystemStatus__callbacks,
  get_message_typesupport_handle_function,
  &potamon_interfaces__msg__SystemStatus__get_type_hash,
  &potamon_interfaces__msg__SystemStatus__get_type_description,
  &potamon_interfaces__msg__SystemStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace potamon_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_potamon_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<potamon_interfaces::msg::SystemStatus>()
{
  return &potamon_interfaces::msg::typesupport_fastrtps_cpp::_SystemStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, potamon_interfaces, msg, SystemStatus)() {
  return &potamon_interfaces::msg::typesupport_fastrtps_cpp::_SystemStatus__handle;
}

#ifdef __cplusplus
}
#endif
