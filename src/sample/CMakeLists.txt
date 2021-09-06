cmake_minimum_required(VERSION 3.10)

# Project information
project(sample)

# Add executables
add_executable(sample sample.cc)

install(TARGETS
  sample
  DESTINATION lib/${PROJECT_NAME}
)
