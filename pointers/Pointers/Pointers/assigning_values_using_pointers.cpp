#include"assigning_values_using_pointers.h"
#include"print_label.h"

void assigning_values_using_pointers() {
   print_label();

   int some_kind_of_variable;
   some_kind_of_variable = 100;
   std::cout << "It is value of some kind of int variable: " << some_kind_of_variable << std::endl;

   int *pointer;
   pointer = &some_kind_of_variable;
   std::cout << "It is adress of some kind of int variable: " << pointer << std::endl
   << std::endl;

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
