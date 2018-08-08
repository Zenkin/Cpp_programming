#include"introduction.h"
#include"variable.h"
#include"print_labels.h"

void introduction() {
    print_label_3();
    int value_of_variable_iv = 50;
    variable.int_size = sizeof value_of_variable_iv;
    std::cout << "int size: " << variable.int_size << " byte(s)" << std::endl;

    float value_of_variable_fv = 256.5;
    variable.float_size = sizeof value_of_variable_fv;
    std::cout << "float size: " << variable.float_size << " byte(s)" << std::endl;

    double value_of_variable_dv = 34.2;
    variable.double_size = sizeof value_of_variable_dv;
    std::cout << "double size: " << variable.double_size << " byte(s)" << std::endl
    << std::endl;

    variable.int_adress = &value_of_variable_iv;
    std::cout << "int value adress: " << variable.int_adress << std::endl;

    variable.float_adress = &value_of_variable_fv;
    std::cout << "float value adress: " << variable.float_adress << std::endl;

    variable.douvle_adress = &value_of_variable_dv;
    std::cout << "double value adress: " << variable.douvle_adress << std::endl
    << std::endl;

    value_of_variable_iv = *variable.int_adress;
    std::cout << "int value using pointer: " << value_of_variable_iv << std::endl;

    value_of_variable_fv = *variable.float_adress;
    std::cout << "float value using pointer: " << value_of_variable_fv << std::endl;

    value_of_variable_dv = *variable.douvle_adress;
    std::cout << "double value using pointer: " << value_of_variable_dv << std::endl
    << std::endl;
}
