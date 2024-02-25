# CMakeList.txt: проект CMake для task-3.1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task-3.1 "main.cpp" "main.h" "window.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task-3.1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
