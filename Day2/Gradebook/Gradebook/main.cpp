//
//  main.cpp
//  Gradebook
//
//  Created by YIJUN ZHAN on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    float assignment1;
    float assignment2;
    float assignment3;
    float assignment4;
    float assignment5;
    std::cout << "Enter 5 assignment scores:"<<std::endl;
    std::cin >>assignment1;
    std::cin >>assignment2;
    std::cin >> assignment3;
    std::cin >>assignment4;
    std::cin>>assignment5;
    
      
    float average;
    average=(assignment1+assignment2+assignment3+assignment4+assignment5)/5;
    std::cout <<"Average: "<< average<<std::endl;
    return 0;
}
