//
//  main.cpp
//  NumberConverter
//  my partner is XiaoHan Chen
//  Created by 詹怡君 on 9/5/23.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
int stringToInt(std::string inStr,int base){
    int digit;
    int value = 0;
    int startIndex = 0;
    if (inStr[0] == '-') {
           startIndex = 1; //skip negative nums
       }
    if (base == 10 ||base == 2){
        for(int i = startIndex; i <inStr.length();i++){
            digit = inStr[i]-'0';
            value +=digit*std::pow(base,inStr.length()-1-i);
        }
    }
    else if (base == 16){
        for(int i = startIndex; i <inStr.length();i++){
            inStr[i]=tolower(inStr[i]);
            if(inStr[i]<='9' &&inStr[i] >= '0'){
                digit = inStr[i]-'0';
            }else if (inStr[i] >= 'a' && inStr[i] <= 'f'){
                digit = inStr[i]-'a'+10;
            }
            value += digit*std::pow(base,inStr.length()-1-i);
        }
       
    }
    if (startIndex == 1) {
        value = -value;
    }
    return value;
}
std::string intToDecimalString(int IntNum){
    std::string res =std::to_string(IntNum);
    return  res;
}
std::string intTobinaryString(int IntNum){
    std::stack<int> biStack;
    std::string biStr;
    if (IntNum == 0) {
        return "0";
    }
    bool isNegative = false;
    if (IntNum < 0) {
           isNegative = true;
           IntNum = -IntNum; //convert to positive num
    }
    while (IntNum > 0) {
        int remainder = IntNum % 2; // get remainder
        char binDigit = '0'+remainder;
        biStack.push(binDigit);
        IntNum /= 2; // divided by 2
    }
    while (!biStack.empty()) {
        biStr += biStack.top();
        biStack.pop();
    }
    if(isNegative){
        biStr = "-"+biStr;
    }
    return biStr;
}
std::string intToHexadecimalString(int IntNum){
    std::stack<char> hexStack; // use stack to store
    std::string hexStr = "";
    
    if (IntNum == 0) {
        return "0"; // special situation
    }
    bool isNegative = false;
    if (IntNum < 0) {
           isNegative = true;
           IntNum = -IntNum; //convert to positive
    }
    while (IntNum > 0) {
        int remainder = IntNum % 16; // get remainder
        char hexDigit;
        
        if (remainder < 10) {
            hexDigit = '0' + remainder; // convert 0 to 9
        } else {
            hexDigit = 'a' + remainder - 10; // convert remainder to char
        }
        hexStack.push(hexDigit); //
        IntNum /= 16;
    }
    //  get char from stack to constuct hexStr
    while (!hexStack.empty()) {
        hexStr += hexStack.top();
        hexStack.pop();
    }
    if(isNegative){
        hexStr = "-"+hexStr;
    }
    return hexStr;
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    int res = stringToInt("1010",2);
   //test code:
    if(stringToInt( intTobinaryString(-1), 2 ) == -1){
        std::cout <<"binaryString test pass"<<std::endl;
    }else{
        std::cout <<"binaryString test failed"<<std::endl;
    }
    if(stringToInt( intToDecimalString(-7), 10 ) == -7){
        std::cout <<"Decimal test pass"<<std::endl;
    }else{
        std::cout <<"test failed"<<std::endl;
    }
    
    
    if(stringToInt( intToHexadecimalString(-63), 16 ) == -63){
        std::cout <<"Hexadecimal test pass"<<std::endl;
    }else{
        std::cout <<"Hexadecimal test failed"<<std::endl;
    }
    
//    std::cout<<stringToInt("E1",16);
    return 0;
}


