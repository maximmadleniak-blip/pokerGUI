//deck.cpp
#include <iostream>
#include "card-value.h"
#include "card-value-tostring.h"
#include "card-color.h"
#include "card-color-tostring.h"
#include "card.h"
#include "node.h"
#include "node-list.h"
#include "deck.h"

void Deck::createDeck()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int p = 2; p <= 14; p++)
		{
			CardColor cc = (CardColor) i;
			CardValue cv = (CardValue) p;
			Card* card = new Card(cv, cc);
			cards.append(card);
			//cards.displayShort();
		}
	}
}

	void Deck::deleteDeck()
	{
		while (cards.length() > 0)
		{
			Card* c = cards.remove(0);
			if (c != nullptr) delete c;
		}
		cards.setHeadNull();
		cards.setTailNull();
	}
void Deck::shuffleDeck()
{
	Card* help;

	srand(time(NULL));
	int randPosition;
	for (int i = 0; i <= 51; i++)
	{
		randPosition = rand() % 52;
		help = cards.getCard(randPosition);
		cards.setCard(cards.getCard(i), randPosition);
		cards.setCard(help, i);
	}
}
void Deck::shuffleDeckGood()
{
	shuffleDeck();
	cards.displayShort();
	shuffleDeck();
	cards.displayShort();
	shuffleDeck();
	cards.displayShort();
}
Card* Deck::drawFromTop()
{
	std::cout << "Drawing a card..." << std::endl;
	Card* toReturn = cards.remove(0);
	cards.displayShort();
	return toReturn;
}
void Deck::putOnBottom(Card* card)
{
	if (card != nullptr)
	{
		cards.append(card);
		std::cout << "Putting on bottom.." << std::endl;
		cards.displayShort();
	}
}
bool Deck::checkIfFull()
{
	if (cards.length() == 52)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Deck::burnCard()
{
	putOnBottom(drawFromTop());
}
