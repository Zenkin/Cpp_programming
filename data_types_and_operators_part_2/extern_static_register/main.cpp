#include <iostream>
#include <ctime>

using namespace std;

double avg(double i);
int signed_pwr(register int m, register int e);

unsigned int i;
unsigned int delay;

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

    register unsigned int j;
    long start, end;
    start = clock();
    for(delay = 0; delay < 50; delay++)
        for(i = 0; i < 64000000; i++);
    end = clock();
    float benefit = end - start;
    cout << "ticks for non register = " << benefit << '\n';

    start = clock();
    for(delay = 0; delay < 50; delay++)
        for(j = 0; j < 64000000; j++);
    end = clock();
    float benefit_reg = end - start;
    cout << "ticks for register = " << benefit_reg << '\n';
    cout << "benefits: " << benefit/benefit_reg << "\n";

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
