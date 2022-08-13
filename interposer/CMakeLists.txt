add_library (interposer SHARED Interposer.cpp)

target_include_directories (interposer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

