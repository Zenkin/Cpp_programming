#include <iostream>

using namespace std;

void toUp(char &ch);
void toDown(char &ch);
void disp_binary(unsigned u);
int div_zero();

int main() {
    int i = 1, t;
    for(t = 0; t < 8; t++) {
        disp_binary(i);
        i = i << 1;
    }
    for(t = 0; t < 8; t++) {
        i = i >> 1;
        disp_binary(i);
    }

    float j, result;
    cin >> i >> j;
    result = j ? i/j : div_zero();
    cout << i << '/' << j << " = " << result << '\n';

    return 0;
}

int div_zero() {
    cout << "ERROR: div by zero\n";
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
