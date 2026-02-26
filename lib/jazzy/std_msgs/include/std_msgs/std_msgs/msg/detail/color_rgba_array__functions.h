// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from std_msgs:msg/ColorRGBAArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "std_msgs/msg/color_rgba_array.h"


#ifndef STD_MSGS__MSG__DETAIL__COLOR_RGBA_ARRAY__FUNCTIONS_H_
#define STD_MSGS__MSG__DETAIL__COLOR_RGBA_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "std_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "std_msgs/msg/detail/color_rgba_array__struct.h"

/// Initialize msg/ColorRGBAArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * std_msgs__msg__ColorRGBAArray
 * )) before or use
 * std_msgs__msg__ColorRGBAArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__ColorRGBAArray__init(std_msgs__msg__ColorRGBAArray * msg);

/// Finalize msg/ColorRGBAArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__ColorRGBAArray__fini(std_msgs__msg__ColorRGBAArray * msg);

/// Create msg/ColorRGBAArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * std_msgs__msg__ColorRGBAArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__ColorRGBAArray *
std_msgs__msg__ColorRGBAArray__create(void);

/// Destroy msg/ColorRGBAArray message.
/**
 * It calls
 * std_msgs__msg__ColorRGBAArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__ColorRGBAArray__destroy(std_msgs__msg__ColorRGBAArray * msg);

/// Check for msg/ColorRGBAArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__ColorRGBAArray__are_equal(const std_msgs__msg__ColorRGBAArray * lhs, const std_msgs__msg__ColorRGBAArray * rhs);

/// Copy a msg/ColorRGBAArray message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__ColorRGBAArray__copy(
  const std_msgs__msg__ColorRGBAArray * input,
  std_msgs__msg__ColorRGBAArray * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
const rosidl_type_hash_t *
std_msgs__msg__ColorRGBAArray__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
const rosidl_runtime_c__type_description__TypeDescription *
std_msgs__msg__ColorRGBAArray__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
const rosidl_runtime_c__type_description__TypeSource *
std_msgs__msg__ColorRGBAArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
std_msgs__msg__ColorRGBAArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ColorRGBAArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * std_msgs__msg__ColorRGBAArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__ColorRGBAArray__Sequence__init(std_msgs__msg__ColorRGBAArray__Sequence * array, size_t size);

/// Finalize array of msg/ColorRGBAArray messages.
/**
 * It calls
 * std_msgs__msg__ColorRGBAArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__ColorRGBAArray__Sequence__fini(std_msgs__msg__ColorRGBAArray__Sequence * array);

/// Create array of msg/ColorRGBAArray messages.
/**
 * It allocates the memory for the array and calls
 * std_msgs__msg__ColorRGBAArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
std_msgs__msg__ColorRGBAArray__Sequence *
std_msgs__msg__ColorRGBAArray__Sequence__create(size_t size);

/// Destroy array of msg/ColorRGBAArray messages.
/**
 * It calls
 * std_msgs__msg__ColorRGBAArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
void
std_msgs__msg__ColorRGBAArray__Sequence__destroy(std_msgs__msg__ColorRGBAArray__Sequence * array);

/// Check for msg/ColorRGBAArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__ColorRGBAArray__Sequence__are_equal(const std_msgs__msg__ColorRGBAArray__Sequence * lhs, const std_msgs__msg__ColorRGBAArray__Sequence * rhs);

/// Copy an array of msg/ColorRGBAArray messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_std_msgs
bool
std_msgs__msg__ColorRGBAArray__Sequence__copy(
  const std_msgs__msg__ColorRGBAArray__Sequence * input,
  std_msgs__msg__ColorRGBAArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STD_MSGS__MSG__DETAIL__COLOR_RGBA_ARRAY__FUNCTIONS_H_
