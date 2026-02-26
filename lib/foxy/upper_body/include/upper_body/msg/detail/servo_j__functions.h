// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from upper_body:msg/servoJ.idl
// generated code does not contain a copyright notice

#ifndef UPPER_BODY__MSG__DETAIL__SERVO_J__FUNCTIONS_H_
#define UPPER_BODY__MSG__DETAIL__SERVO_J__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "upper_body/msg/rosidl_generator_c__visibility_control.h"

#include "upper_body/msg/detail/servo_j__struct.h"

/// Initialize msg/servoJ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * upper_body__msg__servoJ
 * )) before or use
 * upper_body__msg__servoJ__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__msg__servoJ__init(upper_body__msg__servoJ * msg);

/// Finalize msg/servoJ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__msg__servoJ__fini(upper_body__msg__servoJ * msg);

/// Create msg/servoJ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * upper_body__msg__servoJ__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
upper_body__msg__servoJ *
upper_body__msg__servoJ__create();

/// Destroy msg/servoJ message.
/**
 * It calls
 * upper_body__msg__servoJ__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__msg__servoJ__destroy(upper_body__msg__servoJ * msg);

/// Check for msg/servoJ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__msg__servoJ__are_equal(const upper_body__msg__servoJ * lhs, const upper_body__msg__servoJ * rhs);

/// Copy a msg/servoJ message.
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
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__msg__servoJ__copy(
  const upper_body__msg__servoJ * input,
  upper_body__msg__servoJ * output);

/// Initialize array of msg/servoJ messages.
/**
 * It allocates the memory for the number of elements and calls
 * upper_body__msg__servoJ__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__msg__servoJ__Sequence__init(upper_body__msg__servoJ__Sequence * array, size_t size);

/// Finalize array of msg/servoJ messages.
/**
 * It calls
 * upper_body__msg__servoJ__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__msg__servoJ__Sequence__fini(upper_body__msg__servoJ__Sequence * array);

/// Create array of msg/servoJ messages.
/**
 * It allocates the memory for the array and calls
 * upper_body__msg__servoJ__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
upper_body__msg__servoJ__Sequence *
upper_body__msg__servoJ__Sequence__create(size_t size);

/// Destroy array of msg/servoJ messages.
/**
 * It calls
 * upper_body__msg__servoJ__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
void
upper_body__msg__servoJ__Sequence__destroy(upper_body__msg__servoJ__Sequence * array);

/// Check for msg/servoJ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__msg__servoJ__Sequence__are_equal(const upper_body__msg__servoJ__Sequence * lhs, const upper_body__msg__servoJ__Sequence * rhs);

/// Copy an array of msg/servoJ messages.
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
ROSIDL_GENERATOR_C_PUBLIC_upper_body
bool
upper_body__msg__servoJ__Sequence__copy(
  const upper_body__msg__servoJ__Sequence * input,
  upper_body__msg__servoJ__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // UPPER_BODY__MSG__DETAIL__SERVO_J__FUNCTIONS_H_
