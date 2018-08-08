#include"arithmetic_on_pointers.h"
#include"print_labels.h"

void arithmetic_on_pointers() {
    print_label_2();

    int some_kind_of_variable =100;
    std::cout << "It is value of some kind of int variable: " << some_kind_of_variable << std::endl;

    int *pointer;
    pointer = &some_kind_of_variable;
    (*pointer)++;
    std::cout << "We implicitly increase the value of our int variable: " << some_kind_of_variable << std::endl;

    pointer ++;
    std::cout << "We use pointer++ : " << *pointer << "  | adress: " << pointer << std::endl;
    pointer --;
    std::cout << "We use pointer-- : " << *pointer << "  | adress: " << pointer << std::endl;
    pointer --;
    std::cout << "We use pointer-- : " << *pointer << "  | adress: " << pointer << std::endl;
    pointer = pointer + 1;
    std::cout << "We use pointer + 1 : " << *pointer << "  | adress: " << pointer << std::endl;
    pointer = pointer + 1;
    std::cout << "We use pointer + 1 : " << *pointer << "  | adress: " << pointer << std::endl;
    pointer = pointer - 2;
    std::cout << "We use pointer - 2 : " << *pointer << "  | adress: " << pointer << std::endl
    << std::endl;

    int some_kind_of_variable_2;
    std::cout << "It is value of the second some kind of int variable: " << some_kind_of_variable_2 << std::endl;

    int *pointer_2;
    pointer_2 = &some_kind_of_variable_2;
    std::cout << "It is adress of the second some kind of int variable: " << pointer_2 << std::endl;

    std::cout << "We use pointer - pointer_2: " << pointer - pointer_2 << " number of elements of the base type that share these two pointers" << std::endl;
}
