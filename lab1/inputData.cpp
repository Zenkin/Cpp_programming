#include "inputData.h"

struct Values inputData() {

    Values value;

    std::cout << "Enter A value: ";
    std::cin >> value.ofNumberA;
    std::cout << "Enter A error: ";
    std::cin >> value.ofErrorA;

    std::cout << "Enter B value: ";
    std::cin >> value.ofNumberB;
    std::cout << "Enter B error: ";
    std::cin >> value.ofErrorB;

    std::cout << "Enter C value: ";
    std::cin >> value.ofNumberC;
    std::cout << "Enter C error: ";
    std::cin >> value.ofErrorC;

    std::cout << "Enter D value: ";
    std::cin >> value.ofNumberD;
    std::cout << "Enter D error: ";
    std::cin >> value.ofErrorD;

    std::cout << "Enter E value: ";
    std::cin >> value.ofNumberE;
    std::cout << "Enter E error: ";
    std::cin >> value.ofErrorE;
    std::cout << std::endl;

    return value;
}
