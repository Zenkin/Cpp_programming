#include"assigning_values_using_pointers.h"
#include"print_labels.h"

void assigning_values_using_pointers() {
   print_label();

   int some_kind_of_variable;
   some_kind_of_variable = 100;
   std::cout << "It is value of some kind of int variable: " << some_kind_of_variable << std::endl;

   int *pointer;
   pointer = &some_kind_of_variable;
   std::cout << "It is adress of some kind of int variable: " << pointer << std::endl
   << std::endl;
}
