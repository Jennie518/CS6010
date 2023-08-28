//
//  LetterHelpers.cpp
//  main()
//
//  Created by 詹怡君 on 8/28/23.
//

#include "LetterHelpers.hpp"
#include <iostream>


bool IsTerminator(char c){
    if(c=='.'||c=='!'||c=='?'){
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
    if (c =='a'||c =='e'||c =='i'||c =='o'||c =='u'||c =='y'||c =='A'||c =='E'||c =='I'||c =='O'||c =='U'||c =='Y'){
        return true ;
    }else{
        return false;
        }
}

