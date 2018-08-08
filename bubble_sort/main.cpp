#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int array_count = 20;
    float array_to_sort[array_count];
    int a, b, temp;

    cout << "array: ";
    for (int current_index = 0; current_index < array_count; current_index++) {
        array_to_sort[current_index] = rand() % 20 + 0;
        cout << array_to_sort[current_index] << " ";
    }
    cout << endl;

    for (a = 1; a < array_count; a++) {
        for(b = array_count - 1; b >= a; b--) {
            if (array_to_sort[b-1] > array_to_sort[b]) {
                temp = array_to_sort[b-1];
                array_to_sort[b-1] = array_to_sort[b];
                array_to_sort[b] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (temp = 0; temp < array_count; temp++)
        cout << array_to_sort[temp] << " ";
    cout << endl;

    return 0;
}
