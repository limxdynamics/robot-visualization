cmake_minimum_required(VERSION 3.5)

project(robot_visualization)

# Find required ROS packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
)

# Define package dependencies
catkin_package(
  CATKIN_DEPENDS
    roscpp
)

# Determine the path to mrosbridger based on ROS distribution and architecture
if(DEFINED ENV{ROS_DISTRO})
  if($ENV{ROS_DISTRO} STREQUAL "noetic")
    if (${CMAKE_SYSTEM_PROCESSOR} MATCHES "x86_64")
      message("ROS Noetic detected x86_64.")
      set(MROS_BRIDGER_PATH ${PROJECT_SOURCE_DIR}/lib/noetic/mrosbridger)
    elseif (${CMAKE_SYSTEM_PROCESSOR} MATCHES "aarch64")
      message("ROS Noetic detected aarch64.")
      set(MROS_BRIDGER_PATH ${PROJECT_SOURCE_DIR}/lib/noetic-aarch64/mrosbridger)
    else()
      message(FATAL_ERROR "ROS Noetic detected, unsupported architecture!")
    endif()
  elseif($ENV{ROS_DISTRO} STREQUAL "melodic")
    if (${CMAKE_SYSTEM_PROCESSOR} MATCHES "x86_64")
      message("ROS Melodic detected x86_64.")
      set(MROS_BRIDGER_PATH ${PROJECT_SOURCE_DIR}/lib/melodic/mrosbridger)
    elseif (${CMAKE_SYSTEM_PROCESSOR} MATCHES "aarch64")
      message("ROS Melodic detected aarch64.")
      set(MROS_BRIDGER_PATH ${PROJECT_SOURCE_DIR}/lib/melodic-aarch64/mrosbridger)
    else()
      message(FATAL_ERROR "ROS Melodic detected, unsupported architecture!")
    endif()
  else()
    message(FATAL_ERROR "Unknown ROS distribution: $ENV{ROS_DISTRO}")
  endif()
else()
  message(FATAL_ERROR "ROS_DISTRO environment variable is not defined.")
endif()

# Copy mrosbridger to the development workspace directory
add_custom_target(mros_bridger_target ALL
  COMMAND ${CMAKE_COMMAND} -E make_directory ${CATKIN_DEVEL_PREFIX}/lib/${PROJECT_NAME}
  COMMAND ${CMAKE_COMMAND} -E copy_if_different ${MROS_BRIDGER_PATH} ${CATKIN_DEVEL_PREFIX}/lib/${PROJECT_NAME}
  COMMAND chmod +x ${CATKIN_DEVEL_PREFIX}/lib/${PROJECT_NAME}/mrosbridger
)

# Install mrosbridger binary
install(PROGRAMS ${MROS_BRIDGER_PATH} DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

# Resource files for installation
install(DIRECTORY layout launch rviz DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

