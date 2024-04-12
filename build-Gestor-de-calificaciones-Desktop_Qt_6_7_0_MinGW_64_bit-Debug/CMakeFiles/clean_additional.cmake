# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Gestor-de-calificaciones_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Gestor-de-calificaciones_autogen.dir\\ParseCache.txt"
  "Gestor-de-calificaciones_autogen"
  )
endif()
