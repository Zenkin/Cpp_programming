// Сравнение for и рекурсии

#include <iostream>
#include <ctime>

using namespace std;

int nod(int, int);

int main(int argc, char* argv[]) {

    int (*ptr2nod)(int, int);
    ptr2nod = nod;
    int mynod = 0;
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int start_time = clock();
    int min = 0;
    if (a > b) min = b;
    else min = a;
    for (int i = 1; i < min+1; i++)
        if ((a % i + b % i) == 0) mynod = i;
    int end_time = clock();
    cout << "\nNOD = " << mynod << endl;
    cout << "time = " << end_time - start_time << " ms" << endl;

    start_time = clock();
    mynod = ptr2nod(a, b);
    end_time = clock();
    cout << "ptr NOD = " << mynod << endl;
    cout << "ptr time = " << end_time - start_time << " ms" << endl;

    return 0;

}

int nod(int number1, int number2) {
    if (number2 == 0) return number1;
    return nod(number2, number1 % number2);
}
