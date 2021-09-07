cmake_minimum_required(VERSION 3.10)

# Project information
project(exercise1-1)

# Add executables
add_executable(exercise1-1 exercise1-1.cc)

install(TARGETS
  exercise1-1
  DESTINATION lib/${PROJECT_NAME}
)
