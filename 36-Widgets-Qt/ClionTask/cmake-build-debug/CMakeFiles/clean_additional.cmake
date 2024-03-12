# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ClionTask_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ClionTask_autogen.dir\\ParseCache.txt"
  "ClionTask_autogen"
  )
endif()
