cmake_minimum_required(VERSION 3.17)
project("My app" VERSION 1.0)
set(CMAKE_CXX_STANDARD 14)

set(PATH_H ${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)