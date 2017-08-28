#include"start_work_with_array.h"

void start_work_with_array() {
    std::cout << "Enter array capacity: ";
    int capacity;
    std::cin >> capacity;
    Array array(capacity);
    std::cout << array.size() << std::endl;
    std::cout << "Enter element wich you want to add: ";
    int element;
    std::cin >> element;
    array.add(element);
    std::cout << array.size() << std::endl;
    array.print();
    int delete_element;
    std::cout << "Enter element wich you want to delete: ";
    std::cin >> delete_element;
    array.remove(delete_element);
}
