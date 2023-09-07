// Create by Yijun Zhan
// my Partner is XiaoHan Chen
//  main.cpp
//  Cards
//
//
//

#include <iostream>
#include "cardsHelpers.h"
#include <vector>

int main(int argc, const char * argv[]) {
    std::srand(time(nullptr));
    std::vector<cardDeck> cards = creatDeck();
    //cards ={{1},{2},{3}...{13}}
    shuffle(cards);
    //std::vector<cardDeck> hands={cards[0],cards[1],cards[2],cards[3],cards[4]};
    const int totalHands = 1000000;

        std::vector<cardDeck> deck = creatDeck();
        int flushCount = 0, straightCount = 0, straightFlushCount = 0, royalFlushCount = 0, fullHouseCount = 0;

        for(int i = 0; i < totalHands; i++) {
            shuffle(deck);
            std::vector<cardDeck> hand(deck.begin(), deck.begin() + 5);

            if(isFlush(hand)) flushCount++;
            if(isStraight(hand)) straightCount++;
            if(isStraightFlush(hand)) straightFlushCount++;
            if(isRoyalFlush(hand)) royalFlushCount++;
            if(isFullHouse(hand)) fullHouseCount++;
        }

        std::cout<< "Flush percentage: "<< (double)flushCount / totalHands * 100<< "%"<< std::endl;
        std::cout<< "Straight percentage: "<< (double)straightCount / totalHands * 100<< "%"<< std::endl;
        std::cout<< "Straight Flush percentage: "<< (double)straightFlushCount / totalHands * 100<< "%"<< std::endl;
        std::cout<< "Royal Flush percentage: "<< (double)royalFlushCount / totalHands * 100<< "%"<< std::endl;
    std::cout<< "Full House percentage: "<< (double)fullHouseCount / totalHands * 100<< "%"<< std::endl;

    testCards();
    printCards(cards);
    
    return 0;
}
