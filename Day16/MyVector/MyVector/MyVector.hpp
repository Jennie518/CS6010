#pragma once

#include <cstddef>
#include <iostream>
#include <cassert>
#include <numeric>
class MyVector {
public:
    MyVector();
    MyVector(size_t size);
    MyVector(int* inputdata, size_t size);
    ~MyVector();

    MyVector makeVector(size_t size);
    void push_back(int val);
    void set(int val, size_t pos);
    int get(size_t pos) const;
    size_t size() const;
    void deleteVector();
    void pop_back();
    //lab day19
    int* begin();
    int* end();
    const int* begin() const;
    const int* end() const;

private:
    void growVector();
    int* data;
    size_t size_, capacity_;
};

