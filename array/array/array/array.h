#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
#include"start_work_with_array.h"

class array
{
public:
    int element_number;
    int size_of_array;
    int *arr;
    array(int i);
    ~array();
    void size(int i);
    void remove(int i);
    void add(int add_element);
    void print();
};

#endif // ARRAY_H
