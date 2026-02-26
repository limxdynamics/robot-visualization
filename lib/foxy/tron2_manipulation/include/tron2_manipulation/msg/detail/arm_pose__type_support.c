// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tron2_manipulation:msg/arm_pose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tron2_manipulation/msg/detail/arm_pose__rosidl_typesupport_introspection_c.h"
#include "tron2_manipulation/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tron2_manipulation/msg/detail/arm_pose__functions.h"
#include "tron2_manipulation/msg/detail/arm_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void arm_pose__rosidl_typesupport_introspection_c__arm_pose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tron2_manipulation__msg__arm_pose__init(message_memory);
}

void arm_pose__rosidl_typesupport_introspection_c__arm_pose_fini_function(void * message_memory)
{
  tron2_manipulation__msg__arm_pose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_member_array[2] = {
  {
    "left_arm_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(tron2_manipulation__msg__arm_pose, left_arm_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
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
    offsetof(tron2_manipulation__msg__arm_pose, right_arm_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_members = {
  "tron2_manipulation__msg",  // message namespace
  "arm_pose",  // message name
  2,  // number of fields
  sizeof(tron2_manipulation__msg__arm_pose),
  arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_member_array,  // message members
  arm_pose__rosidl_typesupport_introspection_c__arm_pose_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_pose__rosidl_typesupport_introspection_c__arm_pose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_type_support_handle = {
  0,
  &arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tron2_manipulation
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tron2_manipulation, msg, arm_pose)() {
  if (!arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_type_support_handle.typesupport_identifier) {
    arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_pose__rosidl_typesupport_introspection_c__arm_pose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
