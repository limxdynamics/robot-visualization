// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from std_msgs:msg/UInt16Array.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "std_msgs/msg/detail/u_int16_array__rosidl_typesupport_introspection_c.h"
#include "std_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "std_msgs/msg/detail/u_int16_array__functions.h"
#include "std_msgs/msg/detail/u_int16_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  std_msgs__msg__UInt16Array__init(message_memory);
}

void UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_fini_function(void * message_memory)
{
  std_msgs__msg__UInt16Array__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__UInt16Array, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__UInt16Array, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_members = {
  "std_msgs__msg",  // message namespace
  "UInt16Array",  // message name
  2,  // number of fields
  sizeof(std_msgs__msg__UInt16Array),
  UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_member_array,  // message members
  UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_init_function,  // function to initialize message memory (memory has to be allocated)
  UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_type_support_handle = {
  0,
  &UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt16Array)() {
  UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_type_support_handle.typesupport_identifier) {
    UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UInt16Array__rosidl_typesupport_introspection_c__UInt16Array_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
