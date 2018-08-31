#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

void simple_example();
void simple_example_2();
void pointers_array();
void token_with_array(const char str[]);
void token_with_pointers(char *p_str);
void play_again();
void print(char *string);

int main() {

    return 0;
}

void print(char *string) {
    int i;
    for(i = 0; *(string+i); i++) {
        cout << *(string+i);
    }
    if (*(string+i) == '\0') cout << "\n";
}

void play_again() {
    char *string;
    string = "Hello";
    cout << "adress: " << &string << " string: " << string << endl;

    int array[10];
    int *p_array;
    p_array = array;
    for(int i = 0; i < 10; i++) {
        cout << "№ " << i << " adress: " << &array[i] << " value: " << array[i] << endl;
    }

    cout << endl;

    for(int i = 0; i < 10; i++) {
        cout << "№ " << i << " adress: " << &p_array[i] << " value: " << p_array[i] << endl;
    }

    cout << endl;

    cout << " adress: " << &p_array << " value: " << p_array << endl;
}

void token_with_pointers(char *p_str) {
    char token[80];
    char *p_token;

    while(*p_str) {
        p_token = token;
        while(*p_str && (*p_str) != ' ') {
            *p_token = *p_str;
            p_token++, p_str++;
        }
        *p_token = '\0';
        cout << token << '\n';
        if (*p_str) p_str++;
    }
}

void token_with_array(const char str[80]) {
    char token[80];
    int i = 0, j = 0;
    for (i = 0; ; i++) {
        for (j = 0; str[i]!=' ' && str[i]; j++, i++)
            token[j] = str[i];
        token[j] = '\0';
        cout << token << "\n";
        if (!str[i]) break;
    }
}

void pointers_array() {
    int array_count = 10;
    int array[array_count];
    int *pointer_to_fist_value_in_array;
    for (int index = 0; index < array_count; index++) {
        array[index] = index;
    }
    pointer_to_fist_value_in_array = array;
    for (int index = 0; index < array_count; index++) {
        cout << *pointer_to_fist_value_in_array << " " << pointer_to_fist_value_in_array << endl;
        pointer_to_fist_value_in_array++;
    }
}

void simple_example() {
    int num;
    int *adress_num;

    adress_num = &num;
    cout << "value: " << *adress_num << " adress: " << adress_num << endl;
    (*adress_num)++;
    cout << "value: " << num << " adress: " << &num << endl;
    (*adress_num)--;
    cout << "value: " << num << " adress: " << &num << endl;
}

void simple_example_2() {
    int *int_pointer;
    int value = 200;

    int_pointer = &value;
    cout << "value adress: " << int_pointer << endl;
    int_pointer++;
    cout << "next adress: " << int_pointer << endl;
    int_pointer--;
    int_pointer--;
    cout << "previous adress: " << int_pointer << endl;
}
