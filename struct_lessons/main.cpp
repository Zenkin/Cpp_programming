#include <iostream>
#include <ctime>

using namespace std;

struct my_type {
    int a, b;
} type_val;

void getTime();
my_type &f(my_type &val);

int main() {
    my_type *p;
    p = new my_type;
    p->a = 1;

    getTime();
    my_type x, y;
    x.a = 10;
    x.b = 2;
    cout << x.a << ' ' << x.b << '\n';
    y = f(x);
    cout << y.a << ' ' << y.b << '\n';

    return 0;
}

my_type &f(my_type &val) {
    val.a *= val.a;
    val.b *= val.b;

    return val;
}

void getTime() {
    struct tm *ptr;
    time_t curtime;
    time(&curtime);
    ptr = localtime(&curtime);
    cout << asctime(ptr);
}
