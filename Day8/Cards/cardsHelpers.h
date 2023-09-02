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
#include <algorithm>

struct cardDeck{
    int num;
    std::string suit;
//    bool operator<(const cardDeck& other) const {//paste from website
//           if (num != other.num) {
//               return num < other.num;
//           }
//           return suit < other.suit;
//       }
};
void printCards(std::vector<cardDeck> cards);

std::vector<cardDeck> creatDeck();

void shuffle(std::vector<cardDeck>& deck);

bool isFlush(std::vector<cardDeck> hands);
bool isRoyalFlush(const std::vector<cardDeck>& hands);
bool isFullHouse(std::vector<cardDeck>& hands);
bool isStraight(std::vector<cardDeck> hands);
bool isStraightFlush(const std::vector<cardDeck>& hands);
void testCards();
#endif /* cardsHelpers_h */
