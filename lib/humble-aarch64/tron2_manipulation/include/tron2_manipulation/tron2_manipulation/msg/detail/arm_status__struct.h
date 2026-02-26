// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__STRUCT_H_
#define TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/arm_status in the package tron2_manipulation.
typedef struct tron2_manipulation__msg__arm_status
{
  /// unit: m
  float left_arm_pos[7];
  /// unit: m
  float right_arm_pos[7];
} tron2_manipulation__msg__arm_status;

// Struct for a sequence of tron2_manipulation__msg__arm_status.
typedef struct tron2_manipulation__msg__arm_status__Sequence
{
  tron2_manipulation__msg__arm_status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tron2_manipulation__msg__arm_status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__STRUCT_H_
