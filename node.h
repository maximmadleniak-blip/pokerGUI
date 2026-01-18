// node.h

#ifndef NODE_H
#define NODE_H

class Node {
    
    private: Card* card;
    private: Node* next;
    
    public: Card* getCard();
    public: void setCard(Card* card);
    
    public: Node* getNext();
    public: void setNext(Node* next);
    
    // constructor
    public: Node();
    
};

#endif

