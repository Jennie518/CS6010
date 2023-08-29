//
//  PoliHelpers.cpp
//  PoliStructs
//
//  Created by 詹怡君 on 8/29/23.
//
#include <iostream>
#include <vector>

struct Politician{
    std::string name;
    std::string affiliation;
    std::string level;
};

std::vector<Politician>Javacans(std::vector<Politician> allpolitician){
    std::vector<Politician> javacansPoliticians;
    for(Politician p:allpolitician){
        if (p.affiliation == "Javacans"){
            javacansPoliticians.push_back(p);
        }
    }
    return javacansPoliticians;
};

std::vector<Politician>FederalCplusers(std::vector<Politician> allpolitician){
    std::vector<Politician> federalCplusersPolitician;
    for(Politician p:allpolitician){
        if (p.level == "federal" && p.affiliation =="Cplusers" ){
            federalCplusersPolitician.push_back(p);
        }
    }
    return federalCplusersPolitician;
};
