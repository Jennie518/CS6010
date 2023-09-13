#pragma once

#include <cstddef>
#include <iostream>
#include <cassert>

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

private:
    void growVector();

    int* data;
    size_t size_, capacity_;
};
