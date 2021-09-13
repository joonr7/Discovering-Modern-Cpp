cmake_minimum_required(VERSION 3.10)

# Project information
project(exercise1-2)

# Add executables
add_executable(exercise1-2 exercise1-2.cc)
add_executable(exercise1-2-2 exercise1-2-2.cc)

install(TARGETS
  exercise1-2
  exercise1-2-2
  DESTINATION lib/${PROJECT_NAME}
)
