//
//  LetterHelpers.cpp
//  main()
//
//  Created by 詹怡君 on 8/28/23.
//

#include <iostream>

#include "LetterHelpers.h"

bool IsTerminator(char c){
    if(c=='.'||c=='!'||c=='?'){ //return (c=='.'||c=='!'||c=='?')directly
        return true;
    }else{
        return false;
    }
}
bool IsPunctuation(char c){
    if(c=='.'||c=='!'||c=='?'||c==','){
        return true;
    }else{
        return false;
    }
}

bool IsVowel(char c){
    if (c =='a'||c =='e'||c =='i'||c =='o'||c =='u'||c =='y'||c =='A'||c =='E'||c =='I'||c =='O'||c =='U'||c =='Y'){//use tolowercase() function
        return true ;
    }else{
        return false;
        }
}

//add function like num_of_vowels and num_of_consonants
//so that not need to use so many times of for loop
