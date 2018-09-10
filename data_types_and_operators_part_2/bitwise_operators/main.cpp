#include <iostream>

using namespace std;

void toUp(char &ch);
void toDown(char &ch);

int main() {
    char ch;
    cin >> ch;
    cout << "ch = " << ch;
    toUp(ch);
    cout << " | ch & 95 = " << ch << '\n';
    toDown(ch);
    cout << "ch | 95 = " << ch << '\n';

    return 0;
}

void toUp(char &ch) {
    ch = ch & 95;
}

void toDown(char &ch) {
    ch = ch | 32;
}
