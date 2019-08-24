// Наибольший общий делитель

#include <iostream>

using namespace std;

int nod(int, int);

int main(int argc, char* argv[]) {
    int (*ptr2nod)(int, int);
    ptr2nod = nod;
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "NOD = " << ptr2nod(a, b) << endl;

    return 0;
}

int nod(int number1, int number2) {
    if (number2 == 0) return number1;
    return nod(number2, number1 % number2);
}
