#include <Answer.hpp>

namespace interposition_demo::answer {

extern "C" auto getAnswer() -> int32_t {
	static constexpr int32_t ANSWER = 42;
	return ANSWER;
}

} //namespace interposition_demo::answer
