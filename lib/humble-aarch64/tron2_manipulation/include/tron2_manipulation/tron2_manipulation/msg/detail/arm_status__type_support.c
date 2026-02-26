// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tron2_manipulation/msg/detail/arm_status__rosidl_typesupport_introspection_c.h"
#include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tron2_manipulation/msg/detail/arm_status__functions.h"
#include "tron2_manipulation/msg/detail/arm_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__msg__arm_status__init(message_memory);
}

void tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_fini_function(void * message_memory)
{
  tron2_manipulation__msg__arm_status__fini(message_memory);
}

size_t tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__left_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__left_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__left_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__right_arm_pos(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_arm_pos(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_arm_pos(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__right_arm_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_arm_pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__right_arm_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_arm_pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_member_array[2] = {
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__msg__arm_status, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__left_arm_pos,  // size() function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__left_arm_pos,  // get_const(index) function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__left_arm_pos,  // get(index) function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__left_arm_pos,  // fetch(index, &value) function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__left_arm_pos,  // assign(index, value) function pointer
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
    offsetof(tron2_manipulation__msg__arm_status, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__size_function__arm_status__right_arm_pos,  // size() function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_const_function__arm_status__right_arm_pos,  // get_const(index) function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__get_function__arm_status__right_arm_pos,  // get(index) function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__fetch_function__arm_status__right_arm_pos,  // fetch(index, &value) function pointer
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__assign_function__arm_status__right_arm_pos,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_members = {
  "tron2_manipulation__msg",  // message namespace
  "arm_status",  // message name
  2,  // number of fields
  sizeof(tron2_manipulation__msg__arm_status),
  tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_member_array,  // message members
  tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_init_function,  // function to initialize message memory (memory has to be allocated)
  tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle = {
  0,
  &tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, msg, arm_status)() {
  if (!tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle.typesupport_identifier) {
    tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tron2_manipulation__msg__arm_status__rosidl_typesupport_introspection_c__arm_status_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
