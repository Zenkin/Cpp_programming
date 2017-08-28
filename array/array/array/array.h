#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cmath>
#include <start_work_with_array.h>
#include <stdbool.h>

class Array
{
    int capacity; // Вместимость массива
    const int inc_cap_coef = 2;
    int array_size;
    int *arr;
    void growUp();
    void RepeatInput(int i);
public:
    //TODO после исправления замечаний по уже написанному коду, было бы отлично
    // перегрузить копирующий конструктор, оператор присваивания.
    Array(int initial_capacity);
    ~Array();
    int remove(int i);
    void add(int element);
    //TODO после исправлений по существующему коду, было бы отлично
    // добавить метод add(index, element), который добавлял бы элемент "в середину массива" (на позицию index). Среднее время этой операции O(n).
    void print();
    int size();
    bool isEmpty();
    Array(const Array &obj) {
    }
};

#endif // ARRAY_H
