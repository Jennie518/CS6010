//
//  main.cpp
//  IfStatementPractice
//
//  Created by 詹怡君 on 8/23/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int age;
    cout <<"How old are you: " <<endl;
    cin>>age;
    if (age >= 18){
        cout <<"You can vote!" <<endl;
    }else{
        cout <<"You cannot vote!" <<endl;
    }
    if (age >= 30){
        cout <<"You can run for senate" <<endl;
    }else{
        cout <<"You cannot run for senate" <<endl;
    }
    if (age >=80){
        cout <<"You are a part of greatest generation " <<endl;
    }
    else if (age >=60){
        cout <<"You are a part of baby boomers " <<endl;
    }
    else if (age >=40){
        cout <<"You are a part of generation X " <<endl;
    }
    else if (age >=20){
        cout <<"You are a part of millennial " <<endl;
    }
    else{
        cout <<"You are a part of iKid " <<endl;
    }
    return 0;
}

