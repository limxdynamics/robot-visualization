// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice
#include "upper_body/msg/detail/waist_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
upper_body__msg__waist_cmd__init(upper_body__msg__waist_cmd * msg)
{
  if (!msg) {
    return false;
  }
  // waistCMD
  return true;
}

void
upper_body__msg__waist_cmd__fini(upper_body__msg__waist_cmd * msg)
{
  if (!msg) {
    return;
  }
  // waistCMD
}

bool
upper_body__msg__waist_cmd__are_equal(const upper_body__msg__waist_cmd * lhs, const upper_body__msg__waist_cmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waistCMD
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->waistCMD[i] != rhs->waistCMD[i]) {
      return false;
    }
  }
  return true;
}

bool
upper_body__msg__waist_cmd__copy(
  const upper_body__msg__waist_cmd * input,
  upper_body__msg__waist_cmd * output)
{
  if (!input || !output) {
    return false;
  }
  // waistCMD
  for (size_t i = 0; i < 3; ++i) {
    output->waistCMD[i] = input->waistCMD[i];
  }
  return true;
}

upper_body__msg__waist_cmd *
upper_body__msg__waist_cmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__waist_cmd * msg = (upper_body__msg__waist_cmd *)allocator.allocate(sizeof(upper_body__msg__waist_cmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(upper_body__msg__waist_cmd));
  bool success = upper_body__msg__waist_cmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
upper_body__msg__waist_cmd__destroy(upper_body__msg__waist_cmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    upper_body__msg__waist_cmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
upper_body__msg__waist_cmd__Sequence__init(upper_body__msg__waist_cmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__waist_cmd * data = NULL;

  if (size) {
    data = (upper_body__msg__waist_cmd *)allocator.zero_allocate(size, sizeof(upper_body__msg__waist_cmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = upper_body__msg__waist_cmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        upper_body__msg__waist_cmd__fini(&data[i - 1]);
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
upper_body__msg__waist_cmd__Sequence__fini(upper_body__msg__waist_cmd__Sequence * array)
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
      upper_body__msg__waist_cmd__fini(&array->data[i]);
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

upper_body__msg__waist_cmd__Sequence *
upper_body__msg__waist_cmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__waist_cmd__Sequence * array = (upper_body__msg__waist_cmd__Sequence *)allocator.allocate(sizeof(upper_body__msg__waist_cmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = upper_body__msg__waist_cmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
upper_body__msg__waist_cmd__Sequence__destroy(upper_body__msg__waist_cmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    upper_body__msg__waist_cmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
upper_body__msg__waist_cmd__Sequence__are_equal(const upper_body__msg__waist_cmd__Sequence * lhs, const upper_body__msg__waist_cmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!upper_body__msg__waist_cmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
upper_body__msg__waist_cmd__Sequence__copy(
  const upper_body__msg__waist_cmd__Sequence * input,
  upper_body__msg__waist_cmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(upper_body__msg__waist_cmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    upper_body__msg__waist_cmd * data =
      (upper_body__msg__waist_cmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!upper_body__msg__waist_cmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          upper_body__msg__waist_cmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!upper_body__msg__waist_cmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
