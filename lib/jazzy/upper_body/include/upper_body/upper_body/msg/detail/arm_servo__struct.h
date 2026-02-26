// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "upper_body/msg/arm_servo.h"


#ifndef UPPER_BODY__MSG__DETAIL__ARM_SERVO__STRUCT_H_
#define UPPER_BODY__MSG__DETAIL__ARM_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'servo_type'
#include "rosidl_runtime_c/string.h"
// Member 'left_arm_joints'
// Member 'right_arm_joints'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/arm_servo in the package upper_body.
typedef struct upper_body__msg__arm_servo
{
  /// servoJ or servoP
  rosidl_runtime_c__String servo_type;
  /// servoJ
  /// unit: rad
  rosidl_runtime_c__float__Sequence left_arm_joints;
  /// unit: rad
  rosidl_runtime_c__float__Sequence right_arm_joints;
  /// servoP
  /// [px py pz Qx Qy Qz Qw] unit: m
  float left_arm_pos[7];
  /// unit: mz
  float right_arm_pos[7];
} upper_body__msg__arm_servo;

// Struct for a sequence of upper_body__msg__arm_servo.
typedef struct upper_body__msg__arm_servo__Sequence
{
  upper_body__msg__arm_servo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} upper_body__msg__arm_servo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__MSG__DETAIL__ARM_SERVO__STRUCT_H_
