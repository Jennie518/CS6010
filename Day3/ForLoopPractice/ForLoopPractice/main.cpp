//
//  main.cpp
//  ForLoopPractice
//
//  Created by YIJUN on 8/23/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
/*
 
 */
    /*
     1. print numbers from 1 to 10
     I think for loop is better
     */
    for (int i = 1;i <= 10;i++) {  //once in for loop
        cout << i <<", ";
    }
    int i = 1;
    cout << endl;
    while (i <=10){  //once in while loop
        cout << i <<", ";
        i++;
    }
    
    /*
     2. print out all the numbers from the num1 to the num2
     */
    
    cout << endl;
    int num1;
    int num2;
    cout << "Enter num1:"<<endl;
    cin >> num1;
    cout <<"Enter num2:"<<endl;
    cin >> num2;
    for (int i=num1;i <=num2;i++){
        cout <<i<<", ";
    }
    
    /*
     3. print out all the odd numbers in 1 to 20
     first loop seems better
     */
    //method 1
    cout << endl;
    cout<<"Odd numbers in 1 to 20: ";
    
     for (int j=1; j<=20;j++){
        if (j % 2 != 0){
            cout <<j<<", ";
        }
    }
     
    //method 2 without if
    cout << endl;
    for (int j=1; j<=20;j+=2){
        cout <<j<<", ";
    }
    
    /*
     4.Sum of positive numbers
     */
    cout << endl;
    int positive_num = 0;
    int sum = 0;
    while (positive_num >= 0){
        cout << "Enter positive numbers " <<endl;
        cin >> positive_num;
        if (positive_num<0){
            cout << "Sum: "<< sum <<endl;
            break;
        }
        sum = sum + positive_num;
    }
    /*
     5.multiplication table
     */

    for (int i = 1; i <= 5;i++){
        cout << i <<"x*: ";
        for (int j =1; j <=5; j++){
            cout << j*i <<" ";
        }
        cout <<endl;
    }
    
    return 0;
    
}
    
