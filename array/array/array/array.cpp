#include "array.h"

array::array(int i) {
    size_of_array = i;
    int array[size_of_array];
    arr = array;
    std::cout << "The Array init!\n";
}

array::~array() {
    std::cout << "The Array destroyed!";
}

void array::add(int i) {
    int array[size_of_array+i];
    arr = array;
    size_of_array += i;
}

void array::remove(int i) {

}

void array::print() {
    for(int i = 0; i < size_of_array; i++)
        std::cout << *(arr+i) << " ";
    std::cout << "" <<  std::endl;
}
