// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "upper_body/msg/detail/arm_servo__rosidl_typesupport_introspection_c.h"
#include "upper_body/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "upper_body/msg/detail/arm_servo__functions.h"
#include "upper_body/msg/detail/arm_servo__struct.h"


// Include directives for member types
// Member `servo_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `left_arm_joints`
// Member `right_arm_joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  upper_body__msg__arm_servo__init(message_memory);
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_fini_function(void * message_memory)
{
  upper_body__msg__arm_servo__fini(message_memory);
}

size_t upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__left_arm_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__left_arm_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__left_arm_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__left_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__left_arm_joints(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__left_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__left_arm_joints(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__resize_function__arm_servo__left_arm_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__right_arm_joints(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__right_arm_joints(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__right_arm_joints(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__right_arm_joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__right_arm_joints(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__right_arm_joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__right_arm_joints(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__resize_function__arm_servo__right_arm_joints(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__left_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__left_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__left_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__left_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__left_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__left_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__left_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__right_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__right_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__right_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__right_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__right_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__right_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__right_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_member_array[5] = {
  {
    "servo_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__msg__arm_servo, servo_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__msg__arm_servo, left_arm_joints),  // bytes offset in struct
    NULL,  // default value
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__left_arm_joints,  // size() function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__left_arm_joints,  // get_const(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__left_arm_joints,  // get(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__left_arm_joints,  // fetch(index, &value) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__left_arm_joints,  // assign(index, value) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__resize_function__arm_servo__left_arm_joints  // resize(index) function pointer
  },
  {
    "right_arm_joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__msg__arm_servo, right_arm_joints),  // bytes offset in struct
    NULL,  // default value
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__right_arm_joints,  // size() function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__right_arm_joints,  // get_const(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__right_arm_joints,  // get(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__right_arm_joints,  // fetch(index, &value) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__right_arm_joints,  // assign(index, value) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__resize_function__arm_servo__right_arm_joints  // resize(index) function pointer
  },
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(upper_body__msg__arm_servo, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__left_arm_pos,  // size() function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__left_arm_pos,  // get_const(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__left_arm_pos,  // get(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__left_arm_pos,  // fetch(index, &value) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__left_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(upper_body__msg__arm_servo, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__size_function__arm_servo__right_arm_pos,  // size() function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_const_function__arm_servo__right_arm_pos,  // get_const(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__get_function__arm_servo__right_arm_pos,  // get(index) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__fetch_function__arm_servo__right_arm_pos,  // fetch(index, &value) function pointer
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__assign_function__arm_servo__right_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_members = {
  "upper_body__msg",  // message namespace
  "arm_servo",  // message name
  5,  // number of fields
  sizeof(upper_body__msg__arm_servo),
  upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_member_array,  // message members
  upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_init_function,  // function to initialize message memory (memory has to be allocated)
  upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_type_support_handle = {
  0,
  &upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_upper_body
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, msg, arm_servo)() {
  if (!upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_type_support_handle.typesupport_identifier) {
    upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &upper_body__msg__arm_servo__rosidl_typesupport_introspection_c__arm_servo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
