#include <iostream>
/*
    For using: strcpy(), strcat()
               strlen(), strcmp()
*/
#include <cstring>
#include <cstdio> // for using gets()

using namespace std;

bool password();
void enter_password();
void length_string_information();
void glue_strings();

int main()
{
    cout << "MENU \n\n";
    cout << "1. Enter password \n";
    cout << "2. String information \n";
    cout << "3. Glue string \n\n";
    cout << "Choose (1-3): ";
    int choice;
    cin >> choice;
    cout << "\n";

    switch (choice) {
        case 1:
            enter_password();
            break;
        case 2:
            length_string_information();
            break;
        case 3:
            glue_strings();
            break;
        default:
            cout << "You need to enter number 1-3 \n";
    }

    return 0;
}

void glue_strings() {
    int first_string_length = 80;
    int second_string_length = 80;
    char first_string[first_string_length];
    char second_string[second_string_length];
    gets(first_string);
    cout << "Enter first string: "; gets(first_string);
    cout << "Enter second string: "; gets(second_string);
    cout << "\n";
    strcat(first_string, second_string);
    cout << "New string: " << first_string << "\n";
}

void enter_password() {
    if (password()) cout << "Hello, Artemii \n";
    else cout << "Access denied \n";
}

void length_string_information() {
    int string_length = 80;
    char string[string_length];
    cout << "Enter string: "; cin >> string;
    cout << "String's length: " << strlen(string) << "\n";
}

bool password() {
    int string_length = 80;
    char string[string_length];
    char password[9] = "password";
    cout << "Enter password: ";
    cin >> string;
    if (strcmp(string, password)) {
        cout << "Wrong password \n";
        return false;
    }

    return true;
}
