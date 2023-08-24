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
    int inChange;
    std::cout << "Enter item price in cents:"<<std::endl;
    std::cin >> price;
    std::cout << "Enter amount paid in cents:"<<std::endl;
    std::cin >> paid_in_cents;
    inChange = paid_in_cents - price;
    int Quaters = inChange/25;
    int change = inChange % 25;
    int Dimes = change/10;
    change = change % 10;
    int Nickels = change/5;
    int Pennies = change % 5;
    std::cout <<"Change= " <<inChange<<" Cents"<<std::endl<<"Quaters: "<<Quaters<<std::endl<<"Dimes: "<<Dimes<<std::endl<<"Nickels: "<<Nickels<<std::endl<<"Pennies: "<<Pennies<<std::endl;
   
    return 0;
}
