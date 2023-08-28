//
//  main.cpp
//  main()
//
//  Created by 詹怡君 on 8/28/23.
//

#include <iostream>
#include "LetterHelpers.h"
#include "WordHelpers.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::string input;
    while (input!= "done"){
        std::cout << "Enter a string containing oneor more sentences:";
        std::getline( std::cin, input );
        int num_words = NumWords(input);
        double ave_words = AverageWordLength(input);
        std::cout << "Number of words: " <<num_words <<std::endl;
        int sentences = 0;
        int vowels = 0;
        int consonants = 0;
        for (int i = 0; i < input.length(); i++){
            char c = input[i];
            bool Terminator = IsTerminator(c);
            if (Terminator){
                sentences++;
            }
            if (IsVowel(c)){
                vowels++;
            }
            if (!IsVowel(c) && c !=' '&& !IsPunctuation(c)){
                consonants++;
            }
        }
        std::cout << "Number of sentences: "<<sentences<<std::endl;
        std::cout << "Number of vowels: "<<vowels<<std::endl;
        std::cout << "Number of consonants: "<<consonants<<std::endl;
        std::cout << "Reading level (average word length):"<<ave_words<<std::endl;
        std::cout << "Average vowels per word: "<<AverageVowelsPerWord(input)<<std::endl;
    }
    
    
    return 0;
}
