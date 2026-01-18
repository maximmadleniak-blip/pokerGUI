// table.cpp

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
#include "table.h"

Table::Table()
{
	deck.createDeck();
	board.unRevealAll();
	for(int i = 0; i < 10; i++)
	{
		playerSlots[i] = PlayerSlot("Somebody");
	}
	//playerSlots[2] = PlayerSlot("Himro");
}
void Table::gameStart()
{
	deck.createDeck();
	board.unRevealAll();
	roundStart();
}
void Table::roundStart()
{
	roundInProgress = true;
	deck.shuffleDeckGood();
	//setting up dealer
	for (int i = 0; i < 10; i++)
	{
		if (playerSlots[i].getPlayer() != nullptr)
		{
			playerSlots[i].setDealer(true);
			break;
		}
	}
	//dealing cards to players
	for (int i = 0; i < 10; i++)
	{
		if (playerSlots[i].getPlayer() != nullptr)
		{
			playerSlots[i].obtainCard(deck.drawFromTop());
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (playerSlots[i].getPlayer() != nullptr)
		{
			playerSlots[i].obtainCard(deck.drawFromTop());
		}
	}
	//dealing cards to board
	
	board.obtainCard(deck.drawFromTop());
	board.obtainCard(deck.drawFromTop());
	board.obtainCard(deck.drawFromTop());
	deck.burnCard();
	board.obtainCard(deck.drawFromTop());
	deck.burnCard();
	board.obtainCard(deck.drawFromTop());
}
bool Table::getRoundInProgress()
{
	return roundInProgress;
}

void Table::roundEnd()
{

}
void Table::gameEnd()
{

}
void Table::nextRound()
{

}
NodeList Table::getBoardCards()
{
	return board.getBoardCards();
}
bool Table::getBoardFlopRevealed()
{
	return board.isFlopRevealed();
}

bool Table::getBoardTurnRevealed()
{
	return board.isTurnRevealed();
}

bool Table::getBoardRiverRevealed()
{
	return board.isRiverRevealed();
}
void Table::setBoardFlopRevealed()
{
	board.revealFlop();
}

void Table::setBoardTurnRevealed()
{
	board.revealTurn();
}

void Table::setBoardRiverRevealed()
{
	board.revealRiver();
}

void Table::setBoardAllUnrevealed()
{
	board.unRevealAll();
}
PlayerSlot* Table::getSlotPosition(int position)
{
	PlayerSlot* temp = &playerSlots[position];
	return temp;
}

Deck& Table::getDeck()
{
	return deck;
}

NodeList Table::clearBoard()
{
	NodeList temp = board.clearBoard();
	for (int i = 0; i < temp.length(); i++)
	{
		deck.putOnBottom(temp.remove(0));
	}
	return temp;
}
