#include <iostream>
#include <cstdint>
#include <cstdio>
#include <Answer.hpp>

extern "C" auto getAnswer() -> int32_t {
	static constexpr int32_t ANSWER = 78;
	return ANSWER;
}

auto main() -> int {
	auto answer = getAnswer();
	std::cout << "The answer is '" << answer << "'" << std::endl;
}

