// card.h

#ifndef CARD_H
#define CARD_H

class Card {
    
    private: CardValue value;
    private: CardColor color;

    
    public: CardValue getValue();
    public: CardColor getColor();
    //public: std::string toString();

    // constructor
    public: Card(CardValue value, CardColor color);
};

#endif
