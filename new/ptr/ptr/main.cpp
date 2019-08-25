#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    cout << "Pointers!\n" << endl;

    int *first_ptr;
    int *second_ptr;
    int first_value = rand();
    int second_value = rand();

    first_ptr = &first_value;
    second_ptr = &second_value;

    cout << "first_value = " << first_value << endl;
    cout << "second_value = " << second_value << endl;
    cout << "first_ptr = " << first_ptr << endl;
    cout << "second_ptr = " << second_ptr << "\n\n";

    if (first_value > second_value) cout << "first_value > second_value\n";
    else cout << "second_value > first_value\n";

    if (*first_ptr > *second_ptr) cout << "*first_ptr > *second_ptr\n";
    else cout << "*second_ptr > *first_ptr\n";

    return 0;
}
