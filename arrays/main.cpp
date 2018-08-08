#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int array[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }
    cout << "new array: ";
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int array_count = 5;
    int new_array[array_count];
    for (int current_index = 0; current_index < array_count; current_index++) {
        new_array[current_index] = rand();
    }

    float max_value = new_array[0];
    for (int current_index = 0; current_index < array_count; current_index++) {
        if (new_array[current_index] > max_value) max_value = new_array[current_index];
    }
    cout << "random array: ";
    for (int current_index = 0; current_index < array_count; current_index++) {
        cout << new_array[current_index] << " ";
    }
    cout << endl;
    cout << "max value = " << max_value << endl;

    float min_value = new_array[0];
    for (int current_index = 0; current_index < array_count; current_index++) {
        if (new_array[current_index] < min_value) min_value = new_array[current_index];
    }
    cout << "min value = " << min_value << endl;

    return 0;
}
