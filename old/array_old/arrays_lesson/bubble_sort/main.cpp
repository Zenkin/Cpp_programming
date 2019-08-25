#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int array_count = 20;
    float array_to_sort[array_count];
    int first_index, second_index, temp;

    cout << "array: ";
    for (int current_index = 0; current_index < array_count; current_index++) {
        array_to_sort[current_index] = rand() % 20 + 0;
        cout << array_to_sort[current_index] << " ";
    }
    cout << endl;

    for (first_index = 1; first_index < array_count; first_index++) {
        for(second_index = array_count - 1; second_index >= first_index; second_index--) {
            if (array_to_sort[second_index-1] > array_to_sort[second_index]) {
                temp = array_to_sort[second_index-1];
                array_to_sort[second_index-1] = array_to_sort[second_index];
                array_to_sort[second_index] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (temp = 0; temp < array_count; temp++)
        cout << array_to_sort[temp] << " ";
    cout << endl;

    return 0;
}
