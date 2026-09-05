// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ackermann_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ackermann_msgs/srv/detail/detect_object__rosidl_typesupport_introspection_c.h"
#include "ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ackermann_msgs/srv/detail/detect_object__functions.h"
#include "ackermann_msgs/srv/detail/detect_object__struct.h"


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/compressed_image.h"
// Member `image`
#include "sensor_msgs/msg/detail/compressed_image__rosidl_typesupport_introspection_c.h"
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ackermann_msgs__srv__DetectObject_Request__init(message_memory);
}

void ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_fini_function(void * message_memory)
{
  ackermann_msgs__srv__DetectObject_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_member_array[2] = {
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__srv__DetectObject_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prompt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__srv__DetectObject_Request, prompt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_members = {
  "ackermann_msgs__srv",  // message namespace
  "DetectObject_Request",  // message name
  2,  // number of fields
  sizeof(ackermann_msgs__srv__DetectObject_Request),
  ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_member_array,  // message members
  ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_type_support_handle = {
  0,
  &ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ackermann_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject_Request)() {
  ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CompressedImage)();
  if (!ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_type_support_handle.typesupport_identifier) {
    ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ackermann_msgs__srv__DetectObject_Request__rosidl_typesupport_introspection_c__DetectObject_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ackermann_msgs/srv/detail/detect_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ackermann_msgs/srv/detail/detect_object__functions.h"
// already included above
// #include "ackermann_msgs/srv/detail/detect_object__struct.h"


// Include directives for member types
// Member `labels`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `confidences`
// Member `centers_x`
// Member `centers_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ackermann_msgs__srv__DetectObject_Response__init(message_memory);
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_fini_function(void * message_memory)
{
  ackermann_msgs__srv__DetectObject_Response__fini(message_memory);
}

size_t ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__labels(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__labels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__labels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__labels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__labels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__labels(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__confidences(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__confidences(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__confidences(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__confidences(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__confidences(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__confidences(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__confidences(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__confidences(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__centers_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__centers_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__centers_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__centers_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__centers_x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__centers_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__centers_x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__centers_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__centers_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__centers_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__centers_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__centers_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__centers_y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__centers_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__centers_y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__centers_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_member_array[4] = {
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__srv__DetectObject_Response, labels),  // bytes offset in struct
    NULL,  // default value
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__labels,  // size() function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__labels,  // get_const(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__labels,  // get(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__labels,  // fetch(index, &value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__labels,  // assign(index, value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__labels  // resize(index) function pointer
  },
  {
    "confidences",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__srv__DetectObject_Response, confidences),  // bytes offset in struct
    NULL,  // default value
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__confidences,  // size() function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__confidences,  // get_const(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__confidences,  // get(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__confidences,  // fetch(index, &value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__confidences,  // assign(index, value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__confidences  // resize(index) function pointer
  },
  {
    "centers_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__srv__DetectObject_Response, centers_x),  // bytes offset in struct
    NULL,  // default value
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__centers_x,  // size() function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__centers_x,  // get_const(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__centers_x,  // get(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__centers_x,  // fetch(index, &value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__centers_x,  // assign(index, value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__centers_x  // resize(index) function pointer
  },
  {
    "centers_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ackermann_msgs__srv__DetectObject_Response, centers_y),  // bytes offset in struct
    NULL,  // default value
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__size_function__DetectObject_Response__centers_y,  // size() function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_const_function__DetectObject_Response__centers_y,  // get_const(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__get_function__DetectObject_Response__centers_y,  // get(index) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__fetch_function__DetectObject_Response__centers_y,  // fetch(index, &value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__assign_function__DetectObject_Response__centers_y,  // assign(index, value) function pointer
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__resize_function__DetectObject_Response__centers_y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_members = {
  "ackermann_msgs__srv",  // message namespace
  "DetectObject_Response",  // message name
  4,  // number of fields
  sizeof(ackermann_msgs__srv__DetectObject_Response),
  ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_member_array,  // message members
  ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_type_support_handle = {
  0,
  &ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ackermann_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject_Response)() {
  if (!ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_type_support_handle.typesupport_identifier) {
    ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ackermann_msgs__srv__DetectObject_Response__rosidl_typesupport_introspection_c__DetectObject_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ackermann_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ackermann_msgs/srv/detail/detect_object__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_members = {
  "ackermann_msgs__srv",  // service namespace
  "DetectObject",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_Request_message_type_support_handle,
  NULL  // response message
  // ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_Response_message_type_support_handle
};

static rosidl_service_type_support_t ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_type_support_handle = {
  0,
  &ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ackermann_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject)() {
  if (!ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_type_support_handle.typesupport_identifier) {
    ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ackermann_msgs, srv, DetectObject_Response)()->data;
  }

  return &ackermann_msgs__srv__detail__detect_object__rosidl_typesupport_introspection_c__DetectObject_service_type_support_handle;
}
