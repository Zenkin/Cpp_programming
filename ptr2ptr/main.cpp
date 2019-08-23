#include <iostream>

using namespace std;

int main() {

    int var = 133;
    int *ptr2var = &var;
    int **ptr2ptr2var = &ptr2var;
    int ***ptr2ptr2ptr2var = &ptr2ptr2var;

    cout << "var = " << var << endl;
    cout << "*ptr2var = " << *ptr2var << endl;
    cout << "**ptr2ptr2var = " << **ptr2ptr2var << endl;
    cout << "**ptr2ptr2ptr2var = " << ***ptr2ptr2ptr2var << endl;

    return 0;

}
