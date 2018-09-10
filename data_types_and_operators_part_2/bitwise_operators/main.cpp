#include <iostream>

using namespace std;

void toUp(char &ch);
void toDown(char &ch);
void disp_binary(unsigned u);

int main() {
    int i = 1, j = 128, t;
    for(t = 0; t < 8; t++) {
        disp_binary(i); cout << "  "; disp_binary(j); cout << '\n';
        i = i << 1;
        j = j >> 1;
    }
    cout << '\n';
    j = 1; i = 128;
    for(t = 0; t < 8; t++) {
        disp_binary(i); cout << "  "; disp_binary(j); cout << '\n';
        i = i >> 1;
        j = j << 1;
    }

    return 0;
}

void disp_binary(unsigned u) {
    register int t;
    for(t = 128; t > 0; t = t/2) {
        if(u & t) cout << '1';
        else cout << '0';
    }
    //cout << '\n';
}

void toUp(char &ch) {
    ch = ch & 95;
}

void toDown(char &ch) {
    ch = ch | 32;
}
