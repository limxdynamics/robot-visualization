// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from upper_body:msg/arm_servo.idl
// generated code does not contain a copyright notice

#include "upper_body/msg/detail/arm_servo__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_upper_body
const rosidl_type_hash_t *
upper_body__msg__arm_servo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x37, 0x4a, 0xc4, 0xc9, 0xc5, 0xa2, 0x3d, 0x67,
      0xb2, 0x69, 0x50, 0xd2, 0x2c, 0xb7, 0x6b, 0x16,
      0x82, 0xff, 0x28, 0x26, 0xbb, 0xc7, 0xc5, 0xd6,
      0x89, 0x28, 0x51, 0xde, 0xe7, 0x9f, 0xd5, 0xbe,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char upper_body__msg__arm_servo__TYPE_NAME[] = "upper_body/msg/arm_servo";

// Define type names, field names, and default values
static char upper_body__msg__arm_servo__FIELD_NAME__servo_type[] = "servo_type";
static char upper_body__msg__arm_servo__FIELD_NAME__left_arm_joints[] = "left_arm_joints";
static char upper_body__msg__arm_servo__FIELD_NAME__right_arm_joints[] = "right_arm_joints";
static char upper_body__msg__arm_servo__FIELD_NAME__left_arm_pos[] = "left_arm_pos";
static char upper_body__msg__arm_servo__FIELD_NAME__right_arm_pos[] = "right_arm_pos";

static rosidl_runtime_c__type_description__Field upper_body__msg__arm_servo__FIELDS[] = {
  {
    {upper_body__msg__arm_servo__FIELD_NAME__servo_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__msg__arm_servo__FIELD_NAME__left_arm_joints, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__msg__arm_servo__FIELD_NAME__right_arm_joints, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__msg__arm_servo__FIELD_NAME__left_arm_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
      7,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {upper_body__msg__arm_servo__FIELD_NAME__right_arm_pos, 13, 13},
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
upper_body__msg__arm_servo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {upper_body__msg__arm_servo__TYPE_NAME, 24, 24},
      {upper_body__msg__arm_servo__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string servo_type # servoJ or servoP\n"
  "# servoJ\n"
  "float32[] left_arm_joints # unit: rad\n"
  "float32[] right_arm_joints # unit: rad\n"
  "# servoP\n"
  "float32[7] left_arm_pos # [px py pz Qx Qy Qz Qw] unit: m\n"
  "float32[7] right_arm_pos # [px py pz Qx Qy Qz Qw] unit: mz";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
upper_body__msg__arm_servo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {upper_body__msg__arm_servo__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 248, 248},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
upper_body__msg__arm_servo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *upper_body__msg__arm_servo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
