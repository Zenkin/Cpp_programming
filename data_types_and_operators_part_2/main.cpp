#include <iostream>

using namespace std;

double avg(double i);
int signed_pwr(register int m, register int e);

int main() {
    extern int it, is, magic;
    cout << it << ' ' << is << ' ' <<  magic << '\n';

    double num;
    do {
        cout << "Enter number (-1 out): ";
        cin >> num;
        if (num != -1) cout << "avg = " << avg(num) << '\n';
    } while (num != -1);

    cout << signed_pwr(-4, 2) << '\n';

    return 0;
}

int signed_pwr(int m, int e) {
    register int temp;
    int sign;
    if(m < 0) sign = -1;
    else sign = 1;
    temp = 1;
    for(; e; e--) temp = temp * m;
    return temp * sign;
}

double avg(double i) {
    static double sum = 0, count = 0;
    sum += i;
    count++;
    return sum/count;
}

int it = 10, is = 20, magic = 30;
