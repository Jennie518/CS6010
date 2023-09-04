//
//  main.cpp
//  BookAnalyzer
//
//  Created by 詹怡君 on 9/2/23.
//

#include <iostream>
#include <fstream>
#include "BookAnalyzerHelper.hpp"

int main(int argc, const char * argv[]) {
    std::string singleWord;
    std::vector<std::string> allwords;
    int NumWords = 0;
    int Numchars = 0;
    std::string fileName = argv[1]; //read fileName and searcword in command line
    std::string keyWord = argv[2];
    std::ifstream fin (fileName);
    int titlePos = 0;
    int authorPos =0;
    int releaseDayPos = 0;
    std::string title ="unknown";
    std::string authorName="unknown";
    std::string releaseDate="unknwon";
    
    if (!fin.is_open()) {
        std::cerr << "failed to open" << fileName << std::endl;
        return 1;
    }//test whether input file open correctly
    while(fin >> singleWord){
        allwords.push_back(singleWord);
        NumWords++;
        Numchars += singleWord.length();
    }
    for (int i = 0; i < allwords.size(); i++) {
           if (allwords[i] == "Title:") {
               titlePos = i;
           }
       }

    for (int i = titlePos; i < titlePos + 100 && i < allwords.size(); i++) {
        if (allwords[i] == "Author:") {
            authorPos = i;
        }
    }
    for (int i = titlePos; i < titlePos + 100 && i < allwords.size(); i++) {
        if (allwords[i] == "Release" && allwords[i+1] =="Date:") {
            releaseDayPos= i;
        }
    }
    


    
    title = getTitle(allwords,titlePos, authorPos);
    authorName = getAuthor(allwords, authorPos, releaseDayPos);
   
    std::cout <<title<<" by "<<authorName<<":";
    PrintKeyword(allwords,keyWord,Numchars);
    std::string shortestWord;
    std::string longestWord;
    
    std::cout << "Number of words: "<<NumWords<<std::endl;
    std::cout << "Number of characters: "<<Numchars<<std::endl;
    shortestWord = findShortestWord(allwords);
    longestWord = findLongestWord(allwords);
    
    std::cout << "The shortest word is \""<<shortestWord<<"\" and longest word is \""<<longestWord<<"\""<<std::endl;
    //print title,author and release day
   
    
        return 0;
    }

    

