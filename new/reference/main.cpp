#include <iostream>

using namespace std;

int sum(int &a, int b);

int main() {

    int value;
    cout << "ENTER INT VALUE: ";
    cin >> value;
    int add_value;
    cout << "ENTER INT ADD VALUE: ";
    cin >> add_value;
    sum(value, add_value);
    cout << "value = " << value << endl;
    return 0;
}

int sum(int &a, int b) {
    a += b;
    return a;
}
