cmake_minimum_required (VERSION 3.23)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project (interposition-demo)

add_subdirectory(interposer)
add_subdirectory(libanswer)
add_subdirectory(demos/libc)
add_subdirectory(demos/user-library)
add_subdirectory(demos/application)

