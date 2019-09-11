#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    cout << "ENTER ARRAY SIZE: ";
    int array_size;
    cin >> array_size;
    float array [array_size];
    for(int i = 0; i < array_size; i++) {
        array[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
    }
    cout << "array = ";
    for (int i = 0; i < array_size; i++) {
        cout << setprecision(2) << array[i] << "    ";
    }
    delete [] array;
    return 0;
}
