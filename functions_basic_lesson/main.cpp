#include <iostream>

using namespace std;

void function(int *parameter);
void cube(int *p_array, int length);

int main() {
    int parameter = 100;
    int division_by_10 = 2;
    for(int index = 0; index < division_by_10; index++) function(&parameter);

    int size = 10;
    int array[size];
    for(int i = 0; i < size; i++) array[i] = i+1;
    for(int i = 0; i < size; i++) cout << array[i] << ' ';
    cout << endl;
    cube(array, size);
    for(int i = 0; i < size; i++) cout << array[i] << ' ';
    cout << endl;

    return 0;
}

void function(int *parameter) {
    *parameter /= 10;
}

void cube(int *p_array, int length) {
    while(length) {
        *p_array = *p_array * *p_array * *p_array;
        p_array++;
        length--;
    }
}
