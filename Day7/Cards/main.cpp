//
//  main.cpp
//  Cards
//
//  Created by 詹怡君 on 8/29/23.
//

#include <iostream>
#include "cardsHelpers.h"
#include <vector>
int main(int argc, const char * argv[]) {
    std::vector<cardDeck> cards = creatDeck();
    printCards(cards);
    return 0;
}
