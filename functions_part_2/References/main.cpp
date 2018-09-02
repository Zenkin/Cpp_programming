#include <iostream>

using namespace std;

const int size = 10;
int error = -1;

void swap(int *i, int *j);
void swap_ref(int &x, int &y);
double &change_it(int i);
int &put(int i);
int get(int i);

double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5};
int array[size];

int main() {
    cout << "Swap:\n";
    int i = 10, j = 5;
    cout << "  i = " << i << " j = " << j << endl;
    swap(&i, &j);
    cout << "  i = " << i << " j = " << j << endl;

    cout << "Swap using references:\n";
    int x = 8, y = 32;
    cout << "  x = " << x << " y = " << y << endl;
    swap(x, y);
    cout << "  x = " << x << " y = " << y << endl;

    cout << "\nInitial values:\n  ";

    for(int i = 0; i < 5; i++) {
        cout << vals[i] << " ";
    }

    change_it(1) = 1;
    change_it(2) = 2;
    change_it(3) = 3;
    change_it(4) = 4;
    change_it(5) = 5;

    cout << "\nModified values:\n  ";

    for(int i = 0; i < 5; i++) {
        cout << vals[i] << " ";
    }
    cout << "\n  ";

    for(int i = 0; i < size; i++) put(i) = i;
    for(int i = 0; i < size; i++) cout << get(i) << ' ';

    cout << "\n\nIndependent link:\n";
    int a;
    int &b = a;
    a = 5;
    cout << "  a = " << a;
    b = 10;
    cout << "\n  a = " << a << endl;


    return 0;
}

int &put(int i) {
    if(i>=0 && i < size) return array[i];
    else return error;
}

int get(int i) {
    if(i>=0 && i < size) return array[i];
    else return error;
}

double &change_it(int i) {
    return vals[i-1];
}

void swap_ref(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}
