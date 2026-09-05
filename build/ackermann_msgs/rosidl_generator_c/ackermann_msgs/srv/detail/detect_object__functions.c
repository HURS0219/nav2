// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ackermann_msgs:srv/DetectObject.idl
// generated code does not contain a copyright notice
#include "ackermann_msgs/srv/detail/detect_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/compressed_image__functions.h"
// Member `prompt`
#include "rosidl_runtime_c/string_functions.h"

bool
ackermann_msgs__srv__DetectObject_Request__init(ackermann_msgs__srv__DetectObject_Request * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__CompressedImage__init(&msg->image)) {
    ackermann_msgs__srv__DetectObject_Request__fini(msg);
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    ackermann_msgs__srv__DetectObject_Request__fini(msg);
    return false;
  }
  return true;
}

void
ackermann_msgs__srv__DetectObject_Request__fini(ackermann_msgs__srv__DetectObject_Request * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__CompressedImage__fini(&msg->image);
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
}

bool
ackermann_msgs__srv__DetectObject_Request__are_equal(const ackermann_msgs__srv__DetectObject_Request * lhs, const ackermann_msgs__srv__DetectObject_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__CompressedImage__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  return true;
}

bool
ackermann_msgs__srv__DetectObject_Request__copy(
  const ackermann_msgs__srv__DetectObject_Request * input,
  ackermann_msgs__srv__DetectObject_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__CompressedImage__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  return true;
}

ackermann_msgs__srv__DetectObject_Request *
ackermann_msgs__srv__DetectObject_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__srv__DetectObject_Request * msg = (ackermann_msgs__srv__DetectObject_Request *)allocator.allocate(sizeof(ackermann_msgs__srv__DetectObject_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ackermann_msgs__srv__DetectObject_Request));
  bool success = ackermann_msgs__srv__DetectObject_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ackermann_msgs__srv__DetectObject_Request__destroy(ackermann_msgs__srv__DetectObject_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ackermann_msgs__srv__DetectObject_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ackermann_msgs__srv__DetectObject_Request__Sequence__init(ackermann_msgs__srv__DetectObject_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__srv__DetectObject_Request * data = NULL;

  if (size) {
    data = (ackermann_msgs__srv__DetectObject_Request *)allocator.zero_allocate(size, sizeof(ackermann_msgs__srv__DetectObject_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ackermann_msgs__srv__DetectObject_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ackermann_msgs__srv__DetectObject_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ackermann_msgs__srv__DetectObject_Request__Sequence__fini(ackermann_msgs__srv__DetectObject_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ackermann_msgs__srv__DetectObject_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ackermann_msgs__srv__DetectObject_Request__Sequence *
ackermann_msgs__srv__DetectObject_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__srv__DetectObject_Request__Sequence * array = (ackermann_msgs__srv__DetectObject_Request__Sequence *)allocator.allocate(sizeof(ackermann_msgs__srv__DetectObject_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ackermann_msgs__srv__DetectObject_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ackermann_msgs__srv__DetectObject_Request__Sequence__destroy(ackermann_msgs__srv__DetectObject_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ackermann_msgs__srv__DetectObject_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ackermann_msgs__srv__DetectObject_Request__Sequence__are_equal(const ackermann_msgs__srv__DetectObject_Request__Sequence * lhs, const ackermann_msgs__srv__DetectObject_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ackermann_msgs__srv__DetectObject_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ackermann_msgs__srv__DetectObject_Request__Sequence__copy(
  const ackermann_msgs__srv__DetectObject_Request__Sequence * input,
  ackermann_msgs__srv__DetectObject_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ackermann_msgs__srv__DetectObject_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ackermann_msgs__srv__DetectObject_Request * data =
      (ackermann_msgs__srv__DetectObject_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ackermann_msgs__srv__DetectObject_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ackermann_msgs__srv__DetectObject_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ackermann_msgs__srv__DetectObject_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `labels`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `confidences`
// Member `centers_x`
// Member `centers_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ackermann_msgs__srv__DetectObject_Response__init(ackermann_msgs__srv__DetectObject_Response * msg)
{
  if (!msg) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__init(&msg->labels, 0)) {
    ackermann_msgs__srv__DetectObject_Response__fini(msg);
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__init(&msg->confidences, 0)) {
    ackermann_msgs__srv__DetectObject_Response__fini(msg);
    return false;
  }
  // centers_x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->centers_x, 0)) {
    ackermann_msgs__srv__DetectObject_Response__fini(msg);
    return false;
  }
  // centers_y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->centers_y, 0)) {
    ackermann_msgs__srv__DetectObject_Response__fini(msg);
    return false;
  }
  return true;
}

void
ackermann_msgs__srv__DetectObject_Response__fini(ackermann_msgs__srv__DetectObject_Response * msg)
{
  if (!msg) {
    return;
  }
  // labels
  rosidl_runtime_c__String__Sequence__fini(&msg->labels);
  // confidences
  rosidl_runtime_c__float__Sequence__fini(&msg->confidences);
  // centers_x
  rosidl_runtime_c__float__Sequence__fini(&msg->centers_x);
  // centers_y
  rosidl_runtime_c__float__Sequence__fini(&msg->centers_y);
}

bool
ackermann_msgs__srv__DetectObject_Response__are_equal(const ackermann_msgs__srv__DetectObject_Response * lhs, const ackermann_msgs__srv__DetectObject_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->labels), &(rhs->labels)))
  {
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->confidences), &(rhs->confidences)))
  {
    return false;
  }
  // centers_x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->centers_x), &(rhs->centers_x)))
  {
    return false;
  }
  // centers_y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->centers_y), &(rhs->centers_y)))
  {
    return false;
  }
  return true;
}

bool
ackermann_msgs__srv__DetectObject_Response__copy(
  const ackermann_msgs__srv__DetectObject_Response * input,
  ackermann_msgs__srv__DetectObject_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->labels), &(output->labels)))
  {
    return false;
  }
  // confidences
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->confidences), &(output->confidences)))
  {
    return false;
  }
  // centers_x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->centers_x), &(output->centers_x)))
  {
    return false;
  }
  // centers_y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->centers_y), &(output->centers_y)))
  {
    return false;
  }
  return true;
}

