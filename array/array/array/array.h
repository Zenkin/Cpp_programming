#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>

class array
{
public:
    int element_number;
    int size_of_array;
    //int arr[];
    int *arr;
    array(int i);
    ~array();
    void size(int i);
    void remove(int i);
    void add(int i);
    void print();
};

#endif // ARRAY_H
