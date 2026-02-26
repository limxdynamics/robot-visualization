// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from upper_body:msg/arm_status.idl
// generated code does not contain a copyright notice
#include "upper_body/msg/detail/arm_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
upper_body__msg__arm_status__init(upper_body__msg__arm_status * msg)
{
  if (!msg) {
    return false;
  }
  // left_arm_pos
  // right_arm_pos
  return true;
}

void
upper_body__msg__arm_status__fini(upper_body__msg__arm_status * msg)
{
  if (!msg) {
    return;
  }
  // left_arm_pos
  // right_arm_pos
}

bool
upper_body__msg__arm_status__are_equal(const upper_body__msg__arm_status * lhs, const upper_body__msg__arm_status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->left_arm_pos[i] != rhs->left_arm_pos[i]) {
      return false;
    }
  }
  // right_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->right_arm_pos[i] != rhs->right_arm_pos[i]) {
      return false;
    }
  }
  return true;
}

bool
upper_body__msg__arm_status__copy(
  const upper_body__msg__arm_status * input,
  upper_body__msg__arm_status * output)
{
  if (!input || !output) {
    return false;
  }
  // left_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    output->left_arm_pos[i] = input->left_arm_pos[i];
  }
  // right_arm_pos
  for (size_t i = 0; i < 7; ++i) {
    output->right_arm_pos[i] = input->right_arm_pos[i];
  }
  return true;
}

upper_body__msg__arm_status *
upper_body__msg__arm_status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__arm_status * msg = (upper_body__msg__arm_status *)allocator.allocate(sizeof(upper_body__msg__arm_status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(upper_body__msg__arm_status));
  bool success = upper_body__msg__arm_status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
upper_body__msg__arm_status__destroy(upper_body__msg__arm_status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    upper_body__msg__arm_status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
upper_body__msg__arm_status__Sequence__init(upper_body__msg__arm_status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__arm_status * data = NULL;

  if (size) {
    data = (upper_body__msg__arm_status *)allocator.zero_allocate(size, sizeof(upper_body__msg__arm_status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = upper_body__msg__arm_status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        upper_body__msg__arm_status__fini(&data[i - 1]);
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
upper_body__msg__arm_status__Sequence__fini(upper_body__msg__arm_status__Sequence * array)
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
      upper_body__msg__arm_status__fini(&array->data[i]);
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

upper_body__msg__arm_status__Sequence *
upper_body__msg__arm_status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__arm_status__Sequence * array = (upper_body__msg__arm_status__Sequence *)allocator.allocate(sizeof(upper_body__msg__arm_status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = upper_body__msg__arm_status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
upper_body__msg__arm_status__Sequence__destroy(upper_body__msg__arm_status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    upper_body__msg__arm_status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
upper_body__msg__arm_status__Sequence__are_equal(const upper_body__msg__arm_status__Sequence * lhs, const upper_body__msg__arm_status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!upper_body__msg__arm_status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
upper_body__msg__arm_status__Sequence__copy(
  const upper_body__msg__arm_status__Sequence * input,
  upper_body__msg__arm_status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(upper_body__msg__arm_status);
    upper_body__msg__arm_status * data =
      (upper_body__msg__arm_status *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!upper_body__msg__arm_status__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          upper_body__msg__arm_status__fini(&data[i]);
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
    if (!upper_body__msg__arm_status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
