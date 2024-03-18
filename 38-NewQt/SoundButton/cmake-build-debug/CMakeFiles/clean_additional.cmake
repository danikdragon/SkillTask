# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SoundButton_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SoundButton_autogen.dir\\ParseCache.txt"
  "SoundButton_autogen"
  )
endif()
