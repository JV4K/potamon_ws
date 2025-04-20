// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from potamon_interfaces:srv/SetControlMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "potamon_interfaces/srv/detail/set_control_mode__struct.h"
#include "potamon_interfaces/srv/detail/set_control_mode__type_support.h"
#include "potamon_interfaces/srv/detail/set_control_mode__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace potamon_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetControlMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetControlMode_Request_type_support_ids_t;

static const _SetControlMode_Request_type_support_ids_t _SetControlMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetControlMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetControlMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetControlMode_Request_type_support_symbol_names_t _SetControlMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, potamon_interfaces, srv, SetControlMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, potamon_interfaces, srv, SetControlMode_Request)),
  }
};

typedef struct _SetControlMode_Request_type_support_data_t
{
  void * data[2];
} _SetControlMode_Request_type_support_data_t;

static _SetControlMode_Request_type_support_data_t _SetControlMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetControlMode_Request_message_typesupport_map = {
  2,
  "potamon_interfaces",
  &_SetControlMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetControlMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetControlMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetControlMode_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetControlMode_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &potamon_interfaces__srv__SetControlMode_Request__get_type_hash,
  &potamon_interfaces__srv__SetControlMode_Request__get_type_description,
  &potamon_interfaces__srv__SetControlMode_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace potamon_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, potamon_interfaces, srv, SetControlMode_Request)() {
  return &::potamon_interfaces::srv::rosidl_typesupport_c::SetControlMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__struct.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__type_support.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace potamon_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetControlMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetControlMode_Response_type_support_ids_t;

static const _SetControlMode_Response_type_support_ids_t _SetControlMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetControlMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetControlMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetControlMode_Response_type_support_symbol_names_t _SetControlMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, potamon_interfaces, srv, SetControlMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, potamon_interfaces, srv, SetControlMode_Response)),
  }
};

typedef struct _SetControlMode_Response_type_support_data_t
{
  void * data[2];
} _SetControlMode_Response_type_support_data_t;

static _SetControlMode_Response_type_support_data_t _SetControlMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetControlMode_Response_message_typesupport_map = {
  2,
  "potamon_interfaces",
  &_SetControlMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetControlMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetControlMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetControlMode_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetControlMode_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &potamon_interfaces__srv__SetControlMode_Response__get_type_hash,
  &potamon_interfaces__srv__SetControlMode_Response__get_type_description,
  &potamon_interfaces__srv__SetControlMode_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace potamon_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, potamon_interfaces, srv, SetControlMode_Response)() {
  return &::potamon_interfaces::srv::rosidl_typesupport_c::SetControlMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__struct.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__type_support.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace potamon_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetControlMode_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetControlMode_Event_type_support_ids_t;

static const _SetControlMode_Event_type_support_ids_t _SetControlMode_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetControlMode_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetControlMode_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetControlMode_Event_type_support_symbol_names_t _SetControlMode_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, potamon_interfaces, srv, SetControlMode_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, potamon_interfaces, srv, SetControlMode_Event)),
  }
};

typedef struct _SetControlMode_Event_type_support_data_t
{
  void * data[2];
} _SetControlMode_Event_type_support_data_t;

static _SetControlMode_Event_type_support_data_t _SetControlMode_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetControlMode_Event_message_typesupport_map = {
  2,
  "potamon_interfaces",
  &_SetControlMode_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetControlMode_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetControlMode_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetControlMode_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetControlMode_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &potamon_interfaces__srv__SetControlMode_Event__get_type_hash,
  &potamon_interfaces__srv__SetControlMode_Event__get_type_description,
  &potamon_interfaces__srv__SetControlMode_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace potamon_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, potamon_interfaces, srv, SetControlMode_Event)() {
  return &::potamon_interfaces::srv::rosidl_typesupport_c::SetControlMode_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "potamon_interfaces/srv/detail/set_control_mode__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace potamon_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetControlMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetControlMode_type_support_ids_t;

static const _SetControlMode_type_support_ids_t _SetControlMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetControlMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetControlMode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetControlMode_type_support_symbol_names_t _SetControlMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, potamon_interfaces, srv, SetControlMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, potamon_interfaces, srv, SetControlMode)),
  }
};

typedef struct _SetControlMode_type_support_data_t
{
  void * data[2];
} _SetControlMode_type_support_data_t;

static _SetControlMode_type_support_data_t _SetControlMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetControlMode_service_typesupport_map = {
  2,
  "potamon_interfaces",
  &_SetControlMode_service_typesupport_ids.typesupport_identifier[0],
  &_SetControlMode_service_typesupport_symbol_names.symbol_name[0],
  &_SetControlMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetControlMode_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetControlMode_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetControlMode_Request_message_type_support_handle,
  &SetControlMode_Response_message_type_support_handle,
  &SetControlMode_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    potamon_interfaces,
    srv,
    SetControlMode
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    potamon_interfaces,
    srv,
    SetControlMode
  ),
  &potamon_interfaces__srv__SetControlMode__get_type_hash,
  &potamon_interfaces__srv__SetControlMode__get_type_description,
  &potamon_interfaces__srv__SetControlMode__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace potamon_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, potamon_interfaces, srv, SetControlMode)() {
  return &::potamon_interfaces::srv::rosidl_typesupport_c::SetControlMode_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
