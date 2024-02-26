cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)

set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(nlohmann_json)

add_executable (task1 "task1.cpp")

target_link_libraries(task1 PRIVATE nlohmann_json::nlohmann_json)