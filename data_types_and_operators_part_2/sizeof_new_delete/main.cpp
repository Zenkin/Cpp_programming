#include <iostream>
#include <cstdlib>

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

    int *k;
    double *j;
    k = (int *) malloc(sizeof(int));
    if(!k) {
        cout << "You could not allocate memory\n";
        return 1;
    }

    j = (double *) malloc(sizeof(j));
    if(!j) {
        cout << "You could not allocate memory\n";
        return 1;
    }

    *k = 10;
    *j = 11.2;
    cout << '\n' << *k << ' ' << *j << '\n';

    free(k);
    free(j);

    return 0;
}
