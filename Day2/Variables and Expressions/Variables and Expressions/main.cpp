//  Accidently all wrote by myself,but I have communicated with others.
//  main.cpp
//  Variables and Expressions
//
//  Created by YIJUN ZHAN on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    double ounce;
    std::cout << "Enter volume in ounces: " ;
    std::cin >> ounce;
    double cups = ounce/8;
    double Pints = ounce/16;
    double gallons=ounce/128;
    double liters = ounce*0.0296;
    double Cubic_Inches=ounce*1.8;
    std::cout << "Ounces: "<<ounce <<std::endl<<"Cups: "<<cups<<std::endl<<"Pints: "<<Pints<<std::endl<<"Gallons: "<<gallons<<std::endl<<"Liters: "<<liters<<std::endl<<"Cubic Inches: "<<Cubic_Inches<<std::endl;
    return 0;
}
