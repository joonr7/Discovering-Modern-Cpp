cmake_minimum_required(VERSION 3.10)

# Project information
project(exercise2-2)

# Add executables
add_executable(exercise2-2 exercise2-2.cc)

install(TARGETS
  exercise2-2
  DESTINATION lib/${PROJECT_NAME}
)
