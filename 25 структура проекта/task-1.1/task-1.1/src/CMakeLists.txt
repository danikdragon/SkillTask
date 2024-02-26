cmake_minimum_required(VERSION 3.17)

add_executable(MyApp task-1.1.cpp ${INCLUDE_VAR}/task-1.1.h tools.cpp)

target_include_directories(MyApp PUBLIC ${INCLUDE_VAR})