// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tron2_manipulation/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tron2_manipulation/msg/detail/arm_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tron2_manipulation
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
cdr_serialize(
  const tron2_manipulation::msg::arm_status & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tron2_manipulation::msg::arm_status & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
get_serialized_size(
  const tron2_manipulation::msg::arm_status & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
max_serialized_size_arm_status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
cdr_serialize_key(
  const tron2_manipulation::msg::arm_status & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
get_serialized_size_key(
  const tron2_manipulation::msg::arm_status & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
max_serialized_size_key_arm_status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tron2_manipulation

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tron2_manipulation
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tron2_manipulation, msg, arm_status)();

#ifdef __cplusplus
}
#endif

#endif  // TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
