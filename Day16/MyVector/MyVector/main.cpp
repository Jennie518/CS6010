#include "MyVector.hpp"
#include <iostream>

void testDestructor() {
    MyVector v2;
    v2.push_back(5);
    v2.push_back(20);
    v2.deleteVector();
}

int main() {
    int someIntData[] = {1,6,3,4,5};
    MyVector v1(10);
    v1.push_back(1);
    v1.push_back(2);
    testDestructor();   

    MyVector v3(someIntData, 5);
//    std::cout << "\n" << v3.get(3);
    for (int x:v3){
        std::cout <<x<<" ";
    }//use for each loop to print out
    std::sort(v3.begin(),v3.end());
    
    auto minIter = std::min_element(v3.begin(),v3.end());
    std::cout<<"minimum element: " << *minIter <<"\n";
    
    auto sum = std::accumulate(v3.begin(),v3.end(),0);
    std::cout<<"sum: " <<sum<<"\n";
    
    int evenCount = std::count_if(v3.begin(), v3.end(), [](int num) { return num % 2 == 0; });
    
    std::cout<<"counts of even nums: " <<evenCount<<"\n";
    auto newEnd = std::remove_if(v3.begin(), v3.end(),[](int num) { return num % 2 == 0;});
    while (v3.size() > std::distance(v3.begin(), newEnd)) {
            v3.pop_back();
    }
    std::cout <<"delete all of even nums: ";
    for (int x:v3){
        std::cout << x <<" ";
    }
    return 0;
}

