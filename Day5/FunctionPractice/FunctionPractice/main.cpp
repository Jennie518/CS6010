//
//  main.cpp
//  FunctionPractice
//
//  Created by 詹怡君 on 8/25/23.
//

#include <iostream>
#include <cmath>

//a.get pythagorean
float pythagorean(float x,float y){ //var name can be random
    return sqrt(x*x+y*y);
}
//b. x and y velocity
void speedCalculator(double speed,double angle){
    double x = speed*cos(angle);
    double y = speed*sin(angle);
    std::cout <<"x velocity is "<<x<<", y velocity is"<<y;
}

//2.0 a
float pythagorean2(){
    float x;
    float y;
    std::cout <<"Enter one length of triangle"<<std::endl;
    std::cin >> x;
    std::cout <<"Enter another length of triangle"<<std::endl;
    std::cin >>y;
    return sqrt(x*x+y*y);
}
//isCapitalized

//    return mystring;
bool isCapitalized(std::string mystring){

    if (mystring[0]>='A' && mystring[0]<='Z'){
        return true;
    }
    else{
        return false;
    }
    
}
//boolToString

std::string boolToString(bool Capital_string){
    if (Capital_string) {
        return "True";
    }else{
        return "False";
    }
}
bool isPrime(int num){
    if (num <= 1){
        return false;
    }
    for (int i = 2; i*i<num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
//a.
    float x;
    float y;
    std::cout <<"Enter one length of triangle"<<std::endl;
    std::cin >> x;
    std::cout <<"Enter another length of triangle"<<std::endl;
    std::cin >> y;
    float res = pythagorean(x,y);
    std::cout <<"hypotenuse is "<<res<<std::endl;
    
//b
    double speed;
    double angle;
    std::cout <<"Enter your speed "<<std::endl;
    std::cin >> speed;
    std::cout <<"Enter your angle "<<std::endl;
    std::cin >> angle;
    speedCalculator(speed,angle);
//c
    std::time_t result = std::time(nullptr);
        std::cout << std::asctime(std::localtime(&result))<<std::endl
                  << result << " seconds since the Epoch" <<std::endl;
    // function std::time(), std::asctime(),std::localtime() are used
    
    res = pythagorean2();
    std::cout <<"hypotenuse is "<<res<<std::endl;
//part2
//Q1. because when move cin in other function instead of in main function
//the scope of function only in that function
//if function only work while user input parameters, it affect the flexibility of function and hard to be used by others.
//function should have single function/
   
    //Q3.
    std::string inString;
    std::cout << "Enter a string"<<std::endl;
    std::cin >> inString;
    bool Capital_string = isCapitalized(inString);
    std::string res2=boolToString(Capital_string);
    std::cout <<res2<<std::endl;
    
    //prime
    int num;
    std::cout << "Enter an integer"<<std::endl;
    std::cin >> num;
    if(isPrime(num)){
        std::cout <<"Is prime"<<std::endl;
    }else{
        std::cout <<"is Not prime"<<std::endl;
    }
    return 0;
}

