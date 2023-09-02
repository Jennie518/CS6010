//
//  WordHelpers.cpp
//  main()
//
//  Created by 詹怡君 on 8/28/23.
//

#include "WordHelpers.hpp"
#include "LetterHelpers.h"
int NumWords(std::string s){
    int space_nums = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i]==' '){
            space_nums++;
        }
    }return space_nums + 1;
}
double AverageWordLength(std::string s){
    double words = 0.0;
    for(int i = 0; i < s.length(); i++){
        if (s[i]!=' ' && !IsPunctuation(s[i])){
            words++;//count all the num of letters
        }
    }
    double result = words/static_cast<double>(NumWords(s));
    return result;
}
double AverageVowelsPerWord(std::string s){
    double vowels = 0.0;
    for(int i = 0; i < s.length(); i++){
        if (IsVowel(s[i])){
            vowels++;
        }
    }
    double res = vowels/static_cast<double>(NumWords(s));
    return res;
}

