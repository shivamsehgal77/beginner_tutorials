// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from cpp_pubsub:srv/ModifyMessage.idl
// generated code does not contain a copyright notice

#include "cpp_pubsub/srv/detail/modify_message__type_support.h"

#include "cpp_pubsub/srv/detail/modify_message__struct.h"
#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cpp_pubsub {

namespace srv {

namespace rosidl_typesupport_c {

typedef struct _ModifyMessage_Request_type_support_ids_t {
  const char *typesupport_identifier[2];
} _ModifyMessage_Request_type_support_ids_t;

static const _ModifyMessage_Request_type_support_ids_t
    _ModifyMessage_Request_message_typesupport_ids = {{
        "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
        "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    }};

typedef struct _ModifyMessage_Request_type_support_symbol_names_t {
  const char *symbol_name[2];
} _ModifyMessage_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyMessage_Request_type_support_symbol_names_t
    _ModifyMessage_Request_message_typesupport_symbol_names = {{
        STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
            rosidl_typesupport_fastrtps_c, cpp_pubsub, srv,
            ModifyMessage_Request)),
        STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
            rosidl_typesupport_introspection_c, cpp_pubsub, srv,
            ModifyMessage_Request)),
    }};

typedef struct _ModifyMessage_Request_type_support_data_t {
  void *data[2];
} _ModifyMessage_Request_type_support_data_t;

static _ModifyMessage_Request_type_support_data_t
    _ModifyMessage_Request_message_typesupport_data = {{
        0,  // will store the shared library later
        0,  // will store the shared library later
    }};

static const type_support_map_t _ModifyMessage_Request_message_typesupport_map =
    {
        2,
        "cpp_pubsub",
        &_ModifyMessage_Request_message_typesupport_ids
             .typesupport_identifier[0],
        &_ModifyMessage_Request_message_typesupport_symbol_names.symbol_name[0],
        &_ModifyMessage_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t
    ModifyMessage_Request_message_type_support_handle = {
        rosidl_typesupport_c__typesupport_identifier,
        reinterpret_cast<const type_support_map_t *>(
            &_ModifyMessage_Request_message_typesupport_map),
        rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cpp_pubsub

#ifdef __cplusplus
extern "C" {
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c,
                                                  cpp_pubsub, srv,
                                                  ModifyMessage_Request)() {
  return &::cpp_pubsub::srv::rosidl_typesupport_c::
      ModifyMessage_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cpp_pubsub/srv/detail/modify_message__struct.h"
// already included above
// #include "cpp_pubsub/srv/detail/modify_message__type_support.h"
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

namespace cpp_pubsub {

namespace srv {

namespace rosidl_typesupport_c {

typedef struct _ModifyMessage_Response_type_support_ids_t {
  const char *typesupport_identifier[2];
} _ModifyMessage_Response_type_support_ids_t;

static const _ModifyMessage_Response_type_support_ids_t
    _ModifyMessage_Response_message_typesupport_ids = {{
        "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
        "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    }};

typedef struct _ModifyMessage_Response_type_support_symbol_names_t {
  const char *symbol_name[2];
} _ModifyMessage_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyMessage_Response_type_support_symbol_names_t
    _ModifyMessage_Response_message_typesupport_symbol_names = {{
        STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
            rosidl_typesupport_fastrtps_c, cpp_pubsub, srv,
            ModifyMessage_Response)),
        STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
            rosidl_typesupport_introspection_c, cpp_pubsub, srv,
            ModifyMessage_Response)),
    }};

typedef struct _ModifyMessage_Response_type_support_data_t {
  void *data[2];
} _ModifyMessage_Response_type_support_data_t;

static _ModifyMessage_Response_type_support_data_t
    _ModifyMessage_Response_message_typesupport_data = {{
        0,  // will store the shared library later
        0,  // will store the shared library later
    }};

static const type_support_map_t
    _ModifyMessage_Response_message_typesupport_map = {
        2,
        "cpp_pubsub",
        &_ModifyMessage_Response_message_typesupport_ids
             .typesupport_identifier[0],
        &_ModifyMessage_Response_message_typesupport_symbol_names
             .symbol_name[0],
        &_ModifyMessage_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t
    ModifyMessage_Response_message_type_support_handle = {
        rosidl_typesupport_c__typesupport_identifier,
        reinterpret_cast<const type_support_map_t *>(
            &_ModifyMessage_Response_message_typesupport_map),
        rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cpp_pubsub

#ifdef __cplusplus
extern "C" {
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c,
                                                  cpp_pubsub, srv,
                                                  ModifyMessage_Response)() {
  return &::cpp_pubsub::srv::rosidl_typesupport_c::
      ModifyMessage_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cpp_pubsub/srv/detail/modify_message__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cpp_pubsub {

namespace srv {

namespace rosidl_typesupport_c {

typedef struct _ModifyMessage_type_support_ids_t {
  const char *typesupport_identifier[2];
} _ModifyMessage_type_support_ids_t;

static const _ModifyMessage_type_support_ids_t
    _ModifyMessage_service_typesupport_ids = {{
        "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
        "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
    }};

typedef struct _ModifyMessage_type_support_symbol_names_t {
  const char *symbol_name[2];
} _ModifyMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ModifyMessage_type_support_symbol_names_t
    _ModifyMessage_service_typesupport_symbol_names = {{
        STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
            rosidl_typesupport_fastrtps_c, cpp_pubsub, srv, ModifyMessage)),
        STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
            rosidl_typesupport_introspection_c, cpp_pubsub, srv,
            ModifyMessage)),
    }};

typedef struct _ModifyMessage_type_support_data_t {
  void *data[2];
} _ModifyMessage_type_support_data_t;

static _ModifyMessage_type_support_data_t
    _ModifyMessage_service_typesupport_data = {{
        0,  // will store the shared library later
        0,  // will store the shared library later
    }};

static const type_support_map_t _ModifyMessage_service_typesupport_map = {
    2,
    "cpp_pubsub",
    &_ModifyMessage_service_typesupport_ids.typesupport_identifier[0],
    &_ModifyMessage_service_typesupport_symbol_names.symbol_name[0],
    &_ModifyMessage_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t
    ModifyMessage_service_type_support_handle = {
        rosidl_typesupport_c__typesupport_identifier,
        reinterpret_cast<const type_support_map_t *>(
            &_ModifyMessage_service_typesupport_map),
        rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace cpp_pubsub

#ifdef __cplusplus
extern "C" {
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c,
                                                  cpp_pubsub, srv,
                                                  ModifyMessage)() {
  return &::cpp_pubsub::srv::rosidl_typesupport_c::
      ModifyMessage_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
