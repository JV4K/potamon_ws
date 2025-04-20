cmake_minimum_required(VERSION 3.8)
project(potamon-rpi)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(potamon_interfaces REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)


include_directories(
  include
  ${ament_INCLUDE_DIRS}  # ROS 2 and dependency includes
)

add_executable(potamon_rpi src/potamon_control.cpp)
ament_target_dependencies(potamon_rpi rclcpp potamon_interfaces nav_msgs sensor_msgs tf2 geometry_msgs std_msgs std_srvs)

install(TARGETS
  potamon_rpi
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)

ament_package()
