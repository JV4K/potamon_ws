// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from potamon_interfaces:msg/WheelAngles.idl
// generated code does not contain a copyright notice

#include "potamon_interfaces/msg/detail/wheel_angles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__msg__WheelAngles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd5, 0xb2, 0x6e, 0xed, 0x4f, 0x30, 0x7e, 0x6f,
      0x62, 0x00, 0x59, 0xc4, 0x59, 0xd8, 0x85, 0x62,
      0x01, 0x80, 0xdd, 0x30, 0xc9, 0xcb, 0xdd, 0x95,
      0x89, 0x44, 0x5c, 0x67, 0xf7, 0x09, 0x2f, 0x50,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char potamon_interfaces__msg__WheelAngles__TYPE_NAME[] = "potamon_interfaces/msg/WheelAngles";

// Define type names, field names, and default values
static char potamon_interfaces__msg__WheelAngles__FIELD_NAME__angles[] = "angles";
static char potamon_interfaces__msg__WheelAngles__FIELD_NAME__angular_velocity[] = "angular_velocity";

static rosidl_runtime_c__type_description__Field potamon_interfaces__msg__WheelAngles__FIELDS[] = {
  {
    {potamon_interfaces__msg__WheelAngles__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      4,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__msg__WheelAngles__FIELD_NAME__angular_velocity, 16, 16},
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
potamon_interfaces__msg__WheelAngles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__msg__WheelAngles__TYPE_NAME, 34, 34},
      {potamon_interfaces__msg__WheelAngles__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[4] angles            # Target angles (radians) for 4 wheels\n"
  "float32[4] angular_velocity  # Target angular velocities (rad/s) for 4 wheels";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__msg__WheelAngles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__msg__WheelAngles__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 145, 145},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__msg__WheelAngles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__msg__WheelAngles__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
