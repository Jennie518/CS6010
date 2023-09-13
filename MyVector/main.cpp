
#include "MyVector.hpp"

void testDestructor() {
    MyVector v2;
    v2.push_back(5);
    v2.push_back(20);
}

int main() {
    int someIntData[] = {1,2,3,4,5};
    MyVector v1(10);
    v1.push_back(1);
    v1.push_back(2);
    testDestructor();

    MyVector v3(someIntData, 5);
    std::cout << "\n" << v3.get(3);
    return 0;
}
