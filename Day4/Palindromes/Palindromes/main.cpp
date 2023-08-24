//
//  main.cpp
//  Palindromes
//
//  Created by Yijun Zhan on 8/24/23.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::string input_word;
    std::string reversed_word;
    std::cout << "Enter a word:" <<std::endl;
    std::cin >> input_word;
    for(int i=input_word.length()-1; i>=0; i--){
        reversed_word += input_word[i];
    }
    if (reversed_word == input_word){
        std::cout <<input_word<<" IS a palindrome"<<std::endl;
    }
    else{
        std::cout <<input_word<<" is NOT a palindrome"<<std::endl;
    }
    return 0;
}

