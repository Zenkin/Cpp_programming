#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {

    cout << "Enter N: ";
    int N;
    cin >> N;
    int size = N - 1;
    int *arr = new int [size];
    for(int i = 0; i < size; i++)
        arr[i] = i+2;
    int start = 0;
    div_t divresult;
    int p = 0;
    while(start < size) {
        p = arr[start];
        if (p != 0) {
            cout << p << " ";
            for(int i = 0; i < size; i++) {
                if (arr[i] != 0) {
                    divresult = div(arr[i], p);
                    if (divresult.rem == 0) arr[i] = 0;
                }
            }
        }
        start++;
    }
    delete [] arr;

    return 0;
}
