//
//  BookAnalyzerHelper.hpp
//  BookAnalyzer
//
//  Created by 詹怡君 on 9/3/23.
//

#ifndef BookAnalyzerHelper_hpp
#define BookAnalyzerHelper_hpp

#include <stdio.h>
std::string findLongestWord(std::vector<std::string> allwords);
std::string findShortestWord(std::vector<std::string> allwords);
void PrintKeyword(std::vector<std::string>allwords,std::string keyWord,int Numchars);
std::string getTitle(std::vector<std::string>allwords,int titlePos,int authorPos);
std::string getAuthor(std::vector<std::string>allwords,int authorPos,int releaseDayPos);

#endif /* BookAnalyzerHelper_hpp */
