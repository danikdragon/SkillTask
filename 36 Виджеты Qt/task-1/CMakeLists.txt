cmake_minimum_required(VERSION 3.8)
project(MyQtProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "B:\\Qt\\5.15.2\\mingw81_64\\lib\\cmake")

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(MyApp main.cpp)

target_link_libraries(MyApp Qt5::Widgets)