// Code referenced from Fred Swartz 2004-11-22

#include <string>

#ifndef CARD_HPP
#define CARD_HPP

class Card {
    public:
        Card();
        Card(int card);
        std::string getSuit() const;
        std::string getFace() const;
       
    private:
        int _card;  // range 0..51

        static const std::string CARD_FACES[];
        static const std::string CARD_SUITS[];
};  

#endif