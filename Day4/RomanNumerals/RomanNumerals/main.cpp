//
//  main.cpp
//  RomanNumerals
//
//  Created by Yijun Zhan on 8/24/23.
//

#include <iostream>
#include <string>
#include<vector>
int main(int argc, const char * argv[]) {
    int inputNum;
    std::string outputRomanNum;
    std::cout << "Enter decimal number:";
    std::cin >> inputNum;
    
    std::string Roman_num[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    
    int RomanNumeralValues[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    
    // Here, we store all these values in an array so we don't have to
    // write multiple for loops. We set it up so we can use a single
    // for loop to pick out all the roman numeral characters
    if (inputNum > 0){
        for (int i = 0; i < 13;i++){
            //iterate value in values and Roman_num[]
            while(inputNum >= RomanNumeralValues[i]){
                // Add the appropriate roman numeral character to the output
                outputRomanNum += Roman_num[i];
                
                // If input was 1200, we have already handle 1000 with M in the output.
                // We can now subtract off 1000, leaving only 200
                inputNum -= RomanNumeralValues[i];
            }
        }
        std::cout <<"Roman numeral version:"<<std::endl<<outputRomanNum <<std::endl;
    }else{
        std::cout <<"Invalid input";
    }
    return 0;
}
 
