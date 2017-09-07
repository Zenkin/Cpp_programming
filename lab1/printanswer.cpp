#include "printanswer.h"

void printAnswer(struct Answer answer) {
    std::cout << std::endl;
    std::cout << "#######################" << std::endl;
    std::cout << "Answer: " << answer.data << "±" << answer.absoluteError << std::endl;
    std::cout << "#######################" << std::endl;
    std::cout << std::endl;
}
