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

NodeList Board::getBoardCards()
{
	return boardCards;
}
void Board::obtainCard(Card* card)
{
	if (card == nullptr)
	{
		std::cout << "Card is null pointer"<<std::endl;
		return;
	}
	if (boardCards.length() == 5)
	{
		std::cout << "Board Cards are full" << std::endl;
		return;
	}
	boardCards.append(card);
}
NodeList Board::clearBoard()
{
	NodeList result;
	int count=boardCards.length();
	for (int i = 0; i < count; i++)
	{
		result.append(boardCards.remove(0));
	}
	unRevealAll();
	return result;
}
void Board::revealFlop()
{
	flopRevealed = true;
}
void Board::revealTurn()
{
	turnRevealed = true;
}
void Board::revealRiver()
{
	riverRevealed = true;
}
void Board::unRevealAll()
{
	flopRevealed = false;
	turnRevealed = false;
	riverRevealed = false;
}
NodeList Board::getFlop()
{
	NodeList temp;
	if (flopRevealed)
	{
		temp.append(boardCards.getCard(0));
		temp.append(boardCards.getCard(1));
		temp.append(boardCards.getCard(2));
	}
	return temp;
}
Card* Board::getTurn()
{
	if (turnRevealed)
	{
		return boardCards.getCard(3);
	}
	return nullptr;
}
Card* Board::getRiver()
{
	if (riverRevealed)
	{
		return boardCards.getCard(4);
	}
	return nullptr;
}
bool Board::isFlopRevealed()
{
	return flopRevealed;
}
bool Board::isTurnRevealed()
{
	return turnRevealed;
}
bool Board::isRiverRevealed()
{
	return riverRevealed;
}

bool Board::checkIfFull()
{
	if (boardCards.length()==5)
	{
		return true;
	}
	return false;
}