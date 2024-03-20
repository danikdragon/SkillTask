# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtButtonS_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtButtonS_autogen.dir\\ParseCache.txt"
  "QtButtonS_autogen"
  )
endif()
