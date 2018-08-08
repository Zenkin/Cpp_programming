#include <iostream>
#include <cstdio>

using namespace std;

const int number_of_employees = 20;
const int srting_size = 40;
const int enter_information_key = 1;
const int report_key = 2;
const int exit_key = 3;

char name[number_of_employees][srting_size];
char phone[number_of_employees][srting_size];
float hours[number_of_employees];
float wage[number_of_employees];
int index = 0;

void history_mod();
int menu();
void enter_information();
void report();

int main() {
    int choice;
    do {
        choice = menu();
        switch (choice) {
        case enter_information_key:
            enter_information();
            break;
        case report_key:
            report();
            break;
        case exit_key:
            break;
        default:
            cout << " Error: please, enter value from 1 to 3\n";
            break;
        }
    } while(choice != 3);


    return 0;
}

void report() {
    cout << "\n";
    if (index == 0) {
        cout << "No posts yet\n\n";
    }
    else {
        for (int i = 0; i < index; i++) {
            cout << "   Name: " << name[i] << "\n";
            cout << "   Phone: " << phone[i] << "\n";
            cout << "   Wages per week: " << hours[i] * wage[i] << "$\n\n";
        }
    }
}

void enter_information() {
    cout << "\n";
    cout << "Name: "; cin >> name[index];
    cout << "Phone: "; cin >> phone[index];
    cout << "Hours: "; cin >> hours[index];
    cout << "Wage ($): "; cin >> wage[index];
    index++;
}

int menu() {
    cout << "1. Enter infomation\n";
    cout << "2. Report\n";
    cout << "3. Exit\n";
    cout << " Enter (1-3): "; int choice; cin >> choice;

    return choice;
}

void history_mod() {
    int history_count, max_history_count = 20, max_length = 40;
    cout << "Parameters: " << "max history count = " << max_history_count << " max length = " << max_length << "\n";
    char history[max_history_count][max_length];
    for (history_count = 0; history_count < max_history_count; history_count++) {
        cout << history_count + 1 << ": ";
        gets(history[history_count]);
        if (!history[history_count][0]) {
            cout << "\n";
            break;
        }
    }

    cout << "History\n\n";
    for (int i = 0; i < history_count; i++) {
        cout << history[i] << "\n";
    }
}
