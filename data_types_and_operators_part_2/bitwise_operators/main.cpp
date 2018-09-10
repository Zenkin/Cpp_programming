#include <iostream>

using namespace std;

void toUp(char &ch);
void toDown(char &ch);
void disp_binary(unsigned u);

int main() {
    unsigned u;
    cout << "Enter 0-255: "; cin >> u;
    disp_binary(u);

    return 0;
}

void disp_binary(unsigned u) {
    register int t;
    for(t = 128; t > 0; t = t/2) {
        if(u & t) cout << '1';
        else cout << '0';
    }
    cout << '\n';
}

void toUp(char &ch) {
    ch = ch & 95;
}

void toDown(char &ch) {
    ch = ch | 32;
}
