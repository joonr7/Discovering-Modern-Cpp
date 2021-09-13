cmake_minimum_required(VERSION 3.10)

# Project information
project(exercise2-1)

# Add executables
add_executable(exercise2-1 exercise2-1.cc)

install(TARGETS
  exercise2-1
  DESTINATION lib/${PROJECT_NAME}
)
