#include <iostream>
#include <string.h>

using namespace std;

char **add(char **pp, int size, char *str);

int main() {
    int size = 0;
    char **pp = 0;

    pp = add(pp, size, "111111111111111");
    size++;
    pp = add(pp, size, "222222222222222");
    size++;
    pp = add(pp, size, "333333333333333");
    size++;
    pp = add(pp, size, "444444444444444");
    size++;
    pp = add(pp, size, "555555555555555");
    size++;

    for (int i = 0; i < size; i++) cout << pp[i] << endl;
    for (int i = 0; i < size; i++) delete [] pp[i];
    delete [] pp;

    return 0;
}

char **add(char **pp, int size, char *str) {
    if (size == 0)
        pp = new char *[size+1];
    else {
        char **copy = new char *[size+1];
        for (int i = 0; i < size; i++)
            copy[i] = pp[i];
        delete [] pp;
        pp = copy;
    }

    pp[size] = new char [strlen(str) + 1];
    strcpy(pp[size], str);

    return pp;
}

