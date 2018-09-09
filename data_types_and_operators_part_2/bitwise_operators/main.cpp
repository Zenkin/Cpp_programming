#include <iostream>

using namespace std;

void toUp(char &ch);

int main() {
    char ch;
    cin >> ch;
    cout << "ch = " << ch;
    toUp(ch);
    cout << " | ch & 95 = " << ch << '\n';

    return 0;
}

void toUp(char &ch) {
    ch = ch & 95;
}
