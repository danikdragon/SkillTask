cmake_minimum_required (VERSION 3.28)

add_executable ("task1" task1.cpp)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task1 PROPERTY CXX_STANDARD 17)
endif()