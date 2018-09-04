#include <iostream>

using namespace std;

int myabs(int i);
double myabs(double i);
long myabs(long i);

int main() { 
    cout << myabs(-5) << endl;
    cout << myabs(-1.1) << endl;
    cout << myabs(-9L) << endl;

    return 0;
}

int myabs(int i) {
   if(i < 0) return -i;
   else return i;
}

double myabs(double i) {
   if(i < 0) return -i;
   else return i;
}

long myabs(long i) {
   if(i < 0) return -i;
   else return i;
}
