// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from std_msgs:msg/Int32Array.idl
// generated code does not contain a copyright notice

#ifndef STD_MSGS__MSG__DETAIL__INT32_ARRAY__STRUCT_H_
#define STD_MSGS__MSG__DETAIL__INT32_ARRAY__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Int32Array in the package std_msgs.
typedef struct std_msgs__msg__Int32Array
{
  /// header info
  std_msgs__msg__Header header;
  /// array of data
  rosidl_runtime_c__int32__Sequence data;
} std_msgs__msg__Int32Array;

// Struct for a sequence of std_msgs__msg__Int32Array.
typedef struct std_msgs__msg__Int32Array__Sequence
{
  std_msgs__msg__Int32Array * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} std_msgs__msg__Int32Array__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__INT32_ARRAY__STRUCT_H_
