#include <iostream>

using namespace std;

struct Data {
    int age;
    char name[10];
};

int main() {

    Data *data = new Data[1];
    Data *data_copy;
    int answer = 1;
    int size = 0;
    while(true) {
        if (size == 0) {
            cout << "Name: ";
            cin >> data[0].name;
            cout << "Age: ";
            cin >> data[0].age;
            size++;
        }
        else {
            data_copy = new Data[size];
            for(int i = 0; i < size; i++)
                data_copy[i] = data[i];
            delete [] data;
            data = new Data[size+1];
            for(int i = 0; i < size; i++)
                data[i] = data_copy[i];
            delete [] data_copy;
            cout << "Name: ";
            cin >> data[size].name;
            cout << "Age: ";
            cin >> data[size].age;
            size++;
        }
        for(int i = 0; i < size; i++)
            cout << i << " - element of struct: " << data[i].name << " " << data[i].age << endl;
        cout << "press 1 to continue, and 0 to exit: ";
        cin >> answer;
        if (answer == 0) break;
    }
    return 0;
}
