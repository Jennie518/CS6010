//
//  main.cpp
//  RomanNumerals
//
//  Created by Yijun on 8/24/23.
//

#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    int input_num;
    std::string output;
    std::cout << "Enter decimal number:";
    std::cin >> input_num;
    
    std::string Roman_num[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    if (input_num > 0){
        for (int i = 0; i < sizeof(values)/sizeof(values[0]);i++){
            while(input_num >= values[i]){
                output += Roman_num[i];
                input_num -= values[i];
            }
        }
        std::cout <<"Roman numeral version:"<<std::endl<<output <<std::endl;
    }else{
        std::cout <<"Invalid input";
    }
    return 0;
}
 
