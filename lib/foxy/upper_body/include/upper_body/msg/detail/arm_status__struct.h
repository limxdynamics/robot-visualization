// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from upper_body:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__ARM_STATUS__STRUCT_H_
#define UPPER_BODY__MSG__DETAIL__ARM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/arm_status in the package upper_body.
typedef struct upper_body__msg__arm_status
{
  float left_arm_pos[7];
  float right_arm_pos[7];
} upper_body__msg__arm_status;

// Struct for a sequence of upper_body__msg__arm_status.
typedef struct upper_body__msg__arm_status__Sequence
{
  upper_body__msg__arm_status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__msg__arm_status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__MSG__DETAIL__ARM_STATUS__STRUCT_H_
