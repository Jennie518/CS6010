//
//  main.cpp
//  StringAnalyzer
//
//  Created by 詹怡君 on 8/25/23.
//

#include <iostream>
int NumWords(std::string s){
    int space_nums = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i]==' '){
            space_nums++;
        }
    }return space_nums + 1;
}

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
double AverageWordLength(std::string s){
    double words = 0.0;
    for(int i = 0; i < s.length(); i++){
        if (s[i]!=' ' && !IsPunctuation(s[i])){
            words++;
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
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Enter a string containing oneor more sentences:";
    std::string input;
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
    
    return 0;
}
