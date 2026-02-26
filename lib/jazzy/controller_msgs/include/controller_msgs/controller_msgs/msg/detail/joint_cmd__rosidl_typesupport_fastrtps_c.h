// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from controller_msgs:msg/JointCmd.idl
// generated code does not contain a copyright notice
#ifndef CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "controller_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "controller_msgs/msg/detail/joint_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
bool cdr_serialize_controller_msgs__msg__JointCmd(
  const controller_msgs__msg__JointCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
bool cdr_deserialize_controller_msgs__msg__JointCmd(
  eprosima::fastcdr::Cdr &,
  controller_msgs__msg__JointCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
size_t get_serialized_size_controller_msgs__msg__JointCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
size_t max_serialized_size_controller_msgs__msg__JointCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
bool cdr_serialize_key_controller_msgs__msg__JointCmd(
  const controller_msgs__msg__JointCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
size_t get_serialized_size_key_controller_msgs__msg__JointCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
size_t max_serialized_size_key_controller_msgs__msg__JointCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_controller_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, controller_msgs, msg, JointCmd)();

#ifdef __cplusplus
}
#endif

#endif  // CONTROLLER_MSGS__MSG__DETAIL__JOINT_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
