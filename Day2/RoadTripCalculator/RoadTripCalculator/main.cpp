//
//  main.cpp
//  RoadTripCalculator
//
//  Created by 詹怡君 on 8/22/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    double driving_distance;
    double mpg;
    double cost_per_gallon;
    double num_of_gallon;
    double res;
    std::cout <<"Type in the driving distance in miles: ";
    std::cin >>driving_distance;
    std::cout <<"Type in mpg: 57";
    std::cin >>mpg;
    std::cout <<"Type in cost of per gallon in dollars: ";
    std::cin >>cost_per_gallon;
    num_of_gallon=driving_distance/mpg;
    res = num_of_gallon * cost_per_gallon;
    std::cout << "cost in dollars of your road trip: "<<res <<std::endl;
    return 0;
}
