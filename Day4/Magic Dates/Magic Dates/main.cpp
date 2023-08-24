//
//  main.cpp
//  Magic Dates
//
//  Created by Yijun on 8/24/23.
//  My partner is XiaoHan Chen

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string In_inputDate;
    std::cout << "Enter a date:" << std::endl;
    std::cin >> In_inputDate;
    
    std::string Month = In_inputDate.substr(0, In_inputDate.find("/"));
    std::string inputDate = In_inputDate.substr(In_inputDate.find("/") + 1);
    std::string Day = inputDate.substr(0, inputDate.find("/"));
    std::string Year = inputDate.substr(inputDate.find("/") + 1);
    std::string Year_lastTwo = Year.substr(2,3);
    int month = std::stoi(Month);
    int day = std::stoi(Day);
    int year = std::stoi(Year);
    int year_lastTwo = std::stoi(Year_lastTwo);
    
    if (month >= 1 && month <= 12 && year >= 1000 && year <= 9999) {
        if(month*day == year_lastTwo){
            std::cout << In_inputDate <<" IS a magic date"<< std::endl;
        }else{
            std::cout << In_inputDate <<" is NOT a magic date"<< std::endl;
        }
        
    } else {
        std::cout << "Invalid date" << std::endl;
        
        return 0;
    }
    
}
