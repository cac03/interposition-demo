add_executable(application Application.cpp)
target_link_libraries(application answer)

add_custom_target(
	run-application-demo
	COMMAND ${CMAKE_COMMAND} -E env LD_PRELOAD=$<TARGET_FILE:interposer> ./application
	DEPENDS application interposer
)

add_custom_target(
	run-application-demo-no-interposition
	COMMAND ./application
	DEPENDS application interposer
)

