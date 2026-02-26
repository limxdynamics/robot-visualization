// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from hand_msgs:msg/HandMsg.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__HAND_MSG__STRUCT_H_
#define HAND_MSGS__MSG__DETAIL__HAND_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'pos'
// Member 'vel'
// Member 'current'
// Member 'time'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/HandMsg in the package hand_msgs.
typedef struct hand_msgs__msg__HandMsg
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__float__Sequence pos;
  rosidl_runtime_c__float__Sequence vel;
  rosidl_runtime_c__float__Sequence current;
  rosidl_runtime_c__float__Sequence time;
} hand_msgs__msg__HandMsg;

// Struct for a sequence of hand_msgs__msg__HandMsg.
typedef struct hand_msgs__msg__HandMsg__Sequence
{
  hand_msgs__msg__HandMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} hand_msgs__msg__HandMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HAND_MSGS__MSG__DETAIL__HAND_MSG__STRUCT_H_
