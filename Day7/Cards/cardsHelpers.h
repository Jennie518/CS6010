//
//  cardsHelpers.h
//  Cards
//
//  Created by 詹怡君 on 8/29/23.
//

#ifndef cardsHelpers_h
#define cardsHelpers_h
#include <stdio.h>
#include <vector>
#include <string>


struct cardDeck{
    int num;
    std::string suit;
};
void printCards(std::vector<cardDeck> cards);
std::vector<cardDeck> creatDeck();
#endif /* cardsHelpers_h */
