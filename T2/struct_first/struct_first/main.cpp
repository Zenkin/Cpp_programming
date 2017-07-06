#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

const int SIZE = 100;

struct inv_type {
    char item[40];
    double cost;
    double retail;
    int on_hand;
    int lead_time;
} invtry[SIZE];

void enter(), init_list(), display();
void update(), input(int i);

int menu();

int main() {
    char choice;
    init_list();
    for(;;) {
        choice = menu();
        switch(choice) {
        case 'e' : enter();
            break;
        case 'd' : display();
            break;
         case 'u' : update();
            break;
         case 'q' : return 0;
        }
    }
}

void init_list() {
    int t;
    for(t=0; t<SIZE; t++) *invtry[t].item = '\0';
}

int menu() {
    char ch;
    cout << '\n';
    do {
        cout << "(E)nter\n";
        cout << "(D)isplay\n";
        cout << "(U)pdate\n";
        cout << "(Q)uite\n";
        cout << "Choise command: ";
        cin >> ch;
    } while(!strchr("eduq", tolower(ch)));
    return tolower(ch);
}

void enter() {
    int i;

    for(i=0; i<SIZE; i++)
        if(!*invtry[i].item) break;

    if(i==SIZE) {
        cout << "The list is full. \n";
        return;
    }
    input(i);
}

void input(int i) {
    cout << "Item: ";
    cin >> invtry[i].item;

    cout << "Cost: ";
    cin >> invtry[i].cost;

    cout << "Retail: ";
    cin >> invtry[i].retail;

    cout << "On hand: ";
    cin >> invtry[i].on_hand;

    cout << "Time to replenishment (days): ";
    cin >> invtry[i].lead_time;
}

void update() {
    int i;
    char name[80];

    cout << "Name of the item: ";
    cin >> name;

    for (i=0; i<SIZE; i++)
        if(!strcmp(name, invtry[i].item)) break;

    if(i==SIZE) {
        cout << "Item not found. \n";
        return;
    }

    cout << "Enter new infomation. \n";
    input(i);
}

void display() {
    int t;

    for(t=0; t<SIZE; t++) {
        if(*invtry[t].item) {
            cout << invtry[t].item << '\n';
            cout << "Cost: $" << invtry[t].cost;
            cout << "\nReteil: $";
            cout << invtry[t].retail << '\n';
            cout << "On hand: " << invtry[t].on_hand;
            cout << "\nTime to replenishment: ";
            cout << invtry[t].lead_time << "day(s)\n\n";
        }
    }
}