ackermann_msgs__srv__DetectObject_Response *
ackermann_msgs__srv__DetectObject_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__srv__DetectObject_Response * msg = (ackermann_msgs__srv__DetectObject_Response *)allocator.allocate(sizeof(ackermann_msgs__srv__DetectObject_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ackermann_msgs__srv__DetectObject_Response));
  bool success = ackermann_msgs__srv__DetectObject_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ackermann_msgs__srv__DetectObject_Response__destroy(ackermann_msgs__srv__DetectObject_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ackermann_msgs__srv__DetectObject_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ackermann_msgs__srv__DetectObject_Response__Sequence__init(ackermann_msgs__srv__DetectObject_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__srv__DetectObject_Response * data = NULL;

  if (size) {
    data = (ackermann_msgs__srv__DetectObject_Response *)allocator.zero_allocate(size, sizeof(ackermann_msgs__srv__DetectObject_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ackermann_msgs__srv__DetectObject_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ackermann_msgs__srv__DetectObject_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ackermann_msgs__srv__DetectObject_Response__Sequence__fini(ackermann_msgs__srv__DetectObject_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ackermann_msgs__srv__DetectObject_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ackermann_msgs__srv__DetectObject_Response__Sequence *
ackermann_msgs__srv__DetectObject_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ackermann_msgs__srv__DetectObject_Response__Sequence * array = (ackermann_msgs__srv__DetectObject_Response__Sequence *)allocator.allocate(sizeof(ackermann_msgs__srv__DetectObject_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ackermann_msgs__srv__DetectObject_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ackermann_msgs__srv__DetectObject_Response__Sequence__destroy(ackermann_msgs__srv__DetectObject_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ackermann_msgs__srv__DetectObject_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ackermann_msgs__srv__DetectObject_Response__Sequence__are_equal(const ackermann_msgs__srv__DetectObject_Response__Sequence * lhs, const ackermann_msgs__srv__DetectObject_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ackermann_msgs__srv__DetectObject_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ackermann_msgs__srv__DetectObject_Response__Sequence__copy(
  const ackermann_msgs__srv__DetectObject_Response__Sequence * input,
  ackermann_msgs__srv__DetectObject_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ackermann_msgs__srv__DetectObject_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ackermann_msgs__srv__DetectObject_Response * data =
      (ackermann_msgs__srv__DetectObject_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ackermann_msgs__srv__DetectObject_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ackermann_msgs__srv__DetectObject_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ackermann_msgs__srv__DetectObject_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
