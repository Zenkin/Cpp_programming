#include "array.h"

Array::Array(int initial_capacity) : capacity(initial_capacity), array_size(0) {
    arr = new int[capacity];
}

Array::~Array() {
    delete[] arr;
}

void Array::add(int element) {
    if(array_size == capacity) {
            growUp();
        }
    arr[array_size++] = element;
}

//если индекс не соответствует размеру, то можно бросать исключение. про исключения могу потом рассказать.
int Array::remove(int i) {
    int remote_element = arr[i];
    if(i >= array_size) {
        while(i >= array_size) {
            RepeatInput(i);
        }
    }
    array_size -= 1;
    for(int k = i; k < array_size; k++) {
        //*(arr+k) = *(arr+k+1);
        arr[k] = arr[k+1];
    }
    if(capacity >= 4*array_size) {
        growDown();
    }
    return remote_element;
}

int Array::size() {
    return array_size;
}

// Пока пусть будет так, а потом научишься перегружать потоки вывода так, чтобы cout << array мог нормально и красиво вывести массив.
void Array::print() {
    for(int i = 0; i < array_size; i++)
        std::cout << " [" << i <<"] "<< "Adress: "<< arr+i << " | Value: " << *(arr+i)  << std::endl;
    std::cout << "" <<  std::endl;
}

bool Array::isEmpty() {
    return array_size == 0 ? true : false;
}

void Array::growUp() {
    capacity *= inc_cap_coef;
    int *newArray = new int[capacity];
    for (int i = 0; i < array_size; i++) {
        newArray[i] = arr[i];
    }
    delete[] arr;
    arr = newArray;
}

void Array::growDown() {
    capacity = round(capacity/2);
    int *newArray = new int[capacity];
    for (int i = 0; i < array_size; i++) {
        newArray[i] = arr[i];
    }
    delete[] arr;
    arr = newArray;
}

void Array::RepeatInput(int i) {
    std::cout << "Please repeat! ERROR[" << i << " > " <<  array_size << "]!" << std::endl;
    std::cout << "Enter element wich you want to delete: ";
    std::cin >> i;
}
