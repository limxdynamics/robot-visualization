// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice
#ifndef UPPER_BODY__MSG__DETAIL__ARM_SERVO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define UPPER_BODY__MSG__DETAIL__ARM_SERVO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "upper_body/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "upper_body/msg/detail/arm_servo__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
bool cdr_serialize_upper_body__msg__arm_servo(
  const upper_body__msg__arm_servo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
bool cdr_deserialize_upper_body__msg__arm_servo(
  eprosima::fastcdr::Cdr &,
  upper_body__msg__arm_servo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
size_t get_serialized_size_upper_body__msg__arm_servo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
size_t max_serialized_size_upper_body__msg__arm_servo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
bool cdr_serialize_key_upper_body__msg__arm_servo(
  const upper_body__msg__arm_servo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
size_t get_serialized_size_key_upper_body__msg__arm_servo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
size_t max_serialized_size_key_upper_body__msg__arm_servo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_upper_body
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, upper_body, msg, arm_servo)();

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__MSG__DETAIL__ARM_SERVO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
