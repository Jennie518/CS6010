//
//  main.cpp
//  PoliStructs
//
//  Created by 詹怡君 on 8/29/23.
//

#include <iostream>
#include <vector>
#include "mainHeader.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Politician p1 = {"jack","Cplusers","state"};
    Politician p2 = {"rose","Javacans","federal"};
    Politician p3 = {"jennie","Cplusers","federal"};
    std::vector<Politician> allPoliticians = {p1,p2,p3};
    //initialize allPoliticians which is a vector composed of p1,p2,p3
    std::vector<Politician> res1 = FederalCplusers(allPoliticians);
    //pass vector allPoliticians to test
    std::vector<Politician> res2 = Javacans(allPoliticians);

//test
    
    
    if(res1[0].name == "jennie" ){ //res1 is a vector,so remember to choose an object(that is a <Politician> then accesssing members,
        std::cout << "FederalCplusers pass"<<std::endl;
    }else{
        std::cout << "FederalCplusers fail"<<std::endl;
    }
    if(res2[0].name == "rose"){
        std::cout << "Javacans pass"<<std::endl;
    }else{
        std::cout << "Javacans fail"<<std::endl;
    }
    
    return 0;
    
}
