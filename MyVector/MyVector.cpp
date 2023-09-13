#include "MyVector.hpp"

MyVector::MyVector() :
size_(0),
capacity_(10),
data(new int[capacity_]) {
    std::cout << "\nHello from the constructor";
}

MyVector::MyVector(size_t size) :
size_(0),
capacity_(size),
data(new int[capacity_]) {
    std::cout << "\nHello from the constructor";
}

MyVector::MyVector(int* inputdata, size_t size) :
MyVector() {
    for (size_t i = 0; i < size; ++i) {
        push_back(inputdata[i]);
    }
}

MyVector::~MyVector() {
    std::cout << "\nHello from the destructor";
    delete[] data;
}

MyVector MyVector::makeVector(size_t size) {
    if (data) {
        delete[] data;
    }
    size_ = size;
    capacity_ = 2 * size_;
    data = new int[capacity_];
    return *this;
}

void MyVector::push_back(int val) {
    if (size_ == capacity_) {
        growVector();
    }
    data[size_++] = val;
}

void MyVector::set(int val, size_t pos) {
    assert(pos < size_ && "Invalid position");
    assert(data != nullptr && "Data array is empty!");
    data[pos] = val;
}

int MyVector::get(size_t pos) const {
    assert(pos < size_ && "Invalid position");
    return data[pos];
}

size_t MyVector::size() const {
    return size_;
}

void MyVector::deleteVector() {
    delete[] data;
    data = nullptr;
    size_ = 0;
    capacity_ = 0;
}

void MyVector::growVector() {
    capacity_ *= 2;
    int* temp = new int[capacity_];
    for (size_t i = 0; i < size_; ++i) {
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
}
