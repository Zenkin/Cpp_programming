#include"assigning_values_using_pointers.h"

void assigning_values_using_pointers() {

   int *pointer;
   int some_kind_of_variable;

   some_kind_of_variable = 100;
   std::cout << "It is value of some kind of variable: " << some_kind_of_variable << std::endl;

   pointer = &some_kind_of_variable;
   std::cout << "It is adress of some kinf of variable: " << pointer << std::endl
   << std::endl;

}
