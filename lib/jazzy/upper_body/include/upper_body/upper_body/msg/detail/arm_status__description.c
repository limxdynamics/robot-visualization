// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from upper_body:msg/arm_status.idl
// generated code does not contain a copyright notice

#include "upper_body/msg/detail/arm_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__msg__arm_status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xa9, 0x4e, 0x2f, 0xde, 0xc2, 0x2c, 0x17,
      0xf8, 0xaa, 0x37, 0x0f, 0x76, 0x52, 0x4b, 0xcd,
      0x21, 0xae, 0x74, 0xf9, 0x6d, 0x86, 0xdc, 0x75,
      0xa7, 0xc2, 0xc4, 0x39, 0x5b, 0x55, 0x7e, 0x94,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char upper_body__msg__arm_status__TYPE_NAME[] = "upper_body/msg/arm_status";

// Define type names, field names, and default values
static char upper_body__msg__arm_status__FIELD_NAME__left_arm_pos[] = "left_arm_pos";
static char upper_body__msg__arm_status__FIELD_NAME__right_arm_pos[] = "right_arm_pos";

static rosidl_runtime_c__type_description__Field upper_body__msg__arm_status__FIELDS[] = {
  {
    {upper_body__msg__arm_status__FIELD_NAME__left_arm_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__msg__arm_status__FIELD_NAME__right_arm_pos, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
upper_body__msg__arm_status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__msg__arm_status__TYPE_NAME, 25, 25},
      {upper_body__msg__arm_status__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32[7] left_arm_pos # [px py pz Qx Qy Qz Qw] unit: m\n"
  "float32[7] right_arm_pos # [px py pz Qx Qy Qz Qw] unit: m";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
upper_body__msg__arm_status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__msg__arm_status__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 115, 115},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__msg__arm_status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__msg__arm_status__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
