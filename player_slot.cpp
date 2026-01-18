#include <iostream>

#include "card-value.h"
#include "card-value-tostring.h"
#include "card-color.h"
#include "card-color-tostring.h"
#include "card.h"
#include "node.h"
#include "node-list.h"
#include "test-function.h"
#include "deck.h"
#include "board.h"
#include "player.h"
#include "player_slot.h"



PlayerSlot::PlayerSlot(std::string name)
{
	this->player = new Player(name);
}
PlayerSlot::PlayerSlot()
{
	this->player = new Player("Default");
}
NodeList PlayerSlot::getHand()
{
	return hand;
}
void PlayerSlot::obtainCard(Card* card)
{
	if (hand.length() < 2)
	{
		hand.append(card);
	}
	else
	{
		std::cout << "My hand is full" << std::endl;
	}
}
NodeList* PlayerSlot::tossCards()
{
	NodeList* temp = new NodeList();
	temp->append(hand.remove(0));
	temp->append(hand.remove(0));
	return temp;
}
//void getWonPot();
//void sendMoneyToPot();
void PlayerSlot::copyBoard(NodeList boardCards)
{
	for (int i = 0; i < boardCards.length(); i++)
	{
		Card* tempCard = new Card(boardCards.getCard(i)->getValue(), boardCards.getCard(i)->getColor());
		copiedBoard.append(tempCard);

	}
}
void PlayerSlot::clearCopiedBoard()
{
	for (int i = 0; i < copiedBoard.length(); i++)
	{
		copiedBoard.remove(0);
	}
}

Player* PlayerSlot::getPlayer()
{
	return player;
}

void PlayerSlot::setDealer(bool isDealer)
{
	this->isDealer = isDealer;
}