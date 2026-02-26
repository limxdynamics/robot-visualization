// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice

#ifndef HAND_MSGS__MSG__DETAIL__HAND_CMD__TRAITS_HPP_
#define HAND_MSGS__MSG__DETAIL__HAND_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hand_msgs/msg/detail/hand_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'hand_cmd'
#include "hand_msgs/msg/detail/hand_msg__traits.hpp"

namespace hand_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: hand_type
  {
    out << "hand_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_type, out);
    out << ", ";
  }

  // member: ctrl_mode
  {
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []";
    } else {
      out << "ctrl_mode: [";
      size_t pending_items = msg.ctrl_mode.size();
      for (auto item : msg.ctrl_mode) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: hand_cmd
  {
    if (msg.hand_cmd.size() == 0) {
      out << "hand_cmd: []";
    } else {
      out << "hand_cmd: [";
      size_t pending_items = msg.hand_cmd.size();
      for (auto item : msg.hand_cmd) {
        to_flow_style_yaml(item, out);
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
  const HandCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: hand_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_type: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_type, out);
    out << "\n";
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ctrl_mode.size() == 0) {
      out << "ctrl_mode: []\n";
    } else {
      out << "ctrl_mode:\n";
      for (auto item : msg.ctrl_mode) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: hand_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hand_cmd.size() == 0) {
      out << "hand_cmd: []\n";
    } else {
      out << "hand_cmd:\n";
      for (auto item : msg.hand_cmd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandCmd & msg, bool use_flow_style = false)
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

}  // namespace hand_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hand_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hand_msgs::msg::HandCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  hand_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hand_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hand_msgs::msg::HandCmd & msg)
{
  return hand_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hand_msgs::msg::HandCmd>()
{
  return "hand_msgs::msg::HandCmd";
}

template<>
inline const char * name<hand_msgs::msg::HandCmd>()
{
  return "hand_msgs/msg/HandCmd";
}

template<>
struct has_fixed_size<hand_msgs::msg::HandCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hand_msgs::msg::HandCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hand_msgs::msg::HandCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HAND_MSGS__MSG__DETAIL__HAND_CMD__TRAITS_HPP_
