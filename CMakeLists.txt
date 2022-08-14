cmake_minimum_required(VERSION 3.14)

include(cmake/prelude.cmake)

project(
    interposition-demo
    VERSION 0.1.0
    DESCRIPTION "Interposition demo"
    LANGUAGES CXX
)

include(cmake/project-is-top-level.cmake)
include(cmake/variables.cmake)

# ---- Developer mode ----

if(NOT interposition-demo_DEVELOPER_MODE)
  return()
elseif(NOT PROJECT_IS_TOP_LEVEL)
  message(
      AUTHOR_WARNING
      "Developer mode is intended for developers of interposition-demo"
  )
endif()

include(cmake/dev-mode.cmake)

add_subdirectory(libanswer)
add_subdirectory(interposer)
add_subdirectory(demos/libc)
add_subdirectory(demos/application)
add_subdirectory(demos/user-library)

