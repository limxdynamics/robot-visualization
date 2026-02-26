// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hand_msgs/msg/detail/hand_cmd__rosidl_typesupport_introspection_c.h"
#include "hand_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hand_msgs/msg/detail/hand_cmd__functions.h"
#include "hand_msgs/msg/detail/hand_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `hand_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `hand_cmd`
#include "hand_msgs/msg/hand_msg.h"
// Member `hand_cmd`
#include "hand_msgs/msg/detail/hand_msg__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hand_msgs__msg__HandCmd__init(message_memory);
}

void hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_fini_function(void * message_memory)
{
  hand_msgs__msg__HandCmd__fini(message_memory);
}

size_t hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__size_function__HandCmd__ctrl_mode(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_const_function__HandCmd__ctrl_mode(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_function__HandCmd__ctrl_mode(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__fetch_function__HandCmd__ctrl_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_const_function__HandCmd__ctrl_mode(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__assign_function__HandCmd__ctrl_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_function__HandCmd__ctrl_mode(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__size_function__HandCmd__hand_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_const_function__HandCmd__hand_cmd(
  const void * untyped_member, size_t index)
{
  const hand_msgs__msg__HandMsg * member =
    (const hand_msgs__msg__HandMsg *)(untyped_member);
  return &member[index];
}

void * hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_function__HandCmd__hand_cmd(
  void * untyped_member, size_t index)
{
  hand_msgs__msg__HandMsg * member =
    (hand_msgs__msg__HandMsg *)(untyped_member);
  return &member[index];
}

void hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__fetch_function__HandCmd__hand_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const hand_msgs__msg__HandMsg * item =
    ((const hand_msgs__msg__HandMsg *)
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_const_function__HandCmd__hand_cmd(untyped_member, index));
  hand_msgs__msg__HandMsg * value =
    (hand_msgs__msg__HandMsg *)(untyped_value);
  *value = *item;
}

void hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__assign_function__HandCmd__hand_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  hand_msgs__msg__HandMsg * item =
    ((hand_msgs__msg__HandMsg *)
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_function__HandCmd__hand_cmd(untyped_member, index));
  const hand_msgs__msg__HandMsg * value =
    (const hand_msgs__msg__HandMsg *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandCmd, hand_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ctrl_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandCmd, ctrl_mode),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__size_function__HandCmd__ctrl_mode,  // size() function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_const_function__HandCmd__ctrl_mode,  // get_const(index) function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_function__HandCmd__ctrl_mode,  // get(index) function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__fetch_function__HandCmd__ctrl_mode,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__assign_function__HandCmd__ctrl_mode,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs__msg__HandCmd, hand_cmd),  // bytes offset in struct
    NULL,  // default value
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__size_function__HandCmd__hand_cmd,  // size() function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_const_function__HandCmd__hand_cmd,  // get_const(index) function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__get_function__HandCmd__hand_cmd,  // get(index) function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__fetch_function__HandCmd__hand_cmd,  // fetch(index, &value) function pointer
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__assign_function__HandCmd__hand_cmd,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_members = {
  "hand_msgs__msg",  // message namespace
  "HandCmd",  // message name
  4,  // number of fields
  sizeof(hand_msgs__msg__HandCmd),
  hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_member_array,  // message members
  hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_type_support_handle = {
  0,
  &hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hand_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, HandCmd)() {
  hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hand_msgs, msg, HandMsg)();
  if (!hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_type_support_handle.typesupport_identifier) {
    hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hand_msgs__msg__HandCmd__rosidl_typesupport_introspection_c__HandCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
