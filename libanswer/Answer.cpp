#include <Answer.hpp>

namespace InterpositionDemo::Answer {

extern "C" int32_t getAnswer() {
	static constexpr int32_t ANSWER = 42;
	return ANSWER;
}

}
