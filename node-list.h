// node-list.h

#ifndef NODE_LIST_H
#define NODE_LIST_H

class NodeList {
    
    private: Node* head;
    private: Node* tail;
    
    public: Card* getHead();
    public: Card* getTail();
    public: void setHeadNull();
    public: void setTailNull();
    
    // constructor
    public: NodeList();
    
    public: void append(Card* card);
    
    public: int length();
    
    public: Node* getNode(int position);
    
    public: Card* getCard(int position);

    public: void setCard(Card* card, int position);
    
    public: void insert(Card* card, int position);
    
    public: void insert(Card* card);
    
    public: Card* remove(int position);
    
    public: void display();
    
    public: void displayShort();
};

#endif
