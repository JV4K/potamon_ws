// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from potamon_interfaces:srv/SetControlMode.idl
// generated code does not contain a copyright notice

#include "potamon_interfaces/srv/detail/set_control_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__srv__SetControlMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0xc6, 0xaa, 0x7b, 0x53, 0x65, 0x59, 0xf6,
      0x45, 0x71, 0x51, 0xe6, 0x97, 0x5f, 0x01, 0x9b,
      0x30, 0xbe, 0xc1, 0xcd, 0xf5, 0x4a, 0x68, 0x25,
      0xe4, 0x24, 0x29, 0xa4, 0xd3, 0x50, 0x39, 0x04,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__srv__SetControlMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0x5e, 0xe5, 0xfc, 0xbe, 0x61, 0x80, 0xe3,
      0xe4, 0xe8, 0x61, 0x15, 0x9c, 0xaa, 0xa5, 0x19,
      0x94, 0x9d, 0x66, 0xa5, 0x96, 0x8a, 0xcb, 0x11,
      0xd8, 0x4b, 0xa6, 0xb8, 0x5d, 0x2b, 0xb5, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__srv__SetControlMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x8d, 0x05, 0x78, 0x29, 0x1c, 0x51, 0x28,
      0xf1, 0xa4, 0xd4, 0x6c, 0xcf, 0x5f, 0x71, 0x56,
      0xad, 0x09, 0x90, 0xa3, 0x1f, 0x5d, 0x20, 0x87,
      0x14, 0x39, 0xac, 0x17, 0xb2, 0x05, 0x9a, 0x2c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_potamon_interfaces
const rosidl_type_hash_t *
potamon_interfaces__srv__SetControlMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x19, 0xff, 0x3f, 0x0d, 0xbf, 0xb5, 0x31, 0x80,
      0x1c, 0x99, 0xe1, 0xf9, 0x19, 0xdc, 0xd3, 0x0c,
      0x67, 0xa8, 0x25, 0xe8, 0x0b, 0x89, 0x08, 0x05,
      0x74, 0x51, 0xab, 0xd8, 0x96, 0x33, 0x4c, 0x34,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char potamon_interfaces__srv__SetControlMode__TYPE_NAME[] = "potamon_interfaces/srv/SetControlMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char potamon_interfaces__srv__SetControlMode_Event__TYPE_NAME[] = "potamon_interfaces/srv/SetControlMode_Event";
