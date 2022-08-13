add_executable (libc-demo LibcDemo.cpp)

add_custom_target(
	run-libc-demo
	COMMAND ${CMAKE_COMMAND} -E env LD_PRELOAD=$<TARGET_FILE:interposer> ./libc-demo
	DEPENDS libc-demo interposer
)

