#include <iostream>

using namespace std;

int main() {
    enum fruits {apple, banana, mango};
    fruits fruit;
    fruit = banana;
    cout << fruit << '\n';

    return 0;
}
