#include "array.h"

array::array(int i) {
    size_of_array = i;
    arr = new int[size_of_array];
    for(int i = 0; i < size_of_array; i++)
        std::cout << "Adress: "<< arr+i << " Value: " << *(arr+i) <<  std::endl;
    std::cout << "" <<  std::endl;
}

array::~array() {
    std::cout << "The Array destroyed!";
}

void array::add(int add_element) {
    for(int i = 0; i < size_of_array; i++)
        std::cout << "Adress: "<< arr+i << " Value: " << *(arr+i) <<  std::endl;
    std::cout << "" <<  std::endl;
    size_of_array += 1;
    int array[size_of_array];
    for(int i = 0; i < size_of_array; i++) {
        array[i] = *(arr+i);
    }
    array[size_of_array-1] = add_element;
    delete[] arr;
    arr = new int[size_of_array];
    for(int i = 0; i < size_of_array; i++) {
        *(arr+i) = array[i];
    }
}

void array::remove(int i) {

}

void array::print() {
    for(int i = 0; i < size_of_array; i++)
        std::cout << "Adress: "<< arr+i << " Value: " << *(arr+i) <<  std::endl;
    std::cout << "" <<  std::endl;
}
