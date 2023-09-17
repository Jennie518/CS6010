//
//  Helpers.hpp
//  GrowthMyVector
//
//  Created by 詹怡君 on 9/12/23.
//

#ifndef Helpers_hpp
#define Helpers_hpp
#include "Helpers.hpp"
#include <iostream>
#include <stdio.h>

template <typename T>
class MyVector
{
private:
    T* data;
    size_t capacity_,size_;
    
public:
    MyVector<T>(size_t initialCapacity)
    {
        capacity_ = initialCapacity;
        size_ = 0;
        data = new T[initialCapacity];
    }
    MyVector<T>(const MyVector& other)
    {
        capacity_ = other.capacity_;
        size_ = other.size_;
        data = new T[capacity_];
        for(int i = 0; i<size_; i++){
            data[i]=other.data[i];
        }
    }
    ~MyVector<T>()
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
    T operator[](size_t index);
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


template <typename T>
void MyVector<T>:: growVector(){
    T *temp = new T[capacity_*2];
    for (size_t i = 0; i <size_; i++){
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
    temp = nullptr;
    capacity_ *= 2;
}
template <typename T>
void MyVector<T>::pushBack(T val){
    if(size_ == capacity_){ //when to push back,need to add 1?
//        size_+1 > capacity_
        growVector();
    }
    data[size_] = val;
    size_++;
}
template <typename T>
void MyVector<T>::popBack(){
    if (size_ > 0) {
        size_--;
    }
}
template <typename T>
int MyVector<T>::get(size_t index)const{
    int val = data[index];
    return val;
}

template <typename T>
void MyVector<T>::set(size_t index, T newValue){
    if(index<0 &&index >= size_){
        std::cout<<"invailed size input";
    }
    data[index] = newValue;
 
}
template <typename T>
size_t MyVector<T>::getSize() const {
    return size_;
}

template <typename T>
size_t MyVector<T>::getCapacity(){
    return capacity_;
}
template <typename T>
void testPushBack(MyVector<T> v){
    for(size_t i = 0; i <v.getSize();i++){
        std::cout<<"PushBack res: " <<v.get(i)<<std::endl;
    }
}
template <typename T>
void testPopBack(MyVector<T> v){
    for(int i = 0; i <v.getSize();i++){
        std::cout<<"PopBack res: " <<v.get(i)<<std::endl;
    }
}
template <typename T>
void MyVector<T>::destructor() {
       if (data != nullptr) {
           delete[] data;
           data = nullptr;
           size_ = 0;
           capacity_ = 0;
       }
   }
template <typename T>
MyVector<T> & MyVector<T>::operator=(const MyVector<T>& rhs){
    if(this ==&rhs){
        return *this;
    }
    delete[] data;
    size_ = rhs.size_;
    capacity_ = rhs.capacity_;
    data = new T[capacity_];
    for (size_t i = 0; i <size_;i++){
        data[i] = rhs.get(i);
    }
    return *this;
}


//MyVector MyVector::operator+(const MyVector& rhs)const
//{
//    MyVector result(10);
//    assert((getSize()==rhs.getSize())&&"Size mismatch in operator");
//    size_t size = getSize();
//    for(size_t i = 0; i <size;i++){
//        pushBack(get(i)+rhs.get(i));
//    }
//    return result;
//}
template <typename T>
T MyVector<T>::operator[](size_t index)
{
    assert(index<size_ &&"Out of bounds operator[]!");
    return data[index];
}
template <typename T>
bool MyVector<T>::operator==(const MyVector& other) const {
        if (size_ != other.size_) {
            return false;
        }
        for (size_t i = 0; i < size_; i++) {
            if (data[i] != other.data[i]) {
                return false;
            }
        }
        return true;
}
template <typename T>
bool MyVector<T>::operator <(const MyVector& other) const{
    size_t minSize = std::min(size_, other.size_);
    for (size_t i = 0; i < minSize; i++) {
        if (data[i] > other.data[i] || data[i] == other.data[i]){
            return false;
        }
    }
    return true;
}
template <typename T>
bool MyVector<T>::operator !=(const MyVector& other) const{
    return (!(*this==other));
}
template <typename T>
bool MyVector<T>::operator >(const MyVector& other) const{
    return(! (*this < other)&& *this != other);
}
template <typename T>
bool MyVector<T>::operator >= (const MyVector& other) const{
    return(! (*this > other) || *this == other);
}
template <typename T>
bool MyVector<T>::operator <= (const MyVector& other) const{
    return(! (*this < other) || *this == other);
}

#endif /* Helpers_hpp */
