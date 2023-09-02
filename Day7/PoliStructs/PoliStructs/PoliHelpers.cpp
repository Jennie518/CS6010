//
//  PoliHelpers.cpp
//  PoliStructs
//
//  Created by 詹怡君 on 8/29/23.
//
#include <iostream>
#include <vector>



std::vector<Politician>Javacans(std::vector<Politician> allpolitician){
    std::vector<Politician> javacansPoliticians;
    for(Politician p:allpolitician){ //iterate object p in allpolitician
        if (p.affiliation == "Javacans"){
            //affiliation value of object p
            javacansPoliticians.push_back(p);
            //push_back is add an object to a vector
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
