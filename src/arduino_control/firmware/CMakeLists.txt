cmake_minimum_required(VERSION 3.0.2)

include_directories(${ROS_LIB_DIR})
include_directories(~/Arduino/libraries/AccelStepper/src)
# Remove this if using an Arduino without native USB (eg, other than Leonardo)
add_definitions(-DUSB_CON)

generate_arduino_firmware(listen
  SRCS ../src/stepper_control.cpp ${ROS_LIB_DIR}/time.cpp
  BOARD mega2560
  PORT /dev/ttyACM0
)