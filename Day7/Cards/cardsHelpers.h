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


struct cardDeck{
    int num;
    char c;
};
void printCards(std::vector<cardDeck> cards);
std::vector<cardDeck> creatDeck();
#endif /* cardsHelpers_h */
