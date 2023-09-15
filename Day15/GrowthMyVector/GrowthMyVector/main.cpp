//
//  main.cpp
//  GrowthMyVector
//
//  Created by 詹怡君 on 9/12/23.
//
#include "Helpers.hpp"
#include <iostream>
template <typename T>
void test(MyVector<T>v1,MyVector<T>v2){
    if(v1 < v2){
        std::cout <<"int type v1 <= v2" <<std::endl;
    }
    if(v1 == v2){
        std::cout <<"int type v1 = v2" <<std::endl;
    }
    if(v1 >= v2){
        std::cout <<"int type v1 >= v2" <<std::endl;
    }
    if(v1 <= v2){
        std::cout <<"int type v1 <= v2" <<std::endl;
    }
    if(v1 < v2){
        std::cout <<"int type v1 < v2" <<std::endl;
    }
    if(v1 > v2){
        std::cout <<"int type v1 > v2" <<std::endl;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    MyVector<int> v1(10);
    MyVector<int> v2(10);
    //test
 // v1.data = {1,2,3,4,5};
    v1.pushBack(1);
//    v1.pushBack(2);
//    v2.pushBack(2);
//    v2.pushBack(3);
//    test(v1,v2);
//
//    MyVector<char> v3(10);
//    MyVector<char> v4(10);
//    v1.pushBack('a');
//    v1.pushBack('b');
//    v2.pushBack('a');
//    v2.pushBack('b');
//    test(v3,v4);
    
//
//    testPushBack(v1);
////    v1.popBack();
//    v1.growVector();
////    v1.set(0,2);
//    testPopBack(v1);
//    size_t size = v1.getSize();
//    size_t capacity = v1.getCapacity();
//
//    std::cout <<"Growed capacity: " <<capacity<<std::endl;
//    std::cout <<"Current size: " <<size <<std::endl;
//
    return 0;
}




