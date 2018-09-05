#include <iostream>

using namespace std;

double avg(double i);

int main() {
    extern int it, is, magic;
    cout << it << ' ' << is << ' ' <<  magic << '\n';

    double num;
    do {
        cout << "Enter number (-1 out): ";
        cin >> num;
        if (num != -1) cout << "avg = " << avg(num) << '\n';
    } while (num != -1);

    return 0;
}

double avg(double i) {
    static double sum = 0, count = 0;
    sum += i;
    count++;
    return sum/count;
}

int it = 10, is = 20, magic = 30;
