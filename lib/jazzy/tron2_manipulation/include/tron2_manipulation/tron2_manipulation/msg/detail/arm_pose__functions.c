// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tron2_manipulation:msg/arm_pose.idl
// generated code does not contain a copyright notice
#include "tron2_manipulation/msg/detail/arm_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tron2_manipulation__msg__arm_pose__init(tron2_manipulation__msg__arm_pose * msg)
{
  if (!msg) {
    return false;
  }
  // left_arm_pos
  // right_arm_pos
  return true;
}

void
tron2_manipulation__msg__arm_pose__fini(tron2_manipulation__msg__arm_pose * msg)
{
  if (!msg) {
    return;
  }
  // left_arm_pos
  // right_arm_pos
}

bool
tron2_manipulation__msg__arm_pose__are_equal(const tron2_manipulation__msg__arm_pose * lhs, const tron2_manipulation__msg__arm_pose * rhs)
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
tron2_manipulation__msg__arm_pose__copy(
  const tron2_manipulation__msg__arm_pose * input,
  tron2_manipulation__msg__arm_pose * output)
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

tron2_manipulation__msg__arm_pose *
tron2_manipulation__msg__arm_pose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__msg__arm_pose * msg = (tron2_manipulation__msg__arm_pose *)allocator.allocate(sizeof(tron2_manipulation__msg__arm_pose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tron2_manipulation__msg__arm_pose));
  bool success = tron2_manipulation__msg__arm_pose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tron2_manipulation__msg__arm_pose__destroy(tron2_manipulation__msg__arm_pose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tron2_manipulation__msg__arm_pose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tron2_manipulation__msg__arm_pose__Sequence__init(tron2_manipulation__msg__arm_pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__msg__arm_pose * data = NULL;

  if (size) {
    data = (tron2_manipulation__msg__arm_pose *)allocator.zero_allocate(size, sizeof(tron2_manipulation__msg__arm_pose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tron2_manipulation__msg__arm_pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tron2_manipulation__msg__arm_pose__fini(&data[i - 1]);
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
tron2_manipulation__msg__arm_pose__Sequence__fini(tron2_manipulation__msg__arm_pose__Sequence * array)
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
      tron2_manipulation__msg__arm_pose__fini(&array->data[i]);
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

tron2_manipulation__msg__arm_pose__Sequence *
tron2_manipulation__msg__arm_pose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tron2_manipulation__msg__arm_pose__Sequence * array = (tron2_manipulation__msg__arm_pose__Sequence *)allocator.allocate(sizeof(tron2_manipulation__msg__arm_pose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tron2_manipulation__msg__arm_pose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tron2_manipulation__msg__arm_pose__Sequence__destroy(tron2_manipulation__msg__arm_pose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tron2_manipulation__msg__arm_pose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tron2_manipulation__msg__arm_pose__Sequence__are_equal(const tron2_manipulation__msg__arm_pose__Sequence * lhs, const tron2_manipulation__msg__arm_pose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tron2_manipulation__msg__arm_pose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tron2_manipulation__msg__arm_pose__Sequence__copy(
  const tron2_manipulation__msg__arm_pose__Sequence * input,
  tron2_manipulation__msg__arm_pose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tron2_manipulation__msg__arm_pose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tron2_manipulation__msg__arm_pose * data =
      (tron2_manipulation__msg__arm_pose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tron2_manipulation__msg__arm_pose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tron2_manipulation__msg__arm_pose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tron2_manipulation__msg__arm_pose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
