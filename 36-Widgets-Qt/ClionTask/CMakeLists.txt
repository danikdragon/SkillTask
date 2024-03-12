cmake_minimum_required(VERSION 3.8)
project(ClionTask)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(find_package)

#set(CMAKE_PREFIX_PATH "B:/Qt/5.15.2/mingw81_64/lib/cmake")
#find_package(Qt NAMES Qt5 Qt6 COMPONENTS)
find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)

add_executable(ClionTask main.cpp)

target_link_libraries(ClionTask PRIVATE
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Gui
        Qt${QT_VERSION_MAJOR}::Widgets
)

#if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
#    set(DEBUG_SUFFIX)
#    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
#        set(DEBUG_SUFFIX "d")
#    endif ()
#    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
#    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
#        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
#        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
#            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
#        endif ()
#    endif ()
#    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E make_directory
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
#    endif ()
#    foreach (QT_LIB Core Gui Widgets)
#        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#                COMMAND ${CMAKE_COMMAND} -E copy
#                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
#                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
#    endforeach (QT_LIB)
#endif ()
