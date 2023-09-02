

#include "cardsHelpers.h"
#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
void printCards(std::vector<cardDeck> cards){
    //cards ={{1},{2},{3}...{13}}
    for(int i = 0; i <cards.size();i++){
            if(cards[i].num==1){
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



