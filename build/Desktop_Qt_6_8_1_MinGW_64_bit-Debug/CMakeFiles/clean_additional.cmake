# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\helloworld1226_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\helloworld1226_autogen.dir\\ParseCache.txt"
  "helloworld1226_autogen"
  )
endif()
