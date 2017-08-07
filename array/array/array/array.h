#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
#include"start_work_with_array.h"

const int K = 2;

class array
{
public:
    int element_number;
    int size;
    int memory;
    int *arr;
    array(int i);
    ~array();
    void remove(int i);
    void add(int add_element);
    void print();
};

#endif // ARRAY_H