static char potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME[] = "potamon_interfaces/srv/SetControlMode_Request";
static char potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME[] = "potamon_interfaces/srv/SetControlMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char potamon_interfaces__srv__SetControlMode__FIELD_NAME__request_message[] = "request_message";
static char potamon_interfaces__srv__SetControlMode__FIELD_NAME__response_message[] = "response_message";
static char potamon_interfaces__srv__SetControlMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field potamon_interfaces__srv__SetControlMode__FIELDS[] = {
  {
    {potamon_interfaces__srv__SetControlMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {potamon_interfaces__srv__SetControlMode_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription potamon_interfaces__srv__SetControlMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
potamon_interfaces__srv__SetControlMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__srv__SetControlMode__TYPE_NAME, 37, 37},
      {potamon_interfaces__srv__SetControlMode__FIELDS, 3, 3},
    },
    {potamon_interfaces__srv__SetControlMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = potamon_interfaces__srv__SetControlMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = potamon_interfaces__srv__SetControlMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = potamon_interfaces__srv__SetControlMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char potamon_interfaces__srv__SetControlMode_Request__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field potamon_interfaces__srv__SetControlMode_Request__FIELDS[] = {
  {
    {potamon_interfaces__srv__SetControlMode_Request__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
potamon_interfaces__srv__SetControlMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME, 45, 45},
      {potamon_interfaces__srv__SetControlMode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char potamon_interfaces__srv__SetControlMode_Response__FIELD_NAME__success[] = "success";
static char potamon_interfaces__srv__SetControlMode_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field potamon_interfaces__srv__SetControlMode_Response__FIELDS[] = {
  {
    {potamon_interfaces__srv__SetControlMode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
potamon_interfaces__srv__SetControlMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME, 46, 46},
      {potamon_interfaces__srv__SetControlMode_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char potamon_interfaces__srv__SetControlMode_Event__FIELD_NAME__info[] = "info";
static char potamon_interfaces__srv__SetControlMode_Event__FIELD_NAME__request[] = "request";
static char potamon_interfaces__srv__SetControlMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field potamon_interfaces__srv__SetControlMode_Event__FIELDS[] = {
  {
    {potamon_interfaces__srv__SetControlMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription potamon_interfaces__srv__SetControlMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
potamon_interfaces__srv__SetControlMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {potamon_interfaces__srv__SetControlMode_Event__TYPE_NAME, 43, 43},
      {potamon_interfaces__srv__SetControlMode_Event__FIELDS, 3, 3},
    },
    {potamon_interfaces__srv__SetControlMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = potamon_interfaces__srv__SetControlMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = potamon_interfaces__srv__SetControlMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 MODE_IDLE=0 # \\xd0\\xa1\\xd1\\x82\\xd0\\xbe\\xd0\\xbf\n"
  "uint8 MODE_VELOCITY=1 # \\xd0\\xa3\\xd0\\xbf\\xd1\\x80\\xd0\\xb0\\xd0\\xb2\\xd0\\xbb\\xd0\\xb5\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd1\\x81\\xd0\\xba\\xd0\\xbe\\xd1\\x80\\xd0\\xbe\\xd1\\x81\\xd1\\x82\\xd1\\x8c\\xd1\\x8e \\xd0\\xbf\\xd0\\xbb\\xd0\\xb0\\xd1\\x82\\xd1\\x84\\xd0\\xbe\\xd1\\x80\\xd0\\xbc\\xd1\\x8b (vx, vy, wz)\n"
  "uint8 MODE_TRAJECTORY=2 # \\xd0\\xa2\\xd1\\x80\\xd0\\xb0\\xd0\\xb5\\xd0\\xba\\xd1\\x82\\xd0\\xbe\\xd1\\x80\\xd0\\xb8\\xd1\\x8f ...\n"
  "uint8 MODE_WHEELS_VELOCITY=3 # \\xd0\\xa3\\xd0\\xbf\\xd1\\x80\\xd0\\xb0\\xd0\\xb2\\xd0\\xbb\\xd0\\xb5\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd1\\x81\\xd0\\xba\\xd0\\xbe\\xd1\\x80\\xd0\\xbe\\xd1\\x81\\xd1\\x82\\xd1\\x8f\\xd0\\xbc\\xd0\\xb8 \\xd0\\xba\\xd0\\xbe\\xd0\\xbb\\xd0\\xb5\\xd1\\x81\n"
  "uint8 MODE_WHEELS_ANGLE=4 # \\xd0\\xa3\\xd0\\xbf\\xd1\\x80\\xd0\\xb0\\xd0\\xb2\\xd0\\xbb\\xd0\\xb5\\xd0\\xbd\\xd0\\xb8\\xd0\\xb5 \\xd1\\x83\\xd0\\xb3\\xd0\\xbb\\xd0\\xb0\\xd0\\xbc\\xd0\\xb8 \\xd0\\xba\\xd0\\xbe\\xd0\\xbb\\xd0\\xb5\\xd1\\x81\n"
  "uint8 mode               # Requested control mode (use the constants above)\n"
  "---\n"
  "bool success             # True if mode switch succeeded\n"
  "string message           # Status/error message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__srv__SetControlMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__srv__SetControlMode__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 429, 429},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__srv__SetControlMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__srv__SetControlMode_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__srv__SetControlMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__srv__SetControlMode_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
potamon_interfaces__srv__SetControlMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {potamon_interfaces__srv__SetControlMode_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__srv__SetControlMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__srv__SetControlMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *potamon_interfaces__srv__SetControlMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *potamon_interfaces__srv__SetControlMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *potamon_interfaces__srv__SetControlMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__srv__SetControlMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__srv__SetControlMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__srv__SetControlMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__srv__SetControlMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
potamon_interfaces__srv__SetControlMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *potamon_interfaces__srv__SetControlMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *potamon_interfaces__srv__SetControlMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *potamon_interfaces__srv__SetControlMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
