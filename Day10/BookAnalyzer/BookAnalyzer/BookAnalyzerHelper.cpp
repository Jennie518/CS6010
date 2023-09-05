//
//  BookAnalyzerHelper.cpp
//  BookAnalyzer
//
//  Created by 詹怡君 on 9/3/23.
//

#include <iostream>
#include <vector>

std::string findShortestWord(std::vector<std::string> allwords){
    std::string shortestWord = allwords[0];
    for(int i = 0;i <allwords.size();i++){
        if(allwords[i].length()<shortestWord.length()){
            shortestWord=allwords[i];
        }
    }
    return shortestWord;
}
std::string findLongestWord(std::vector<std::string> allwords){
    std::string longestWord = allwords[0];
    for(int i = 0;i <allwords.size();i++){
        if(allwords[i].length()>longestWord.length()){
            longestWord=allwords[i];
        }
    }
    return longestWord;
}

void PrintKeyword(std::vector<std::string>allwords,std::string keyWord,int Numchars){
    int keyWordNum = 0;
    std::vector<std::string> occurences;
    std::vector<int> percentages;
    int pos = 0;
    for (int i = 0; i < allwords.size();i++){
        pos += allwords[i].size();
        if(allwords[i] == keyWord){
            double Percentage = (static_cast<double>(pos) / Numchars) * 100;
            percentages.push_back(Percentage);
            //get surrounding strings
            std::string surroundStr = allwords[i-1]+
            " "+allwords[i]+" "+allwords[i+1];
            occurences.push_back(surroundStr);
            keyWordNum++;
        }
    }
    std::cout << "The word "<<keyWord<<" appears "<<keyWordNum<<" times:"<< std::endl;
    for(int i = 0; i<percentages.size();i++){
        std::cout<<"at "<<percentages[i]<<"%: "<<occurences[i]<<std::endl;
    }
}

std::string getTitle(std::vector<std::string>allwords,int titlePos,int authorPos){
    std::string title;
    for(int i=titlePos+1;i<authorPos;i++){
         title += allwords[i]+" ";
    }
    return title;
}
std::string getAuthor(std::vector<std::string>allwords,int authorPos,int releaseDayPos){
    std::string author;
    for(int i=authorPos+1;i<releaseDayPos;i++){
      author += allwords[i]+" ";
    }
    return author;
}
