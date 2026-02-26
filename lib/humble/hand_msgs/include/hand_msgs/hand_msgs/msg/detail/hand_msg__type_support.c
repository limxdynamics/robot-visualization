// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hand_msgs/msg/detail/hand_msg__rosidl_typesupport_introspection_c.h"
#include "hand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hand_msgs/msg/detail/hand_msg__functions.h"
#include "hand_msgs/msg/detail/hand_msg__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `names`
#include "rosidl_runtime_c/string_functions.h"
// Member `pos`
// Member `vel`
// Member `current`
// Member `time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__HandMsg__init(message_memory);
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_fini_function(void * message_memory)
{
  hand_msgs__msg__HandMsg__fini(message_memory);
}

size_t hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__vel(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__vel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__vel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__vel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__vel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__vel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__current(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__current(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__current(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__time(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__time(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__time(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__time(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__time(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__time(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__time(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__time(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandMsg, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandMsg, names),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__names,  // size() function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__names,  // get_const(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__names,  // get(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__names,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__names,  // assign(index, value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__names  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandMsg, pos),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__pos,  // size() function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__pos,  // get_const(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__pos,  // get(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__pos,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__pos,  // assign(index, value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__pos  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandMsg, vel),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__vel,  // size() function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__vel,  // get_const(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__vel,  // get(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__vel,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__vel,  // assign(index, value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__vel  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandMsg, current),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__current,  // size() function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__current,  // get_const(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__current,  // get(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__current,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__current,  // assign(index, value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__current  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandMsg, time),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__size_function__HandMsg__time,  // size() function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_const_function__HandMsg__time,  // get_const(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__get_function__HandMsg__time,  // get(index) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__fetch_function__HandMsg__time,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__assign_function__HandMsg__time,  // assign(index, value) function pointer
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__resize_function__HandMsg__time  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_members = {
  "hand_msgs__msg",  // message namespace
  "HandMsg",  // message name
  6,  // number of fields
  sizeof(hand_msgs__msg__HandMsg),
  hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_member_array,  // message members
  hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_type_support_handle = {
  0,
  &hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, HandMsg)() {
  hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_type_support_handle.typesupport_identifier) {
    hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hand_msgs__msg__HandMsg__rosidl_typesupport_introspection_c__HandMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
