#include <iostream>

using namespace std;

int *add(int *arr, int size, int number);
void display(int *arr, int size);

int main()
{
    int size = 1;
    int *arr = new int[size];
    int number = 0;
    cout << "Do you want to debug (1 - yes; 0 - no): ";
    int debug = 0;
    cin >> debug;
    cout << "How many elements do you want to add: ";
    int count = 0;
    cin >> count;
    for(int i = 0; i < count; i++) {
        cout << "Enter " << i+1 << " number: ";
        cin >> number;
        arr = add(arr, size, number); size++;
        if (debug) display(arr, size);
    }

    return 0;
}

int *add(int *arr, int size, int number) {

    if (size == 1) {
        arr = new int[size];
        arr[size - 1] = number;
    }
    else {
        int *arr_copy = 0;
        arr_copy = new int[size];
        for(int i = 0; i < size; i++) arr_copy[i] = arr[i];
        delete[] arr;
        arr = new int[size];
        for(int i = 0; i < size; i++) arr[i] = arr_copy[i];
        arr[size - 1] = number;
    }
    return arr;
}

void display(int *arr, int size) {
    for(int i = 0; i < size - 1; i++) cout  << "arr[" << i << "] "
                                            << "[" << &arr[i] << "] = "
                                            << arr[i] << endl;
    cout << endl;
}

