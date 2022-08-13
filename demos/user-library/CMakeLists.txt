add_executable (user-library-demo UserLibraryDemo.cpp)

target_link_libraries(user-library-demo answer)

add_custom_target(
	run-user-library-demo
	COMMAND ${CMAKE_COMMAND} -E env LD_PRELOAD=$<TARGET_FILE:interposer> ./user-library-demo
	DEPENDS user-library-demo interposer
)

