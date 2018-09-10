#include <iostream>

using namespace std;

int main() {
    char ch;
    int i;
    cout << sizeof ch << " byte\n";
    cout << sizeof i << " byte\n";
    cout << sizeof (float) << " byte\n";
    cout << sizeof (double) << " byte\n";
    int num[4];
    cout << sizeof num << " byte\n";

    int *p;
    p = new int;
    *p = 20;
    cout << *p << '\n';
    delete p;

    return 0;
}
