#include <iostream>

using namespace std;

void create_matrix(int rows_count, int columns_count);
void create_zero_matrix(int rows_count, int columns_count);
void create_unit_4x4_matrix();
bool count_check(int value);
void search_square();

int main() {
    create_zero_matrix(5, 5);
    create_matrix(5, 5);
    create_unit_4x4_matrix();
    search_square();


    return 0;
}

bool count_check(int value) {
    if (value == -1) return false;
    if ((value > 10) || (value <= 0)) {
        cout << "invalid value \n";
        return false;
    }
    return true;
}

void search_square() {
    int matrix_of_squares[10][2] = {
        {1, 1},
        {2, 4},
        {3, 9},
        {4, 16},
        {5, 25},
        {6, 36},
        {7, 49},
        {8, 64},
        {9, 81},
        {10, 100},
    };
    int value = -1;
    while (!count_check(value)) {
        cout << "Enter value (1-10): "; cin >> value;
    }
    for (int i = 0; i < 10; i++) {
        if (matrix_of_squares[i][0] == value) {
            cout << "square = " << matrix_of_squares[i][1] << "\n";
        }
    }
}

void create_unit_4x4_matrix() {
    int unit_matrix[4][4] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << unit_matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void create_matrix(int rows_count, int columns_count) {
    int matrix[columns_count][rows_count];
    for (int i = 0; i < rows_count; i++) {
        for (int j = 0; j < columns_count; j++) {
            matrix[i][j] = (i*4) + j + 1;
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void create_zero_matrix(int rows_count, int columns_count) {
    int matrix[columns_count][rows_count];
    for (int i = 0; i < rows_count; i++) {
        for (int j = 0; j < columns_count; j++) {
            matrix[i][j] = 0;
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
