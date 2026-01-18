// node.cpp

#include "card-value.h"
#include "card-color.h"
#include "card.h"
#include "node.h"

Card* Node::getCard() { return card; }

void Node::setCard(Card* card) { this->card = card; }

Node* Node::getNext() { return next; }

void Node::setNext(Node* next) { this->next = next; }

// constructor
Node::Node() {}
