// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#ifndef TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
#define TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tron2_manipulation/msg/detail/arm_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tron2_manipulation
{

namespace msg
{

inline void to_flow_style_yaml(
  const arm_status & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_arm_pos
  {
    if (msg.left_arm_pos.size() == 0) {
      out << "left_arm_pos: []";
    } else {
      out << "left_arm_pos: [";
      size_t pending_items = msg.left_arm_pos.size();
      for (auto item : msg.left_arm_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_pos
  {
    if (msg.right_arm_pos.size() == 0) {
      out << "right_arm_pos: []";
    } else {
      out << "right_arm_pos: [";
      size_t pending_items = msg.right_arm_pos.size();
      for (auto item : msg.right_arm_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const arm_status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_pos.size() == 0) {
      out << "left_arm_pos: []\n";
    } else {
      out << "left_arm_pos:\n";
      for (auto item : msg.left_arm_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_pos.size() == 0) {
      out << "right_arm_pos: []\n";
    } else {
      out << "right_arm_pos:\n";
      for (auto item : msg.right_arm_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const arm_status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tron2_manipulation

namespace rosidl_generator_traits
{

[[deprecated("use tron2_manipulation::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tron2_manipulation::msg::arm_status & msg,
  std::ostream & out, size_t indentation = 0)
{
  tron2_manipulation::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tron2_manipulation::msg::to_yaml() instead")]]
inline std::string to_yaml(const tron2_manipulation::msg::arm_status & msg)
{
  return tron2_manipulation::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tron2_manipulation::msg::arm_status>()
{
  return "tron2_manipulation::msg::arm_status";
}

template<>
inline const char * name<tron2_manipulation::msg::arm_status>()
{
  return "tron2_manipulation/msg/arm_status";
}

template<>
struct has_fixed_size<tron2_manipulation::msg::arm_status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tron2_manipulation::msg::arm_status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tron2_manipulation::msg::arm_status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRON2_MANIPULATION__MSG__DETAIL__ARM_STATUS__TRAITS_HPP_
