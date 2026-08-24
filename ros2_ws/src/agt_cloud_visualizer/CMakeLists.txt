cmake_minimum_required(VERSION 3.8)
project(agt_cloud_visualizer)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2_ros REQUIRED)

add_executable(cloud_republisher src/cloud_republisher.cpp)
ament_target_dependencies(cloud_republisher
  rclcpp
  sensor_msgs
  tf2_ros
)

install(TARGETS
  cloud_republisher
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  config
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
