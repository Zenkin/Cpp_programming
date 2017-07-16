#include"assigning_values_using_pointers.h"
#include"print_label.h"

void assigning_values_using_pointers() {
   print_label();

   int some_kind_of_variable;
   some_kind_of_variable = 100;
   std::cout << "It is value of some kind of variable: " << some_kind_of_variable << std::endl;

   int *pointer;
   pointer = &some_kind_of_variable;
   std::cout << "It is adress of some kind of variable: " << pointer << std::endl
   << std::endl;

   (*pointer)++;
   std::cout << "We implicitly increase the value of our variable: " << some_kind_of_variable << std::endl;
}
