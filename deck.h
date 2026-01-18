//deck.h
#ifndef DECK_H
#define DECK_H

class Deck
{
private: NodeList cards;
public: void createDeck();
public: void shuffleDeck();
public: void shuffleDeckGood();
public: Card* drawFromTop();
public: void putOnBottom(Card* card);
public: bool checkIfFull();
public: void burnCard();
public: void deleteDeck();
};
#endif