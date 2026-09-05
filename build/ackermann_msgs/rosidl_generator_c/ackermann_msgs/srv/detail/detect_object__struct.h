// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ackermann_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_
#define ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/compressed_image__struct.h"
// Member 'prompt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DetectObject in the package ackermann_msgs.
typedef struct ackermann_msgs__srv__DetectObject_Request
{
  sensor_msgs__msg__CompressedImage image;
  rosidl_runtime_c__String prompt;
} ackermann_msgs__srv__DetectObject_Request;

// Struct for a sequence of ackermann_msgs__srv__DetectObject_Request.
typedef struct ackermann_msgs__srv__DetectObject_Request__Sequence
{
  ackermann_msgs__srv__DetectObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ackermann_msgs__srv__DetectObject_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'labels'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'confidences'
// Member 'centers_x'
// Member 'centers_y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/DetectObject in the package ackermann_msgs.
typedef struct ackermann_msgs__srv__DetectObject_Response
{
  rosidl_runtime_c__String__Sequence labels;
  rosidl_runtime_c__float__Sequence confidences;
  rosidl_runtime_c__float__Sequence centers_x;
  rosidl_runtime_c__float__Sequence centers_y;
} ackermann_msgs__srv__DetectObject_Response;

// Struct for a sequence of ackermann_msgs__srv__DetectObject_Response.
typedef struct ackermann_msgs__srv__DetectObject_Response__Sequence
{
  ackermann_msgs__srv__DetectObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ackermann_msgs__srv__DetectObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACKERMANN_MSGS__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_
