//
//  main.cpp
//  DateFormats
//
//  Created by Xiaohan Chen on 8/24/23，and my partner is Yijun Zhan.
//

#include <iostream>
#include <string>

int main() {
    std::string inputDate;
    std::cout << "Enter a date:" << std::endl;
    std::cin >> inputDate;

    std::string Month = inputDate.substr(0, inputDate.find("/"));
    inputDate = inputDate.substr(inputDate.find("/") + 1);
    std::string Day = inputDate.substr(0, inputDate.find("/"));
    std::string Year = inputDate.substr(inputDate.find("/") + 1);

    int month = std::stoi(Month);
    int day = std::stoi(Day);
    int year = std::stoi(Year);

    std::string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (month >= 1 && month <= 12) {
        std::string monthName = months[month - 1];

        if (day >= 1 && day <= 31 && year >= 1000 && year <= 9999) {
            std::cout << monthName << " " << day << ", " << year << std::endl;
        } else {
            std::cout << "Invalid date" << std::endl;
        }
    } else {
        std::cout << "Invalid date"<< std::endl;
    }

    return 0;
}
