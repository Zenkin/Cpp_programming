#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int *arr = new int [1];
	int *arr_copy;

	int value;
	int size = 0;
	while (true) {
		cout << "Enter integer value: "; 
		cin >> value;
		if (value < 0) break; 
		if (size == 0) {
			arr[0] = value;
			size++;
		}
		else {
			arr_copy = new int [size];
			for(int i = 0; i < size; i++) {
				arr_copy[i] = arr[i];
			}
			delete [] arr;
			arr = new int [size+1];
			for(int i = 0; i < size; i++) {
				arr[i] = arr_copy[i];
			}
			delete [] arr_copy;
			arr[size] = value;
			size++;
		}
		for(int i = 0; i < size; i++)
			cout << setw(3) << arr[i];
		cout << endl;
	}

	return 0;
}