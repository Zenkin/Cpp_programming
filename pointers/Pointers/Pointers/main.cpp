#include"variable.h"
#include"assigning_values_using_pointers.h"

int main() {
    int value_of_variable_iv = 50;
    float value_of_variable_fv = 256.5;
    double value_of_variable_dv = 34.2;

   variable.int_size = sizeof value_of_variable_iv;
   variable.float_size = sizeof value_of_variable_fv;
   variable.double_size = sizeof value_of_variable_dv;

   variable.int_adress = &value_of_variable_iv;
   variable.float_adress = &value_of_variable_fv;
   variable.douvle_adress = &value_of_variable_dv;

   value_of_variable_iv = *variable.int_adress;
   value_of_variable_fv = *variable.float_adress;
   value_of_variable_dv = *variable.douvle_adress;

   std::cout << "int size: " << variable.int_size << " byte(s)" << std::endl;
   std::cout << "float size: " << variable.float_size << " byte(s)" << std::endl;
   std::cout << "double size: " << variable.double_size << " byte(s)" << std::endl
   << std::endl;

   std::cout << "int value adress: " << variable.int_adress << std::endl;
   std::cout << "float value adress: " << variable.float_adress << std::endl;
   std::cout << "double value adress: " << variable.douvle_adress << std::endl
   << std::endl;

   std::cout << "int value using pointer: " << value_of_variable_iv << std::endl;
   std::cout << "float value using pointer: " << value_of_variable_fv << std::endl;
   std::cout << "double value using pointer: " << value_of_variable_dv << std::endl
   << std::endl;

   assigning_values_using_pointers();
}
