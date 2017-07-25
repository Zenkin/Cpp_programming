#ifndef CLASS_H
#define CLASS_H

#include<iostream>

class queue {
        int q[100];
        int sloc, rloc;
    public:
        int qget();
        void init();
        void qput(int i);
};

void queue::qput(int i) {
    if(sloc==100) {
        std::cout << "The queue is full. \n";
        return;
    }
    sloc++;
    q[sloc] =  i;
}

void queue::init() {
    rloc = sloc = 0;
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
