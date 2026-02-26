// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice
#include "hand_msgs/msg/detail/hand_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `pos`
// Member `vel`
// Member `current`
// Member `time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
hand_msgs__msg__HandMsg__init(hand_msgs__msg__HandMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    hand_msgs__msg__HandMsg__fini(msg);
    return false;
  }
  // names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->names, 0)) {
    hand_msgs__msg__HandMsg__fini(msg);
    return false;
  }
  // pos
  if (!rosidl_runtime_c__float__Sequence__init(&msg->pos, 0)) {
    hand_msgs__msg__HandMsg__fini(msg);
    return false;
  }
  // vel
  if (!rosidl_runtime_c__float__Sequence__init(&msg->vel, 0)) {
    hand_msgs__msg__HandMsg__fini(msg);
    return false;
  }
  // current
  if (!rosidl_runtime_c__float__Sequence__init(&msg->current, 0)) {
    hand_msgs__msg__HandMsg__fini(msg);
    return false;
  }
  // time
  if (!rosidl_runtime_c__float__Sequence__init(&msg->time, 0)) {
    hand_msgs__msg__HandMsg__fini(msg);
    return false;
  }
  return true;
}

void
hand_msgs__msg__HandMsg__fini(hand_msgs__msg__HandMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // names
  rosidl_runtime_c__String__Sequence__fini(&msg->names);
  // pos
  rosidl_runtime_c__float__Sequence__fini(&msg->pos);
  // vel
  rosidl_runtime_c__float__Sequence__fini(&msg->vel);
  // current
  rosidl_runtime_c__float__Sequence__fini(&msg->current);
  // time
  rosidl_runtime_c__float__Sequence__fini(&msg->time);
}

bool
hand_msgs__msg__HandMsg__are_equal(const hand_msgs__msg__HandMsg * lhs, const hand_msgs__msg__HandMsg * rhs)
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
  // names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->names), &(rhs->names)))
  {
    return false;
  }
  // pos
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // vel
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->vel), &(rhs->vel)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->current), &(rhs->current)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  return true;
}

bool
hand_msgs__msg__HandMsg__copy(
  const hand_msgs__msg__HandMsg * input,
  hand_msgs__msg__HandMsg * output)
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
  // names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->names), &(output->names)))
  {
    return false;
  }
  // pos
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // vel
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->vel), &(output->vel)))
  {
    return false;
  }
  // current
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->current), &(output->current)))
  {
    return false;
  }
  // time
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  return true;
}

hand_msgs__msg__HandMsg *
hand_msgs__msg__HandMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__HandMsg * msg = (hand_msgs__msg__HandMsg *)allocator.allocate(sizeof(hand_msgs__msg__HandMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hand_msgs__msg__HandMsg));
  bool success = hand_msgs__msg__HandMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hand_msgs__msg__HandMsg__destroy(hand_msgs__msg__HandMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hand_msgs__msg__HandMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hand_msgs__msg__HandMsg__Sequence__init(hand_msgs__msg__HandMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__HandMsg * data = NULL;

  if (size) {
    data = (hand_msgs__msg__HandMsg *)allocator.zero_allocate(size, sizeof(hand_msgs__msg__HandMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hand_msgs__msg__HandMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hand_msgs__msg__HandMsg__fini(&data[i - 1]);
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
hand_msgs__msg__HandMsg__Sequence__fini(hand_msgs__msg__HandMsg__Sequence * array)
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
      hand_msgs__msg__HandMsg__fini(&array->data[i]);
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

hand_msgs__msg__HandMsg__Sequence *
hand_msgs__msg__HandMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hand_msgs__msg__HandMsg__Sequence * array = (hand_msgs__msg__HandMsg__Sequence *)allocator.allocate(sizeof(hand_msgs__msg__HandMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hand_msgs__msg__HandMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hand_msgs__msg__HandMsg__Sequence__destroy(hand_msgs__msg__HandMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hand_msgs__msg__HandMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hand_msgs__msg__HandMsg__Sequence__are_equal(const hand_msgs__msg__HandMsg__Sequence * lhs, const hand_msgs__msg__HandMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hand_msgs__msg__HandMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hand_msgs__msg__HandMsg__Sequence__copy(
  const hand_msgs__msg__HandMsg__Sequence * input,
  hand_msgs__msg__HandMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hand_msgs__msg__HandMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hand_msgs__msg__HandMsg * data =
      (hand_msgs__msg__HandMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hand_msgs__msg__HandMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hand_msgs__msg__HandMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hand_msgs__msg__HandMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
