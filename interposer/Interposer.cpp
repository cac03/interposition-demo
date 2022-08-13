#include <cstdio>
#include <cstdint>

extern "C" {

int puts(const char* string) {
	printf("Got '%s' to print\n", string);
	return 0;
}

int32_t getAnswer() {
	printf("getting x\n");
	static constexpr int32_t OTHER_ANSWER = 34;
	return OTHER_ANSWER;
}

}

