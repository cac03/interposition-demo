cmake_minimum_required (VERSION 3.23)
project (interposition-demo)

add_subdirectory(interposer)
add_subdirectory(libanswer)
add_subdirectory(demos/libc)
add_subdirectory(demos/user-library)

