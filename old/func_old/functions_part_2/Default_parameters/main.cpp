#include <iostream>
#include <cstring>

using namespace std;

void clrscr(int size = 30);
void mystrcat(char *str1, char *str2, int len = -1);
int mylen(char *str);

int main()
{
    cout << "Test mystrcat: \n ";

    char str1[80] = "Hello";
    char str2[80] = " World";

    cout << str1 << "\n ";
    mystrcat(str1, str2);
    cout << str1 << "\n";
    cout << ">> Refresh str1\n ";

    strcpy(str1, "Hello");

    cout << str1 << "\n ";
    mystrcat(str1, str2, 5);
    cout << str1 << "\n\n";

    return 0;
}

void mystrcat(char *str1, char *str2, int len) {
    while (*str1) str1++;
    if(len == -1) len = mylen(str2);
    while(*str2 && len) {
        *str1 = *str2;
        str1++; str2++; len--;
    }
    *str1 = '\0';
}

int mylen(char *str) {
    int size = 0;
    while(*str) {
        size++;
        str++;
    }
    return size;
}

void clrscr(int size) {
    for(; size; size--) cout << '\n';
}
