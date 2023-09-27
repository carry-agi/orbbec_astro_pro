// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from astra_camera_msgs:srv/GetCameraInfo.idl
// generated code does not contain a copyright notice
#include "astra_camera_msgs/srv/detail/get_camera_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
astra_camera_msgs__srv__GetCameraInfo_Request__init(astra_camera_msgs__srv__GetCameraInfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
astra_camera_msgs__srv__GetCameraInfo_Request__fini(astra_camera_msgs__srv__GetCameraInfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
astra_camera_msgs__srv__GetCameraInfo_Request__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Request * lhs, const astra_camera_msgs__srv__GetCameraInfo_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
astra_camera_msgs__srv__GetCameraInfo_Request__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Request * input,
  astra_camera_msgs__srv__GetCameraInfo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

astra_camera_msgs__srv__GetCameraInfo_Request *
astra_camera_msgs__srv__GetCameraInfo_Request__create()
{
  astra_camera_msgs__srv__GetCameraInfo_Request * msg = (astra_camera_msgs__srv__GetCameraInfo_Request *)malloc(sizeof(astra_camera_msgs__srv__GetCameraInfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(astra_camera_msgs__srv__GetCameraInfo_Request));
  bool success = astra_camera_msgs__srv__GetCameraInfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
astra_camera_msgs__srv__GetCameraInfo_Request__destroy(astra_camera_msgs__srv__GetCameraInfo_Request * msg)
{
  if (msg) {
    astra_camera_msgs__srv__GetCameraInfo_Request__fini(msg);
  }
  free(msg);
}


bool
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__init(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  astra_camera_msgs__srv__GetCameraInfo_Request * data = NULL;
  if (size) {
    data = (astra_camera_msgs__srv__GetCameraInfo_Request *)calloc(size, sizeof(astra_camera_msgs__srv__GetCameraInfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = astra_camera_msgs__srv__GetCameraInfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        astra_camera_msgs__srv__GetCameraInfo_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__fini(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      astra_camera_msgs__srv__GetCameraInfo_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

astra_camera_msgs__srv__GetCameraInfo_Request__Sequence *
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__create(size_t size)
{
  astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array = (astra_camera_msgs__srv__GetCameraInfo_Request__Sequence *)malloc(sizeof(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__destroy(astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * array)
{
  if (array) {
    astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__fini(array);
  }
  free(array);
}

bool
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * lhs, const astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!astra_camera_msgs__srv__GetCameraInfo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
astra_camera_msgs__srv__GetCameraInfo_Request__Sequence__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * input,
  astra_camera_msgs__srv__GetCameraInfo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(astra_camera_msgs__srv__GetCameraInfo_Request);
    astra_camera_msgs__srv__GetCameraInfo_Request * data =
      (astra_camera_msgs__srv__GetCameraInfo_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!astra_camera_msgs__srv__GetCameraInfo_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          astra_camera_msgs__srv__GetCameraInfo_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!astra_camera_msgs__srv__GetCameraInfo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "sensor_msgs/msg/detail/camera_info__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
astra_camera_msgs__srv__GetCameraInfo_Response__init(astra_camera_msgs__srv__GetCameraInfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!sensor_msgs__msg__CameraInfo__init(&msg->info)) {
    astra_camera_msgs__srv__GetCameraInfo_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    astra_camera_msgs__srv__GetCameraInfo_Response__fini(msg);
    return false;
  }
  return true;
}

void
astra_camera_msgs__srv__GetCameraInfo_Response__fini(astra_camera_msgs__srv__GetCameraInfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // info
  sensor_msgs__msg__CameraInfo__fini(&msg->info);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
astra_camera_msgs__srv__GetCameraInfo_Response__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Response * lhs, const astra_camera_msgs__srv__GetCameraInfo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!sensor_msgs__msg__CameraInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
astra_camera_msgs__srv__GetCameraInfo_Response__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Response * input,
  astra_camera_msgs__srv__GetCameraInfo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!sensor_msgs__msg__CameraInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

astra_camera_msgs__srv__GetCameraInfo_Response *
astra_camera_msgs__srv__GetCameraInfo_Response__create()
{
  astra_camera_msgs__srv__GetCameraInfo_Response * msg = (astra_camera_msgs__srv__GetCameraInfo_Response *)malloc(sizeof(astra_camera_msgs__srv__GetCameraInfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(astra_camera_msgs__srv__GetCameraInfo_Response));
  bool success = astra_camera_msgs__srv__GetCameraInfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
astra_camera_msgs__srv__GetCameraInfo_Response__destroy(astra_camera_msgs__srv__GetCameraInfo_Response * msg)
{
  if (msg) {
    astra_camera_msgs__srv__GetCameraInfo_Response__fini(msg);
  }
  free(msg);
}


bool
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__init(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  astra_camera_msgs__srv__GetCameraInfo_Response * data = NULL;
  if (size) {
    data = (astra_camera_msgs__srv__GetCameraInfo_Response *)calloc(size, sizeof(astra_camera_msgs__srv__GetCameraInfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = astra_camera_msgs__srv__GetCameraInfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        astra_camera_msgs__srv__GetCameraInfo_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__fini(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      astra_camera_msgs__srv__GetCameraInfo_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

astra_camera_msgs__srv__GetCameraInfo_Response__Sequence *
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__create(size_t size)
{
  astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array = (astra_camera_msgs__srv__GetCameraInfo_Response__Sequence *)malloc(sizeof(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__destroy(astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * array)
{
  if (array) {
    astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__fini(array);
  }
  free(array);
}

bool
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__are_equal(const astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * lhs, const astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!astra_camera_msgs__srv__GetCameraInfo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
astra_camera_msgs__srv__GetCameraInfo_Response__Sequence__copy(
  const astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * input,
  astra_camera_msgs__srv__GetCameraInfo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(astra_camera_msgs__srv__GetCameraInfo_Response);
    astra_camera_msgs__srv__GetCameraInfo_Response * data =
      (astra_camera_msgs__srv__GetCameraInfo_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!astra_camera_msgs__srv__GetCameraInfo_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          astra_camera_msgs__srv__GetCameraInfo_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!astra_camera_msgs__srv__GetCameraInfo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
