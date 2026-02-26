// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from upper_body:msg/waist_cmd.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__WAIST_CMD__STRUCT_H_
#define UPPER_BODY__MSG__DETAIL__WAIST_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/waist_cmd in the package upper_body.
typedef struct upper_body__msg__waist_cmd
{
  /// ["waist_yaw_joint", "waist_roll_joint", "waist_pitch_joint"] units: rad
  float waistCMD[3];
} upper_body__msg__waist_cmd;

// Struct for a sequence of upper_body__msg__waist_cmd.
typedef struct upper_body__msg__waist_cmd__Sequence
{
  upper_body__msg__waist_cmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__msg__waist_cmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__MSG__DETAIL__WAIST_CMD__STRUCT_H_
