#include <iostream>

using namespace std;

void simple_example();
void simple_example_2();
void pointers_array();

int main() {
    int *value_adress;
    int value = 550;
    int read_value;

    value_adress = &value;
    read_value = *value_adress;
    cout << "value: " << read_value << " adress: " << value_adress << endl;
    cout << sizeof(value) << endl;

    simple_example();
    simple_example_2();
    pointers_array();

    return 0;
}

void pointers_array() {
    int array_count = 10;
    int array[array_count];
    int *pointer_to_fist_value_in_array;
    for (int index = 0; index < array_count; index++) {
        array[index] = index;
    }
    pointer_to_fist_value_in_array = array;
    for (int index = 0; index < array_count; index++) {
        cout << *pointer_to_fist_value_in_array << " " << pointer_to_fist_value_in_array << endl;
        pointer_to_fist_value_in_array++;
    }
}

void simple_example() {
    int num;
    int *adress_num;

    adress_num = &num;
    cout << "value: " << *adress_num << " adress: " << adress_num << endl;
    (*adress_num)++;
    cout << "value: " << num << " adress: " << &num << endl;
    (*adress_num)--;
    cout << "value: " << num << " adress: " << &num << endl;
}

void simple_example_2() {
    int *int_pointer;
    int value = 200;

    int_pointer = &value;
    cout << "value adress: " << int_pointer << endl;
    int_pointer++;
    cout << "next adress: " << int_pointer << endl;
    int_pointer--;
    int_pointer--;
    cout << "previous adress: " << int_pointer << endl;
}
