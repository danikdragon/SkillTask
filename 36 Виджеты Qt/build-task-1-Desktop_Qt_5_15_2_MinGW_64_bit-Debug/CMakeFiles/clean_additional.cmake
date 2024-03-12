# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\MyApp_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MyApp_autogen.dir\\ParseCache.txt"
  "MyApp_autogen"
  )
endif()
