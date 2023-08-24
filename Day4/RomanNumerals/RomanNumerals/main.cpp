//
//  main.cpp
//  RomanNumerals
//
//  Created by Yijun on 8/24/23.
//

#include <iostream>
#include <istream>
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
    
    /*
     if (input_num % 1000 >= 0){
     int mul= input_num / 1000;
     output +='M' *mul;
     remains = input_num % 1000;
     }else if (input_num % 900 >=0){
     int mul = input_num/900;
     output +='CM' * mul;
     remains = input_num % 900;
     }else if (input_num % 500 > 0){
     int mul = input_num/500;
     output +='D' * mul;
     remains = input_num % 500;
     }else if (input_num % 400 > 0){
     output +='CD';
     remains = input_num % 400 > 0;
     }while (input_num % 100){
     output += 'C';
     remains =input_num % 100;
     }while (input_num % 90){
     output += 'XC';
     }while(input_num % 50){
     output += 'L';
     }
     std::cout << output;
     
     return 0;
     }
     */
