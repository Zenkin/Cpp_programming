#include"start_work_with_array.h"

void start_work_with_array() {
    std::cout << "Enter array size: ";
    int array_size;
    std::cin >> array_size;
    array array(array_size);
    std::cout << "" <<  std::endl;
    array.print();
    std::cout << "Enter element wich you want to add: ";
    int add_element;
    std::cin >> add_element;
    array.add(add_element);
    array.print();
    std::cout << "Enter element wich you want to delete: ";
    int delete_element;
    std::cin >> delete_element;
    array.remove(delete_element);
    array.print();
}
