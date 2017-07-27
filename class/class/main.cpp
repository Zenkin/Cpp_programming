#include"queue.h"

int main(int argc, char *argv[]) {
    queue queue_1, queue_2;

    queue_1.qput(10);
    queue_2.qput(19);

    queue_1.qput(20);
    queue_2.qput(1);

    std::cout << "queue_1 content: ";
    std::cout << queue_1.qget() << " ";
    std::cout << queue_1.qget() << "\n";

    std::cout << "queue_2 content: ";
    std::cout << queue_2.qget() << " ";
    std::cout << queue_2.qget() << "\n";

    return 0;
}
