#include <iostream>
#include <string.h>

using namespace std;

char *add_char(char *p_char, int *size, char ch);
char **add_str(char **p_char2, int *size, char *str);
char **delete_str(char **pp_char, int *size, int del_2pose);

int main() {

    char *p_char = 0;
    int size = 0;
    p_char = add_char(p_char, &size, 'I');
    p_char = add_char(p_char, &size, ' ');
    p_char = add_char(p_char, &size, 'A');
    p_char = add_char(p_char, &size, 'M');
    p_char = add_char(p_char, &size, ' ');
    p_char = add_char(p_char, &size, 'L');
    p_char = add_char(p_char, &size, 'O');
    p_char = add_char(p_char, &size, 'V');
    p_char = add_char(p_char, &size, 'E');
    p_char = add_char(p_char, &size, ' ');
    p_char = add_char(p_char, &size, 'R');
    p_char = add_char(p_char, &size, 'O');
    p_char = add_char(p_char, &size, 'B');
    p_char = add_char(p_char, &size, 'O');
    p_char = add_char(p_char, &size, 'T');
    p_char = add_char(p_char, &size, 'S');
    p_char = add_char(p_char, &size, '!');
    for(int i = 0; i < size; i++) {
        cout << p_char[i];
    }
    cout << endl;
    delete[] p_char;

    char **pp_char = 0;
    size = 0;
    pp_char = add_str(pp_char, &size, "111");
    pp_char = add_str(pp_char, &size, "222");
    pp_char = add_str(pp_char, &size, "333");
    for(int i = 0; i < size; i++) {
        cout << pp_char[i] << endl;
    }
    cout << endl;
    pp_char = delete_str(pp_char, &size, 1);
    for(int i = 0; i < size; i++) {
        cout << pp_char[i] << endl;
    }

    return 0;
}

char **delete_str(char **pp_char, int *size, int del_pose) {
        char **pp_char_copy = new char *[*size];
        for(int i = 0; i < (*size); i++) {
            pp_char_copy[i] = pp_char[i];
        }
        for(int i = del_pose; i < (*size) - 1; i++) {
            pp_char_copy[i] = pp_char_copy[i+1];
        }
        for(int i = 0; i < (*size); i++) {
            delete[] pp_char[i];
        }
        delete[] pp_char;
        pp_char = new char *[(*size) - 1];
        for(int i = 0; i < (*size) - 1; i++) {
            pp_char[i] = pp_char_copy[i];
        }
        for(int i = 0; i < (*size); i++) {
            delete[] pp_char_copy[i];
        }
        delete[] pp_char_copy;
        (*size)--;

        return pp_char;
}

char **add_str(char **pp_char, int *size, char *str) {
    if(*size == 0) {
        pp_char = new char *[*size+1];
        pp_char[0] = str;
    }
    else {
        char **pp_char_copy = new char *[*size+1];
        for(int i = 0; i < *size; i++) {
            pp_char_copy[i] = pp_char[i];
        }
        for(int i = 0; i < (*size); i++) {
            delete[] pp_char[i];
        }
        delete[] pp_char;
        pp_char = new char *[*size+1];
        for(int i = 0; i < *size; i++) {
            pp_char[i] = pp_char_copy[i];
        }
        pp_char[*size] = str;
        for(int i = 0; i < (*size); i++) {
            delete[] pp_char_copy[i];
        }
        delete[] pp_char_copy;
    }
    (*size)++;
    return pp_char;
}

char *add_char(char *p_char, int *size, char ch) {
    if(*size == 0) {
        p_char = new char[1];
        p_char[0] = ch;
    }
    else {
        char *p_char_copy = new char[*size+1];
        for(int i = 0; i < *size; i++) {
            p_char_copy[i] = p_char[i];
        }
        delete[] p_char;
        p_char = new char[*size+1];
        for(int i = 0; i < *size; i++) {
            p_char[i] = p_char_copy[i];
        }
        p_char[*size] = ch;
        delete[] p_char_copy;
    }
    (*size)++;
    return p_char;
}
