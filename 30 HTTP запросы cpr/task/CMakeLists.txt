cmake_minimum_required (VERSION 3.28)
set(CXX_STANDARD 20)
project ("task1" VERSION 1.0)

#cmake_policy(SET CMP0079 NEW)

include(FetchContent)
FetchContent_Declare(cpr
  GIT_REPOSITORY https://github.com/libcpr/cpr.git
  GIT_TAG        3b15fa82ea74739b574d705fea44959b58142eb8
)
FetchContent_MakeAvailable(cpr)

set(BUILD_CPR_TESTS OFF)
set(CMAKE_USE_OPENSSL OFF)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable ("task1" main.cpp)
target_link_libraries("task1" PRIVATE  cpr::cpr)