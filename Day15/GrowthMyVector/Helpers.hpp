//
//  Helpers.hpp
//  GrowthMyVector
//
//  Created by 詹怡君 on 9/12/23.
//

#ifndef Helpers_hpp
#define Helpers_hpp

#include <stdio.h>

template <typename T>
class MyVector
{
private:
    int *data;
    size_t capacity_,size_;
    
public:
    MyVector(size_t initialCapacity)
    {
        capacity_ = initialCapacity;
        size_ = 0;
        data = new int[initialCapacity];
    }
    MyVector(const MyVector& other)
    {
        capacity_ = other.capacity_;
        size_ = other.size_;
        data = new int[capacity_];
        for(int i = 0; i<size_; i++){
            data[i]=other.data[i];
        }
    }
    ~MyVector()
    {
        delete[] data;
    }
    void growVector();
    void pushBack(T val);
    void popBack();
    int get(size_t index) const;
    void set(size_t index, T newValue);
    size_t getSize() const;
    size_t getCapacity();
    void destructor();
//    MyVector operator+(const MyVector& rhs)const;
    MyVector<T> & operator=(const MyVector<T>& rhs);
//    MyVector& operator+=(const MyVector&rhs);
    //because the object wil be changed so use reference
    int operator[](size_t index);
    bool operator == (const MyVector& other)const;
    bool operator < (const MyVector& other) const;
    bool operator > (const MyVector& other) const;
    bool operator != (const MyVector& other) const;
    bool operator >= (const MyVector& other) const;
    bool operator <= (const MyVector& other) const;
};
template <typename T>
void testPushBack(MyVector<T> v);
template <typename T>
void testPopBack(MyVector<T> v);
#endif /* Helpers_hpp */
