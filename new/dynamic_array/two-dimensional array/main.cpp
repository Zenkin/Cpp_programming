#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    cout << "ENTER ROWS: "; int rows; cin >> rows;
    cout << "ENTER COLUMNS: "; int columns; cin >> columns;
    float **array = new float *[rows];
    for(int i = 0; i < rows; i++) {
        array[i] = new float [columns];
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
        array[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
        }
    }
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            cout << setw(4) << setprecision(2) << array[i][j] << "   ";
        }
        cout << endl;
    }
    for(int i = 0; i < rows; i++) {
        delete [] array[i];
    }
    return 0;
}
