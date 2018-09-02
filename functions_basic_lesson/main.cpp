#include <iostream>
#include <cstring>

using namespace std;

void function(int *parameter);
void cube(int *p_array, int length);
int getStrLength(char *str);
void myStrcat(char *where2Copy, const char *what2Copy);
void myStrcpy(char *where2Copy, const char *what2Copy);
float power(float base, int exp);
char *findSubStr(char *sub, char *str);
int fact(int n);
void reverse(char *string);

int main(int argc, char *argv[]) {
    char str[] = "Hello, man";
    reverse(str);

    return 0;
}

void reverse(char *string) {
    if(*string) reverse(string+1);
    cout << *string;
}

char *findSubStr(char *sub, char *str) {
    char *p_sub, *p;
    char *start;
    for(int i = 0; str[i]; i++) {
        p = &str[i];
        start = p;
        p_sub = sub;
        while(*p_sub && *p_sub == *p) {
            p_sub++;
            p++;
        }
        if(!*p_sub) {
            return start;
        }
    }
}

int fact(int n) {
    if(n == 1) return 1;
    int answer;
    answer = fact(n-1) * n;
    return answer;
}

float power(float base, int exp) {
    if (exp < 0) return -1;
    float i = 1;
    for(; exp; exp--) i = base * i;
    return i;
}

void myStrcpy(char *where2Copy, const char *what2Copy) {
    int what2CopyLength;
    for(what2CopyLength = 0; what2Copy[what2CopyLength]; what2CopyLength++);
    int i;
    for(i = 0; i < what2CopyLength; i++) where2Copy[i] = what2Copy[i];
    where2Copy[i+1] = '\0';
}

void myStrcat(char *where2Copy, const char *what2Copy) {
    int where2CopyLength;
    for(where2CopyLength = 0; where2Copy[where2CopyLength]; where2CopyLength++);
    int what2CopyLength;
    for(what2CopyLength = 0; what2Copy[what2CopyLength]; what2CopyLength++);
    for(int index = where2CopyLength; index < where2CopyLength+what2CopyLength; index++) {
        where2Copy[index] = what2Copy[index-where2CopyLength];
    }
    where2Copy[where2CopyLength+what2CopyLength] = '\0';
}

int getStrLength(char *str) {
    int i = 0;
    while (*(str+i)) {
        i++;
    }

    return i;
}

void function(int *parameter) {
    *parameter /= 10;
}

void cube(int *p_array, int length) {
    while(length) {
        *p_array = *p_array * *p_array * *p_array;
        p_array++;
        length--;
    }
}
