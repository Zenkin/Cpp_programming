#include <iostream>
#include <ctime>

using namespace std;

struct my_type {
    int a, b;
} type_val;

void getTime();

int main() {
    my_type *p;
    p = new my_type;
    p->a = 1;

    while(1) getTime();

    return 0;
}

void getTime() {
    struct tm *ptr;
    time_t curtime;
    time(&curtime);
    ptr = localtime(&curtime);
    cout << ptr->tm_hour << ':' << ptr->tm_min;
    cout << ':' <<	ptr->tm_sec << '\n';
}
