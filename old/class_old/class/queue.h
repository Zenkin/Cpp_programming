#ifndef CLASS_H
#define CLASS_H

#include<iostream>

class queue {
        int q[100];
        int sloc, rloc;
    public:
        queue(); // constructor
        ~queue();
        int qget();
        void qput(int i);
};

queue::queue() {
    sloc = rloc = 0;
    std::cout << "The queue initialized. \n";
}

queue::~queue() {
    std::cout << "The queue is destroyed. \n";
}

void queue::qput(int i) {
    if(sloc==100) {
        std::cout << "The queue is full. \n";
        return;
    }
    sloc++;
    q[sloc] =  i;
}

int queue::qget() {
    if(rloc == sloc) {
        std::cout << "The queue is empty. \n";
        return 0;
    }
    rloc++;
    return q[rloc];
}

#endif // CLASS_H
