#include <iostream>

using namespace std;

int main() {
    enum fruits {apple, banana, mango};
    fruits fruit;
    fruit = banana;
    cout << fruit << '\n';

    typedef float myfloat;
    myfloat value = 7.2;
    cout << value << '\n';

    return 0;
}
