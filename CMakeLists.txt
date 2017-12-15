cmake_minimum_required(VERSION 2.8.12)
project(eigen_plugin_test)

## System dependencies are found with CMake's conventions
find_package(cmake_modules REQUIRED)

#find_package(Eigen3 REQUIRED )
# find_package(sound_play)
## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  eigen_conversions
  pluginlib
  roscpp
  roslib
)

###################################
## catkin specific configuration ##
###################################

# @TODO set dependencies and exported libraries
# this will decrease the potential for build-order problems
catkin_package(
   INCLUDE_DIRS plugin1 plugin2
   LIBRARIES plugin1 plugin2
   CATKIN_DEPENDS
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
  ${catkin_INCLUDE_DIRS}
)

#include_directories(SYSTEM "${EIGEN3_INCLUDE_DIR}")
#-----------------------------------
add_subdirectory( plugin1 )
add_subdirectory( plugin2 )
