// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kr_msgs:srv/MoveSpline.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kr_msgs/srv/detail/move_spline__rosidl_typesupport_introspection_c.h"
#include "kr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kr_msgs/srv/detail/move_spline__functions.h"
#include "kr_msgs/srv/detail/move_spline__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kr_msgs__srv__MoveSpline_Request__init(message_memory);
}

void MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_fini_function(void * message_memory)
{
  kr_msgs__srv__MoveSpline_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_member_array[11] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, rot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, ref),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ttype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, ttype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tvalue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, tvalue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, bpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "btype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, btype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bvalue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, bvalue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sync",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, sync),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orient",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, orient),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Request, horizon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_members = {
  "kr_msgs__srv",  // message namespace
  "MoveSpline_Request",  // message name
  11,  // number of fields
  sizeof(kr_msgs__srv__MoveSpline_Request),
  MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_member_array,  // message members
  MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_type_support_handle = {
  0,
  &MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline_Request)() {
  if (!MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_type_support_handle.typesupport_identifier) {
    MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveSpline_Request__rosidl_typesupport_introspection_c__MoveSpline_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "kr_msgs/srv/detail/move_spline__rosidl_typesupport_introspection_c.h"
// already included above
// #include "kr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "kr_msgs/srv/detail/move_spline__functions.h"
// already included above
// #include "kr_msgs/srv/detail/move_spline__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kr_msgs__srv__MoveSpline_Response__init(message_memory);
}

void MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_fini_function(void * message_memory)
{
  kr_msgs__srv__MoveSpline_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kr_msgs__srv__MoveSpline_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_members = {
  "kr_msgs__srv",  // message namespace
  "MoveSpline_Response",  // message name
  1,  // number of fields
  sizeof(kr_msgs__srv__MoveSpline_Response),
  MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_member_array,  // message members
  MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_type_support_handle = {
  0,
  &MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline_Response)() {
  if (!MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_type_support_handle.typesupport_identifier) {
    MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveSpline_Response__rosidl_typesupport_introspection_c__MoveSpline_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "kr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "kr_msgs/srv/detail/move_spline__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_members = {
  "kr_msgs__srv",  // service namespace
  "MoveSpline",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_Request_message_type_support_handle,
  NULL  // response message
  // kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_Response_message_type_support_handle
};

static rosidl_service_type_support_t kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_type_support_handle = {
  0,
  &kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kr_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline)() {
  if (!kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_type_support_handle.typesupport_identifier) {
    kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kr_msgs, srv, MoveSpline_Response)()->data;
  }

  return &kr_msgs__srv__detail__move_spline__rosidl_typesupport_introspection_c__MoveSpline_service_type_support_handle;
}