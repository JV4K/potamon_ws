// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from potamon_interfaces:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include "potamon_interfaces/msg/detail/system_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__msg__SystemStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x33, 0x8b, 0x5c, 0x35, 0x8a, 0x93, 0xf3,
      0x6e, 0xfe, 0x95, 0xda, 0x52, 0x3e, 0x85, 0x5f,
      0xf0, 0xd5, 0xfc, 0xf6, 0xcf, 0x85, 0xb0, 0xf8,
      0x77, 0xc2, 0x3b, 0x39, 0xeb, 0x4e, 0x6e, 0x33,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char potamon_interfaces__msg__SystemStatus__TYPE_NAME[] = "potamon_interfaces/msg/SystemStatus";

// Define type names, field names, and default values
static char potamon_interfaces__msg__SystemStatus__FIELD_NAME__bus_comms_fault[] = "bus_comms_fault";
static char potamon_interfaces__msg__SystemStatus__FIELD_NAME__usb_comms_fault[] = "usb_comms_fault";
static char potamon_interfaces__msg__SystemStatus__FIELD_NAME__bridge_faults[] = "bridge_faults";
static char potamon_interfaces__msg__SystemStatus__FIELD_NAME__overcurrent_faults[] = "overcurrent_faults";

static rosidl_runtime_c__type_description__Field potamon_interfaces__msg__SystemStatus__FIELDS[] = {
  {
    {potamon_interfaces__msg__SystemStatus__FIELD_NAME__bus_comms_fault, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__msg__SystemStatus__FIELD_NAME__usb_comms_fault, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__msg__SystemStatus__FIELD_NAME__bridge_faults, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__msg__SystemStatus__FIELD_NAME__overcurrent_faults, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
potamon_interfaces__msg__SystemStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__msg__SystemStatus__TYPE_NAME, 35, 35},
      {potamon_interfaces__msg__SystemStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool bus_comms_fault          # True if bus communication failed\n"
  "bool usb_comms_fault          # True if USB communication failed\n"
  "bool[4] bridge_faults         # Fault flags for each motor bridge (index 0-3)\n"
  "bool[4] overcurrent_faults    # Overcurrent flags for each motor (index 0-3)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__msg__SystemStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__msg__SystemStatus__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 284, 284},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__msg__SystemStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__msg__SystemStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
