// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__ARM_SERVO__TRAITS_HPP_
#define UPPER_BODY__MSG__DETAIL__ARM_SERVO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "upper_body/msg/detail/arm_servo__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace upper_body
{

namespace msg
{

inline void to_flow_style_yaml(
  const arm_servo & msg,
  std::ostream & out)
{
  out << "{";
  // member: servo_type
  {
    out << "servo_type: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_type, out);
    out << ", ";
  }

  // member: left_arm_joints
  {
    if (msg.left_arm_joints.size() == 0) {
      out << "left_arm_joints: []";
    } else {
      out << "left_arm_joints: [";
      size_t pending_items = msg.left_arm_joints.size();
      for (auto item : msg.left_arm_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_arm_joints
  {
    if (msg.right_arm_joints.size() == 0) {
      out << "right_arm_joints: []";
    } else {
      out << "right_arm_joints: [";
      size_t pending_items = msg.right_arm_joints.size();
      for (auto item : msg.right_arm_joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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
  const arm_servo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: servo_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_type: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_type, out);
    out << "\n";
  }

  // member: left_arm_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_arm_joints.size() == 0) {
      out << "left_arm_joints: []\n";
    } else {
      out << "left_arm_joints:\n";
      for (auto item : msg.left_arm_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: right_arm_joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_arm_joints.size() == 0) {
      out << "right_arm_joints: []\n";
    } else {
      out << "right_arm_joints:\n";
      for (auto item : msg.right_arm_joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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

inline std::string to_yaml(const arm_servo & msg, bool use_flow_style = false)
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

}  // namespace upper_body

namespace rosidl_generator_traits
{

[[deprecated("use upper_body::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const upper_body::msg::arm_servo & msg,
  std::ostream & out, size_t indentation = 0)
{
  upper_body::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use upper_body::msg::to_yaml() instead")]]
inline std::string to_yaml(const upper_body::msg::arm_servo & msg)
{
  return upper_body::msg::to_yaml(msg);
}

template<>
inline const char * data_type<upper_body::msg::arm_servo>()
{
  return "upper_body::msg::arm_servo";
}

template<>
inline const char * name<upper_body::msg::arm_servo>()
{
  return "upper_body/msg/arm_servo";
}

template<>
struct has_fixed_size<upper_body::msg::arm_servo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<upper_body::msg::arm_servo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<upper_body::msg::arm_servo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UPPER_BODY__MSG__DETAIL__ARM_SERVO__TRAITS_HPP_
