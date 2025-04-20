// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from potamon_interfaces:msg/WheelStates.idl
// generated code does not contain a copyright notice

#include "potamon_interfaces/msg/detail/wheel_states__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__msg__WheelStates__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0x70, 0x1a, 0x86, 0xa0, 0xf9, 0xd8, 0x78,
      0x71, 0x16, 0x5e, 0xf4, 0x66, 0x03, 0xbd, 0xd5,
      0xb1, 0x3b, 0x54, 0xf8, 0x50, 0x44, 0xc6, 0x8c,
      0x45, 0x59, 0x5a, 0xa6, 0x97, 0x92, 0xa1, 0x40,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char potamon_interfaces__msg__WheelStates__TYPE_NAME[] = "potamon_interfaces/msg/WheelStates";

// Define type names, field names, and default values
static char potamon_interfaces__msg__WheelStates__FIELD_NAME__angle[] = "angle";
static char potamon_interfaces__msg__WheelStates__FIELD_NAME__angular_velocity[] = "angular_velocity";
static char potamon_interfaces__msg__WheelStates__FIELD_NAME__current[] = "current";

static rosidl_runtime_c__type_description__Field potamon_interfaces__msg__WheelStates__FIELDS[] = {
  {
    {potamon_interfaces__msg__WheelStates__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__msg__WheelStates__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__msg__WheelStates__FIELD_NAME__current, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
potamon_interfaces__msg__WheelStates__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__msg__WheelStates__TYPE_NAME, 34, 34},
      {potamon_interfaces__msg__WheelStates__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[4] angle           # Radians (for each of 4 motors)\n"
  "float32[4] angular_velocity # Radians/sec (for each motor)\n"
  "float32[4] current         # Amperes (for each motor)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__msg__WheelStates__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__msg__WheelStates__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 172, 172},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__msg__WheelStates__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__msg__WheelStates__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
