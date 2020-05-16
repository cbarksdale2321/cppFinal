#include <iostream>

#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#include "card.hpp"
#include "deck.hpp"

int main()
{
        int numOfCards; 
        int oppCards;
        int topCard;

        int decision;
    srand(time(0)); 
    Deck deck;
    cout << "How many cards do you want to be dealt? ";
    while (cin >> numOfCards) {
        deck.shuffle();
        oppCards = numOfCards;
        topCard = 1;

        cout << "Your hand is: ";
        for (int cardNum=0; cardNum<numOfCards; cardNum++) {
            Card c = deck.dealOneCard();  
            std::string suit = c.getSuit();
            std::string face = c.getFace();
            cout << face << suit << " ";
            
            
        }
        cout << endl;
        cout << "Your opponent's hand is: ";
        for (int cardNum=0; cardNum<oppCards; cardNum++) {
            Card c = deck.dealOneCard();  
            std::string suit = c.getSuit();
            std::string face = c.getFace();
            cout << face << suit << " ";
        }
        
        cout << endl;

        cout << "The card on top of the shuffled deck is: ";
        for (int cardNum=0; cardNum<topCard; cardNum++) {
            Card c = deck.dealOneCard();  
            std::string suit = c.getSuit();
            std::string face = c.getFace();
            cout << face << suit << " ";
        }
        cout << endl;

        cout << "What is your first move ";
        cout << " 1 - Place down card ";
        cout << " 2 - Call Trump ";
        cout << endl;
        cin >> decision;

        switch(decision) {
   case 1:
        cout <<"Card placed";
      break; 
   case 2:
      cout << "called trump";
      break; 

   default : 
        cout << "Not an option";
    
        }
        
      
    }

    
   
    return 0;
}