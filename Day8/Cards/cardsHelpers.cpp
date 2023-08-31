#include "cardsHelpers.h"
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

void printCards(std::vector<cardDeck> cards){
    //cards ={{1},{2},{3}...{13}}
    for(int i = 0; i <cards.size();i++){
            if(cards[i].num==14){
                std::cout << "A";
                //cards[1]={1,"A"}
            }else if (cards[i].num == 11){
                std::cout << "J";
            }else if (cards[i].num == 12){
                
                //cards[12]={12,"Q"}
                std::cout << "Q" ;
            }else if (cards[i].num == 13){

                std::cout << "K" ;
            }else{
                std::cout << cards[i].num ;
            }
            std::cout << cards[i].suit << " ";
        if ((i+1) % 13 ==0){
            std::cout <<std::endl;
        }
        if (cards[i].num >= 11 ){
            std::string faceCard = (cards[i].num == 1) ? "A" :
            (cards[i].num == 11) ? "J" :
            (cards[i].num == 12) ? "Q" : "K";
            cards[i].face = faceCard;
            
        }
            
    }
}

std::vector<cardDeck> creatDeck(){
    std::vector<cardDeck> deck;
    std::vector<std::string> suits ={"H", "D", "C", "S"};
    for(int i = 1; i <=13; i++){
        //store num:1~13 in deck
        for(int j = 0; j <=3; j++){
            cardDeck card;
            card.num = i;
            card.suit = suits[j];
            deck.push_back(card);
        }
    }
    return deck;
}

void shuffle(std::vector<cardDeck>& deck){
    for(int i = deck.size()-1;i > 0;i--){
        int j = std::rand() % (i+1); //find random number j in 0,i+1
        std::swap(deck[i], deck[j]);
    }
}
bool isFlush(std::vector<cardDeck> hands){
    for(int i = 0;i < 5; i++){
        if(hands[0].suit !=hands[i].suit){
            return false;
        }
    }return true;
}
//
bool isStraight(std::vector<cardDeck> hands) {
//    std::sort(hands.begin(), hands.end());
    std::vector<int> rankInhands;
    for(cardDeck card:hands){
        rankInhands.push_back(card.num);
    }
    sort(rankInhands.begin(),rankInhands.end());
    for (int i = 0; i < rankInhands.size()-1; i++) {
        if (rankInhands[i+1] - rankInhands[i]!= 1) {
            return false;
        }
    }
    return true;
}
//
//
bool isStraightFlush(const std::vector<cardDeck>& hands){
    return (isStraight(hands)&& isFlush(hands));
}

bool isRoyalFlush(const std::vector<cardDeck>& hands){
    std::vector<int> rankInhands;
    for(cardDeck card:hands){
        rankInhands.push_back(card.num);
    }
    sort(rankInhands.begin(),rankInhands.end());
    return isStraightFlush(hands) && rankInhands[0] ==10;

}
bool isFullHouse(std::vector<cardDeck>& hands){
    std::vector<int> rankInhands;
    for(cardDeck card:hands){
        rankInhands.push_back(card.num);
    }
    sort(rankInhands.begin(),rankInhands.end());
    if(rankInhands[0]==rankInhands[2]){
        return  rankInhands[0]==rankInhands[1]&&rankInhands[1]== rankInhands[2] && rankInhands[3]==rankInhands[4];
    }else{
        return  rankInhands[2]==rankInhands[3]&&rankInhands[3]== rankInhands[4] && rankInhands[0]==rankInhands[1];
    }
    
    
}

void testCards(){
    std::vector<cardDeck> flush = {
        {1,"H"},
        {1,"H"},
        {1,"H"},
        {1,"H"},
        {1,"H"}
    };
    std::vector<cardDeck> straight={
        {1,"S"},
        {2,"S"},
        {3,"H"},
        {4,"H"},
        {5,"H"}
    };
    std::vector<cardDeck>flushStraight={
        {1,"H"},
        {2,"H"},
        {3,"H"},
        {4,"H"},
        {5,"H"}};
    std::vector<cardDeck> fullHouse1 ={
        {1,"H"},
        {1,"H"},
        {3,"H"},
        {3,"H"},
        {3,"H"}
    };
    std::vector<cardDeck> fullHouse2 ={
        {1,"H"},
        {1,"H"},
        {1,"H"},
        {3,"H"},
        {3,"H"}
    };
    std::vector<cardDeck> royalFlush ={
        {10,"H"},
        {11,"H"},
        {12,"H"},
        {13,"H"},
        {14,"H"}
    };
    if(!isFlush(flush)){
        std::cout <<"isFlush() err";
    }
    if(!isStraight(straight)){
        std::cout <<"isStraight() err";
    }
    if(!isFullHouse(fullHouse1)||!isFullHouse(fullHouse2)){
        std::cout <<"isFullHouse() err";
    }
    if(!isStraightFlush(flushStraight)){
        std::cout <<"flushStraight() err";
    }
    std::cout <<"test pass";
}
              



    
