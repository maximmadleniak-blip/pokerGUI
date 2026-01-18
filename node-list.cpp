// node-list.cpp

#include <iostream>

#include "card-value.h"
#include "card-value-tostring.h"
#include "card-color.h"
#include "card-color-tostring.h"
#include "card.h"
#include "node.h"
#include "node-list.h"

Card* NodeList::getHead() { return head->getCard(); }
Card* NodeList::getTail() { return tail->getCard(); }

// constructor
NodeList::NodeList() {
    head = NULL;
    tail = NULL;
}

void NodeList::append(Card* card) {
    
    Node* temp = new Node();
    temp->setCard(card);
    temp->setNext(NULL);
    
    if(head == NULL) {
        head = temp;
        tail = temp;
        return;
    }
    
    tail->setNext(temp);
    tail = temp;
}

int NodeList::length() {
    
    if(head == NULL) return 0;
    if(head->getNext() == NULL) return 1;
    
    int count = 1;
    Node* temp = head;
    
    while(temp->getNext() != NULL) {
        count++;
        temp = temp->getNext();
    }
    
    return count;
}

Node* NodeList::getNode(int position) {
    
    if(position < 0) return NULL;
    if(position >= length()) return NULL;
    if(head == NULL) return NULL;
    
    Node* current = head;
    
    for(int i = 0; i < position; i++) {
        current = current->getNext();
    }
    
    return current;
}

Card* NodeList::getCard(int position) {
    
    if(position < 0) return NULL;
    if(position >= length()) return NULL;
    if(head == NULL) return NULL;
    
    return getNode(position)->getCard();
}

void NodeList::insert(Card* card, int position) {
    
    Node* temp = new Node();
    temp->setCard(card);
    temp->setNext(NULL);
    
    if(position < 0) {
        temp->setNext(head);
        head = temp;
        return;
    }
    
    if(position == 0) {
        temp->setNext(head->getNext());
        head = temp;
        return;
    }
    
    if(position >= length()) {
        append(card);
        return;
    }
    
    temp->setNext(getNode(position));
    getNode(position - 1)->setNext(temp);
}

void NodeList::insert(Card* card) {
    
    insert(card, 0);
}

Card* NodeList::remove(int position) {
    
    if(position < 0) return nullptr;
    if(position >= length()) return nullptr;

    Card* toReturn;
    
    // if we are on head
    if(position == 0) {
        toReturn = head->getCard();
        head = head->getNext();
        return toReturn;
    }
    
    // if we are on tail
    if(getNode(position)->getNext() == NULL) {
        toReturn = tail->getCard();
        tail = getNode(position-1);
        tail->setNext(NULL);
        return toReturn;
    }

    //if only one card
    if(length() == 1) {
        toReturn = head->getCard();
        head = NULL;
        tail = NULL;
        return toReturn;
	}

    //if we have two cards
    if (length() == 2)
    {
        if (position == 0)
        {
            toReturn = head->getCard();
            head = tail;
            return toReturn;
        }
        else
        {
            toReturn = tail->getCard();
            tail = head;
            tail->setNext(NULL);
            return toReturn;
		}
    }
    
    // if we are in the middle
    toReturn = getNode(position)->getCard();
    getNode(position - 1)->setNext(getNode(position + 1));
    return toReturn;
}

void NodeList::setHeadNull()
{
    head = nullptr;
}

void NodeList::setTailNull()
{
    tail = nullptr;
}

void NodeList::display() {
    
    std::cout << length() << " [ ";
    
    if(length() == 0) {
        std::cout << "]\n";
        return;
    }
    
    for (int i = 0; i < length(); i++) {
        Card* card = getCard(i);
        
        std::string cardValue = cardValueToString(card->getValue());
        std::string cardColor = cardColorToString(card->getColor());
        
        std::string result = "the " + cardValue + " of " + cardColor;
        
        if(i != (length() - 1) ) result += ",";
        
        result += " ";
        
        std::cout << result;
    }
    
    std::cout << "]\n";
}

void NodeList::displayShort() {
    
    std::cout << length() << " [ ";
    
    if(length() == 0) {
        std::cout << "]\n";
        return;
    }
    
    for (int i = 0; i < length(); i++) {
        Card* card = getCard(i);
        
        std::string cardValue = cardValueToStringShort(card->getValue());
        std::string cardColor = cardColorToStringShort(card->getColor());
        
        std::string result = cardValue + cardColor;
        
        if(i != (length() - 1) ) result += ",";
        
        result += " ";
        
        std::cout << result;
    }
    
    std::cout << "]\n";
}

 void NodeList::setCard(Card* card, int position)
 {
     getNode(position)->setCard(card);
 }
