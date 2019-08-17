#include "testprint.h"
#include "values.h"
#include "iostream"

void testPrint(Values value) {
    std::cout << "A: " << value.ofNumberA << "±" << value.ofErrorA << std::endl;
    std::cout << "B: " << value.ofNumberB << "±" << value.ofErrorB << std::endl;
    std::cout << "C: " << value.ofNumberC << "±" << value.ofErrorC << std::endl;
    std::cout << "D: " << value.ofNumberD << "±" << value.ofErrorD << std::endl;
    std::cout << "E: " << value.ofNumberE << "±" << value.ofErrorE << std::endl;
}
