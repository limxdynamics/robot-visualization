// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice
#include "upper_body/msg/detail/arm_servo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `servo_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_arm_joints`
// Member `right_arm_joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
upper_body__msg__arm_servo__init(upper_body__msg__arm_servo * msg)
{
  if (!msg) {
    return false;
  }
  // servo_type
  if (!rosidl_runtime_c__String__init(&msg->servo_type)) {
    upper_body__msg__arm_servo__fini(msg);
    return false;
  }
  // left_arm_joints
  if (!rosidl_runtime_c__float__Sequence__init(&msg->left_arm_joints, 0)) {
    upper_body__msg__arm_servo__fini(msg);
    return false;
  }
  // right_arm_joints
  if (!rosidl_runtime_c__float__Sequence__init(&msg->right_arm_joints, 0)) {
    upper_body__msg__arm_servo__fini(msg);
    return false;
  }
  // left_arm_pos
  // right_arm_pos
  return true;
}

void
upper_body__msg__arm_servo__fini(upper_body__msg__arm_servo * msg)
{
  if (!msg) {
    return;
  }
  // servo_type
  rosidl_runtime_c__String__fini(&msg->servo_type);
  // left_arm_joints
  rosidl_runtime_c__float__Sequence__fini(&msg->left_arm_joints);
  // right_arm_joints
  rosidl_runtime_c__float__Sequence__fini(&msg->right_arm_joints);
  // left_arm_pos
  // right_arm_pos
}

bool
upper_body__msg__arm_servo__are_equal(const upper_body__msg__arm_servo * lhs, const upper_body__msg__arm_servo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // servo_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->servo_type), &(rhs->servo_type)))
  {
    return false;
  }
  // left_arm_joints
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->left_arm_joints), &(rhs->left_arm_joints)))
  {
    return false;
  }
  // right_arm_joints
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->right_arm_joints), &(rhs->right_arm_joints)))
  {
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
upper_body__msg__arm_servo__copy(
  const upper_body__msg__arm_servo * input,
  upper_body__msg__arm_servo * output)
{
  if (!input || !output) {
    return false;
  }
  // servo_type
  if (!rosidl_runtime_c__String__copy(
      &(input->servo_type), &(output->servo_type)))
  {
    return false;
  }
  // left_arm_joints
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->left_arm_joints), &(output->left_arm_joints)))
  {
    return false;
  }
  // right_arm_joints
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->right_arm_joints), &(output->right_arm_joints)))
  {
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

upper_body__msg__arm_servo *
upper_body__msg__arm_servo__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__arm_servo * msg = (upper_body__msg__arm_servo *)allocator.allocate(sizeof(upper_body__msg__arm_servo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(upper_body__msg__arm_servo));
  bool success = upper_body__msg__arm_servo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
upper_body__msg__arm_servo__destroy(upper_body__msg__arm_servo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    upper_body__msg__arm_servo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
upper_body__msg__arm_servo__Sequence__init(upper_body__msg__arm_servo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__arm_servo * data = NULL;

  if (size) {
    data = (upper_body__msg__arm_servo *)allocator.zero_allocate(size, sizeof(upper_body__msg__arm_servo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = upper_body__msg__arm_servo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        upper_body__msg__arm_servo__fini(&data[i - 1]);
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
upper_body__msg__arm_servo__Sequence__fini(upper_body__msg__arm_servo__Sequence * array)
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
      upper_body__msg__arm_servo__fini(&array->data[i]);
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

upper_body__msg__arm_servo__Sequence *
upper_body__msg__arm_servo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  upper_body__msg__arm_servo__Sequence * array = (upper_body__msg__arm_servo__Sequence *)allocator.allocate(sizeof(upper_body__msg__arm_servo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = upper_body__msg__arm_servo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
upper_body__msg__arm_servo__Sequence__destroy(upper_body__msg__arm_servo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    upper_body__msg__arm_servo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
upper_body__msg__arm_servo__Sequence__are_equal(const upper_body__msg__arm_servo__Sequence * lhs, const upper_body__msg__arm_servo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!upper_body__msg__arm_servo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
upper_body__msg__arm_servo__Sequence__copy(
  const upper_body__msg__arm_servo__Sequence * input,
  upper_body__msg__arm_servo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(upper_body__msg__arm_servo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    upper_body__msg__arm_servo * data =
      (upper_body__msg__arm_servo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!upper_body__msg__arm_servo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          upper_body__msg__arm_servo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!upper_body__msg__arm_servo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
