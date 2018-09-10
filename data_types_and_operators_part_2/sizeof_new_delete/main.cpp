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

    p = new int (40);
    cout << *p << '\n';
    delete p;

    double *d;
    d = new double [10];
    for(int i = 0; i < 10; i++) d[i] = 100.00 + i;
    for(int i = 0; i < 10; i++) cout << d[i] << ' ';
    delete [] d;

    return 0;
}
