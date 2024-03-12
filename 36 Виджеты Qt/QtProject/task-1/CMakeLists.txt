cmake_minimum_required(VERSION 3.8)
project(MyApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(find_package)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Widgets Gui)
find_package(Qt${QT_VERSION_MAJOR}
    COMPONENTS
        Widgets
        Core
        Gui
)

add_executable(MyApp
    main.cpp
    circuls.cpp
    circuls.h
)


target_link_libraries(MyApp
    Qt::Widgets
    Qt::Core
    Qt::Gui
)
