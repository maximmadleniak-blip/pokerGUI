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


//void Player::checkBoard(NodeList boardCards)
//{
	
//}
std::string Player::sendAction()
{
	return "Im not finished";
}
Player::Player(std::string name)
{
	this->name = name;
}
Player::Player()
{
	this->name = "default";
}
//void Player::getWinPot();
//public: NodeList getHand();
//public: std::string getName();
