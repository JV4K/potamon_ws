// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from potamon_interfaces:msg/WheelVelocities.idl
// generated code does not contain a copyright notice

#include "potamon_interfaces/msg/detail/wheel_velocities__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__msg__WheelVelocities__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x69, 0xc1, 0xf6, 0x56, 0xa5, 0xa1, 0x9f, 0xe7,
      0xe2, 0x51, 0x83, 0x89, 0x7b, 0x88, 0xc3, 0xa4,
      0x13, 0x15, 0x94, 0x2c, 0xcb, 0xe9, 0xf2, 0xe8,
      0x94, 0xcc, 0xf4, 0x6e, 0x33, 0xb4, 0x2c, 0x4e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char potamon_interfaces__msg__WheelVelocities__TYPE_NAME[] = "potamon_interfaces/msg/WheelVelocities";

// Define type names, field names, and default values
static char potamon_interfaces__msg__WheelVelocities__FIELD_NAME__velocities[] = "velocities";

static rosidl_runtime_c__type_description__Field potamon_interfaces__msg__WheelVelocities__FIELDS[] = {
  {
    {potamon_interfaces__msg__WheelVelocities__FIELD_NAME__velocities, 10, 10},
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
potamon_interfaces__msg__WheelVelocities__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__msg__WheelVelocities__TYPE_NAME, 38, 38},
      {potamon_interfaces__msg__WheelVelocities__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[4] velocities  # Angular velocities (rad/s) for 4 wheels";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__msg__WheelVelocities__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__msg__WheelVelocities__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__msg__WheelVelocities__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__msg__WheelVelocities__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
