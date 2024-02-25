set(CMAKE_CXX_STANDARD 14)

add_executable (MyPC main.cpp ram.cpp kbd.cpp gpu.cpp disk.cpp cpu.cpp ${PATH_H}/ram.h ${PATH_H}/kbd.h ${PATH_H}/gpu.h ${PATH_H}/disk.h ${PATH_H}/cpu.h)

target_include_directories(MyPC PUBLIC ${PATH_H})