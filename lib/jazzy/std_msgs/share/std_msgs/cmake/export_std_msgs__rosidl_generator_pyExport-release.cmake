#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "std_msgs::std_msgs__rosidl_generator_py" for configuration "Release"
set_property(TARGET std_msgs::std_msgs__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(std_msgs::std_msgs__rosidl_generator_py PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "std_msgs::std_msgs__rosidl_generator_c;Python3::Python;std_msgs::std_msgs__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_generator_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_fastrtps_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_c;builtin_interfaces::builtin_interfaces__rosidl_typesupport_fastrtps_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_introspection_cpp;builtin_interfaces::builtin_interfaces__rosidl_typesupport_cpp;builtin_interfaces::builtin_interfaces__rosidl_generator_py"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libstd_msgs__rosidl_generator_py.so"
  IMPORTED_SONAME_RELEASE "libstd_msgs__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets std_msgs::std_msgs__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_std_msgs::std_msgs__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libstd_msgs__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
