#include <iostream>
#include <cstdint>
#include <cstdio>
#include <Answer.hpp>

extern "C" int32_t getAnswer() {
	return 78;
}

int main() {
	auto answer = getAnswer();
	std::cout << "The answer is '" << answer << "'" << std::endl;
}

