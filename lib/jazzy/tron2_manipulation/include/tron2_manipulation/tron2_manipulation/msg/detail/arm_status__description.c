// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tron2_manipulation:msg/arm_status.idl
// generated code does not contain a copyright notice

#include "tron2_manipulation/msg/detail/arm_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tron2_manipulation
const rosidl_type_hash_t *
tron2_manipulation__msg__arm_status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x27, 0xea, 0x44, 0x40, 0x2a, 0xf2, 0x32,
      0xcc, 0xfc, 0x2c, 0xf8, 0x05, 0x71, 0x7b, 0xe7,
      0xfc, 0x81, 0x4b, 0xc4, 0xc0, 0x15, 0x01, 0x09,
      0xf9, 0x5c, 0xa4, 0xc8, 0x46, 0xcf, 0x45, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tron2_manipulation__msg__arm_status__TYPE_NAME[] = "tron2_manipulation/msg/arm_status";

// Define type names, field names, and default values
static char tron2_manipulation__msg__arm_status__FIELD_NAME__left_arm_pos[] = "left_arm_pos";
static char tron2_manipulation__msg__arm_status__FIELD_NAME__right_arm_pos[] = "right_arm_pos";

static rosidl_runtime_c__type_description__Field tron2_manipulation__msg__arm_status__FIELDS[] = {
  {
    {tron2_manipulation__msg__arm_status__FIELD_NAME__left_arm_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tron2_manipulation__msg__arm_status__FIELD_NAME__right_arm_pos, 13, 13},
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
tron2_manipulation__msg__arm_status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tron2_manipulation__msg__arm_status__TYPE_NAME, 33, 33},
      {tron2_manipulation__msg__arm_status__FIELDS, 2, 2},
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
tron2_manipulation__msg__arm_status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tron2_manipulation__msg__arm_status__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 115, 115},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tron2_manipulation__msg__arm_status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tron2_manipulation__msg__arm_status__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
