#include"queue.h"

int main(int argc, char *argv[]) {
    queue q1, q2;
    q1.init();
    q2.init();

    q1.qput(10);
    q2.qput(19);

    q1.qput(20);
    q2.qput(1);

    std::cout << "q1 queue content: ";
    std::cout << q1.qget() << " ";
    std::cout << q1.qget() << "\n";

    std::cout << "q2 queue content: ";
    std::cout << q2.qget() << " ";
    std::cout << q2.qget() << "\n";

    return 0;
}
