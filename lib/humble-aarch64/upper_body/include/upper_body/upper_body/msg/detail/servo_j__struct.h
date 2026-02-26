// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__SERVO_J__STRUCT_H_
#define UPPER_BODY__MSG__DETAIL__SERVO_J__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/servoJ in the package upper_body.
typedef struct upper_body__msg__servoJ
{
  /// unit: rad
  rosidl_runtime_c__float__Sequence joints;
} upper_body__msg__servoJ;

// Struct for a sequence of upper_body__msg__servoJ.
typedef struct upper_body__msg__servoJ__Sequence
{
  upper_body__msg__servoJ * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__msg__servoJ__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__MSG__DETAIL__SERVO_J__STRUCT_H_
