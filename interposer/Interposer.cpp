#include <cstdio>
#include <cstdint>
#include <iostream>

extern "C" {

// NOLINTNEXTLINE(readability-inconsistent-declaration-parameter-name)
auto puts(const char* string) -> int {
	std::cout << "Got '" << string << "' to print" << std::endl;
	return 0;
}

auto getAnswer() -> int32_t {
	std::cout << "Getting interposed answer" << std::endl;
	static constexpr int32_t OTHER_ANSWER = 34;
	return OTHER_ANSWER;
}

}

