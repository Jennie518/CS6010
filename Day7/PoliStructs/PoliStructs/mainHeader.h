//
//  mainHeader.h
//  PoliStructs
//
//  Created by 詹怡君 on 8/29/23.
//

#ifndef mainHeader_h
#define mainHeader_h
struct Politician{
    std::string name;
    std::string affiliation;
    std::string level;
};
std::vector<Politician>FederalCplusers(std::vector<Politician> allpolitician);

std::vector<Politician>Javacans(std::vector<Politician> allpolitician);
#endif /* mainHeader_h */
