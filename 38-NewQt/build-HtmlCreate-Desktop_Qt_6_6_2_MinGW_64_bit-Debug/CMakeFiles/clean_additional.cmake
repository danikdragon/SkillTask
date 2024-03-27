# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HtmlCreate_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HtmlCreate_autogen.dir\\ParseCache.txt"
  "HtmlCreate_autogen"
  )
endif()
