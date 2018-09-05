#include <iostream>

using namespace std;

int main() {
    extern int it, is, magic;
    cout << it << ' ' << is << ' ' <<  magic << '\n';

    return 0;
}

int it = 10, is = 20, magic = 30;
