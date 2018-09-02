#include <iostream>

using namespace std;

void swap(int *i, int *j);

int main() {
    int i = 10, j = 5;
    cout << "i = " << i << " j = " << j << endl;
    swap(&i, &j);
    cout << "i = " << i << " j = " << j << endl;

    return 0;
}

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}
