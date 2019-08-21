#include <iostream>
#include <cstdlib>
#include <ctime>

unsigned int start_time = clock();
using namespace std;

int main(int argc, char* argv[])
{

    cout << "start time = " << start_time << " ms";
    const int array_size = 200000;
    int array1[array_size];
    for (int counter = 0; counter < array_size; counter++) array1[counter] = rand() % 50 - rand() % 50;
    int min_value = array1[0];
    for (int counter = 1; counter < array_size; counter++)
        if (min_value > array1[counter]) min_value = array1[counter];
    cout << "\nmin value = " << min_value << endl;
    unsigned int end_time = clock();
    cout << "runtime = " << clock() << " ms\n";
    cout << "delta time = " << end_time - start_time << " ms\n";
    system("pause");
    return 0;
}
