cmake_minimum_required(VERSION 3.8)
project(QtWidgetsApplication1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(qt.cmake)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Core
        Gui
        Widgets
)
qt_standard_project_setup()

set(PROJECT_SOURCES
    main.cpp
    circuls.cpp
    circuls.h
)

qt_add_executable(QtWidgetsApplication1 ${PROJECT_SOURCES})

set_target_properties(QtWidgetsApplication1
    PROPERTIES
        WIN32_EXECUTABLE TRUE
)

target_link_libraries(QtWidgetsApplication1
    PUBLIC
        Qt::Core
        Qt::Gui
        Qt::Widgets
)
