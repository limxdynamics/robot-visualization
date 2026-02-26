// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice
#include "hand_msgs/msg/detail/hand_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `hand_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_cmd`
#include "hand_msgs/msg/detail/hand_msg__functions.h"

bool
hand_msgs__msg__HandCmd__init(hand_msgs__msg__HandCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hand_msgs__msg__HandCmd__fini(msg);
    return false;
  }
  // hand_type
  if (!rosidl_runtime_c__String__init(&msg->hand_type)) {
    hand_msgs__msg__HandCmd__fini(msg);
    return false;
  }
  // ctrl_mode
  // hand_cmd
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__HandMsg__init(&msg->hand_cmd[i])) {
      hand_msgs__msg__HandCmd__fini(msg);
      return false;
    }
  }
  return true;
}

void
hand_msgs__msg__HandCmd__fini(hand_msgs__msg__HandCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hand_type
  rosidl_runtime_c__String__fini(&msg->hand_type);
  // ctrl_mode
  // hand_cmd
  for (size_t i = 0; i < 2; ++i) {
    hand_msgs__msg__HandMsg__fini(&msg->hand_cmd[i]);
  }
}

bool
hand_msgs__msg__HandCmd__are_equal(const hand_msgs__msg__HandCmd * lhs, const hand_msgs__msg__HandCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // hand_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_type), &(rhs->hand_type)))
  {
    return false;
  }
  // ctrl_mode
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->ctrl_mode[i] != rhs->ctrl_mode[i]) {
      return false;
    }
  }
  // hand_cmd
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__HandMsg__are_equal(
        &(lhs->hand_cmd[i]), &(rhs->hand_cmd[i])))
    {
      return false;
    }
  }
  return true;
}

bool
hand_msgs__msg__HandCmd__copy(
  const hand_msgs__msg__HandCmd * input,
  hand_msgs__msg__HandCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // hand_type
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_type), &(output->hand_type)))
  {
    return false;
  }
  // ctrl_mode
  for (size_t i = 0; i < 2; ++i) {
    output->ctrl_mode[i] = input->ctrl_mode[i];
  }
  // hand_cmd
  for (size_t i = 0; i < 2; ++i) {
    if (!hand_msgs__msg__HandMsg__copy(
        &(input->hand_cmd[i]), &(output->hand_cmd[i])))
    {
      return false;
    }
  }
  return true;
}

hand_msgs__msg__HandCmd *
hand_msgs__msg__HandCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__HandCmd * msg = (hand_msgs__msg__HandCmd *)allocator.allocate(sizeof(hand_msgs__msg__HandCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hand_msgs__msg__HandCmd));
  bool success = hand_msgs__msg__HandCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hand_msgs__msg__HandCmd__destroy(hand_msgs__msg__HandCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hand_msgs__msg__HandCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hand_msgs__msg__HandCmd__Sequence__init(hand_msgs__msg__HandCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__HandCmd * data = NULL;

  if (size) {
    data = (hand_msgs__msg__HandCmd *)allocator.zero_allocate(size, sizeof(hand_msgs__msg__HandCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hand_msgs__msg__HandCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hand_msgs__msg__HandCmd__fini(&data[i - 1]);
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
hand_msgs__msg__HandCmd__Sequence__fini(hand_msgs__msg__HandCmd__Sequence * array)
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
      hand_msgs__msg__HandCmd__fini(&array->data[i]);
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

hand_msgs__msg__HandCmd__Sequence *
hand_msgs__msg__HandCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__HandCmd__Sequence * array = (hand_msgs__msg__HandCmd__Sequence *)allocator.allocate(sizeof(hand_msgs__msg__HandCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hand_msgs__msg__HandCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hand_msgs__msg__HandCmd__Sequence__destroy(hand_msgs__msg__HandCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hand_msgs__msg__HandCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hand_msgs__msg__HandCmd__Sequence__are_equal(const hand_msgs__msg__HandCmd__Sequence * lhs, const hand_msgs__msg__HandCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hand_msgs__msg__HandCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hand_msgs__msg__HandCmd__Sequence__copy(
  const hand_msgs__msg__HandCmd__Sequence * input,
  hand_msgs__msg__HandCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hand_msgs__msg__HandCmd);
    hand_msgs__msg__HandCmd * data =
      (hand_msgs__msg__HandCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hand_msgs__msg__HandCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          hand_msgs__msg__HandCmd__fini(&data[i]);
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
    if (!hand_msgs__msg__HandCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
