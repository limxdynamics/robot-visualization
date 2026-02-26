// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "upper_body/msg/detail/servo_j__rosidl_typesupport_introspection_c.h"
#include "upper_body/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "upper_body/msg/detail/servo_j__functions.h"
#include "upper_body/msg/detail/servo_j__struct.h"


// Include directives for member types
// Member `joints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void servoJ__rosidl_typesupport_introspection_c__servoJ_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  upper_body__msg__servoJ__init(message_memory);
}

void servoJ__rosidl_typesupport_introspection_c__servoJ_fini_function(void * message_memory)
{
  upper_body__msg__servoJ__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember servoJ__rosidl_typesupport_introspection_c__servoJ_message_member_array[1] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(upper_body__msg__servoJ, joints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers servoJ__rosidl_typesupport_introspection_c__servoJ_message_members = {
  "upper_body__msg",  // message namespace
  "servoJ",  // message name
  1,  // number of fields
  sizeof(upper_body__msg__servoJ),
  servoJ__rosidl_typesupport_introspection_c__servoJ_message_member_array,  // message members
  servoJ__rosidl_typesupport_introspection_c__servoJ_init_function,  // function to initialize message memory (memory has to be allocated)
  servoJ__rosidl_typesupport_introspection_c__servoJ_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t servoJ__rosidl_typesupport_introspection_c__servoJ_message_type_support_handle = {
  0,
  &servoJ__rosidl_typesupport_introspection_c__servoJ_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_upper_body
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, upper_body, msg, servoJ)() {
  if (!servoJ__rosidl_typesupport_introspection_c__servoJ_message_type_support_handle.typesupport_identifier) {
    servoJ__rosidl_typesupport_introspection_c__servoJ_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &servoJ__rosidl_typesupport_introspection_c__servoJ_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
