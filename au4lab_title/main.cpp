#include <iostream>
#include <stdbool.h>

using namespace std;

bool print_logo();

int main(int argc, char* argv[]) {

    if (print_logo())
        cout << "Ready for work! \n";
    return 0;

}

bool print_logo() {

    int rows = 6;
    int columns = 29;
    int dec_number = 176;

    int mas[rows][columns] =    {
                                    {0,0,0,0, 0, 0,0,0,0, 0, 0,0,0,0, 0,0,0, 0,0,0, 0, 0,0,0,0, 0, 0,0,0},
                                    {0,1,1,0, 0, 1,0,0,1, 0, 1,0,0,1, 0,0,0, 1,0,0, 0, 0,1,1,0, 0, 1,0,0},
                                    {1,0,0,1, 0, 1,0,0,1, 0, 1,0,0,1, 0,0,0, 1,0,0, 0, 1,0,0,1, 0, 1,1,1},
                                    {1,1,1,1, 0, 1,0,0,1, 0, 1,1,1,1, 0,0,0, 1,0,0, 0, 1,1,1,1, 0, 1,0,1},
                                    {1,0,0,1, 0, 1,1,1,1, 0, 0,0,0,1, 0,1,0, 1,1,1, 0, 1,0,0,1, 0, 1,1,1},
                                    {0,0,0,0, 0, 0,0,0,0, 0, 0,0,0,0, 0,0,0, 0,0,0, 0, 0,0,0,0, 0, 0,0,0}
                                };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            if (mas[i][j] == 1) {
                cout << static_cast<char>(dec_number);
                cout << static_cast<char>(dec_number);
            } else
                 cout << "  ";
        cout << endl;
    }
    return true;
}
