//
//  main.cpp
//  GiveChange
//
//  Created by YIJUN ZHAN on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int price;
    int paid_in_cents;
    int change;
    std::cout << "Enter item price in cents:"<<std::endl;
    std::cin >>price;
    std::cout << "Enter amount paid in cents:"<<std::endl;
    std::cin >> paid_in_cents;
    change = paid_in_cents - price;
    int Quaters = change/25;
    int Dimes = (change - Quaters * 25)/10;
    int Nickels = (change - Quaters * 25 - Dimes * 10)/5;
    int Pennies = (change - Quaters * 25 - Dimes * 10-Nickels*5);
    std::cout <<"Change= " <<change<<" Cents"<<std::endl<<"Quaters: "<<Quaters<<std::endl<<"Dimes: "<<Dimes<<std::endl<<"Nickels: "<<Nickels<<std::endl<<"Pennies: "<<Pennies<<std::endl;
   
    return 0;
}
