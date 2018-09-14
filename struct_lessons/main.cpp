#include <iostream>

using namespace std;

struct my_type {
    int a, b;
} type_val;

int main() {
    my_type *p;
    p = new my_type;
    p->a = 1;
    cout << p->a << '\n';

    return 0;
}
