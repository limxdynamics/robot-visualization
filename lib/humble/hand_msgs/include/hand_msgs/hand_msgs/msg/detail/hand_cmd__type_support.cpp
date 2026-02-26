// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from hand_msgs:msg/HandCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "hand_msgs/msg/detail/hand_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace hand_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void HandCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) hand_msgs::msg::HandCmd(_init);
}

void HandCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<hand_msgs::msg::HandCmd *>(message_memory);
  typed_message->~HandCmd();
}

size_t size_function__HandCmd__ctrl_mode(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__HandCmd__ctrl_mode(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__HandCmd__ctrl_mode(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__HandCmd__ctrl_mode(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__HandCmd__ctrl_mode(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__HandCmd__ctrl_mode(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__HandCmd__ctrl_mode(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__HandCmd__hand_cmd(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__HandCmd__hand_cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<hand_msgs::msg::HandMsg, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__HandCmd__hand_cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<hand_msgs::msg::HandMsg, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__HandCmd__hand_cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const hand_msgs::msg::HandMsg *>(
    get_const_function__HandCmd__hand_cmd(untyped_member, index));
  auto & value = *reinterpret_cast<hand_msgs::msg::HandMsg *>(untyped_value);
  value = item;
}

void assign_function__HandCmd__hand_cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<hand_msgs::msg::HandMsg *>(
    get_function__HandCmd__hand_cmd(untyped_member, index));
  const auto & value = *reinterpret_cast<const hand_msgs::msg::HandMsg *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HandCmd_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::HandCmd, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hand_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::HandCmd, hand_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ctrl_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::HandCmd, ctrl_mode),  // bytes offset in struct
    nullptr,  // default value
    size_function__HandCmd__ctrl_mode,  // size() function pointer
    get_const_function__HandCmd__ctrl_mode,  // get_const(index) function pointer
    get_function__HandCmd__ctrl_mode,  // get(index) function pointer
    fetch_function__HandCmd__ctrl_mode,  // fetch(index, &value) function pointer
    assign_function__HandCmd__ctrl_mode,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hand_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<hand_msgs::msg::HandMsg>(),  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(hand_msgs::msg::HandCmd, hand_cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__HandCmd__hand_cmd,  // size() function pointer
    get_const_function__HandCmd__hand_cmd,  // get_const(index) function pointer
    get_function__HandCmd__hand_cmd,  // get(index) function pointer
    fetch_function__HandCmd__hand_cmd,  // fetch(index, &value) function pointer
    assign_function__HandCmd__hand_cmd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HandCmd_message_members = {
  "hand_msgs::msg",  // message namespace
  "HandCmd",  // message name
  4,  // number of fields
  sizeof(hand_msgs::msg::HandCmd),
  HandCmd_message_member_array,  // message members
  HandCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  HandCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HandCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HandCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace hand_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<hand_msgs::msg::HandCmd>()
{
  return &::hand_msgs::msg::rosidl_typesupport_introspection_cpp::HandCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, hand_msgs, msg, HandCmd)() {
  return &::hand_msgs::msg::rosidl_typesupport_introspection_cpp::HandCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
