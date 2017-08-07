#include "array.h"

array::array(int i) {
    size = memory = i;
    arr = new int[size];
}

array::~array() {
    delete[] arr;
    std::cout << "The Array destroyed!";
}

void array::add(int add_element) {
    size += 1;
    if(size == memory) {
        int array[size*K];
        memory = memory * K;
        for(int i = 0; i < size; i++) {
            array[i] = *(arr+i);
        }
        array[size-1] = add_element;
        delete[] arr;
        arr = new int[size];
        for(int i = 0; i < size; i++)
            *(arr+i) = array[i];
    } else {
        *(arr+size-1) = add_element;
        memory += 1;
    }
}

void array::remove(int i) {
    if(i > size) {
        while(i > size) {
            std::cout << "Please repeat! ERROR[" << i << " > " <<  size << "]!" << std::endl;
            std::cout << "Enter element wich you want to delete: ";
            std::cin >> i;
        }
    }
    size -= 1;
    for(int k = i; k < size; k++) {
        *(arr+k) = *(arr+k+1);
    }
}

void array::print() {
    for(int i = 0; i < size; i++)
        std::cout << "Adress: "<< arr+i << " | [" << i <<"]" << " | Value: " << *(arr+i)  << std::endl;
    std::cout << "" <<  std::endl;
}
