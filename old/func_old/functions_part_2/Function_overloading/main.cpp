#include <iostream>

using namespace std;

int myabs(int i);
double myabs(double i);
long myabs(long i);

int main() { 
    cout << "Test myabs: \n ";
    cout << myabs(-5) << "\n ";
    cout << myabs(-1.1) << "\n ";
    cout << myabs(-9L) << "\n\n";

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
