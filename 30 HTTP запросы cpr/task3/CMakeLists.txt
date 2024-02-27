cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
project("task3" VERSION 1.0)

set(CPR_BUILD_TESTS OFF)
set(CMAKE_USE_OPENSSL OFF)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include(FetchContent)
FetchContent_Declare(
	cpr
	GIT_REPOSITORY https://github.com/libcpr/cpr.git
	GIT_TAG 3b15fa82ea74739b574d705fea44959b58142eb8
)
FetchContent_MakeAvailable(cpr)

add_executable (task3 "main.cpp")
target_link_libraries("task3" PRIVATE cpr::cpr)