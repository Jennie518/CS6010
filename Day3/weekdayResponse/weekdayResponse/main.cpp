//
//  main.cpp
//  weekdayResponse
//
//  Created by 詹怡君 on 8/23/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    bool isWeekday,isHoliday,have_youngchildren;
    char response_weekday,response_holiday,response_child;
    cout << "Whether today it's a weekday or not(Y/N)"<<endl;
    cin >> response_weekday;
    isWeekday = (response_weekday=='Y');
    cout << "Whether today it's a holiday or not(Y/N)"<<endl;
    cin >> response_holiday;
    isHoliday = (response_holiday=='Y');
    cout << "Whether you have young child or not(Y/N)"<<endl;
    cin >> response_child;
    have_youngchildren = (response_child =='Y');
    if (!have_youngchildren && isHoliday || !isWeekday){
        cout << "You can sleep"<<endl;
    }
    else{
        cout << "You cannot sleep"<<endl;
    }
    return 0;
}
