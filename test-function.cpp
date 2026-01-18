// test-function.cpp

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

void testFunction() {
    
    // Value testing
    CardValue value1 = three;
    
    std::cout << cardValueToString(value1) << std::endl;
    std::cout << cardValueToStringShort(value1) << std::endl;
    
    // Color testing
    CardColor color1 = diamonds;
    
    std::cout << cardColorToString(color1) << std::endl;
    std::cout << cardColorToStringShort(color1) << std::endl;
    
    // Card testing
    Card card1 = Card(value1, color1);
    
    std::cout << "the " << cardValueToString( card1.getValue() );
    std::cout << " of " << cardColorToString( card1.getColor() );
    std::cout << std::endl;
    
    std::cout << cardValueToStringShort( card1.getValue() );
    std::cout << cardColorToStringShort( card1.getColor() );
    std::cout << std::endl;
    
    // Node testing
    Node node1;
    node1.setCard(&card1);
    
    std::cout << "value from node1: ";
    std::cout << cardValueToString( node1.getCard()->getValue() );
    std::cout << std::endl;
    std::cout << "color from node1: ";
    std::cout << cardColorToString( node1.getCard()->getColor() );
    std::cout << std::endl;
    
    // Node linking testing
    Card card2 = Card(jack, spades);
    Node node2;
    node2.setCard(&card2);
    
    node1.setNext(&node2);
    
    std::cout << "value from node1->next: ";
    std::cout << cardValueToString( node1.getNext()->getCard()->getValue() );
    std::cout << std::endl;
    std::cout << "color from node1->next: ";
    std::cout << cardColorToString( node1.getNext()->getCard()->getColor() );
    std::cout << std::endl;
    
    // NodeList testing
    NodeList nodeList;
    std::cout << "length() : " << nodeList.length() << std::endl;
    nodeList.display();
    
    nodeList.append(&card1);
    nodeList.display();
    
    nodeList.append(&card2);
    nodeList.display();
    
    nodeList.append(new Card(seven, diamonds));
    nodeList.display();
    
    nodeList.append(new Card(ace, clubs));
    nodeList.append(new Card(two, spades));
    nodeList.append(new Card(two, hearts));
    nodeList.display();
    
    nodeList.insert(new Card(king, hearts), 2);
    nodeList.display();
    
    nodeList.remove(2);
    nodeList.display();
    
    nodeList.remove(3);
    nodeList.remove(3);
    nodeList.display();
    nodeList.displayShort();

    //deck testing
    Deck deck;
    deck.createDeck();
    deck.shuffleDeckGood();
    deck.drawFromTop();
    //deck.putOnBottom(deck.drawFromTop());
    deck.burnCard();
    std::cout<<deck.checkIfFull()<<std::endl;

    //board testing
    Board board;
    board.getBoardCards();
    board.obtainCard(new Card (three,diamonds));
    board.obtainCard(new Card (four,hearts));
    board.obtainCard(new Card(four, hearts));
    board.obtainCard(nullptr);
    board.obtainCard(new Card(four, hearts));
    board.obtainCard(new Card(four, hearts));
    board.obtainCard(new Card(four, hearts));
    board.getBoardCards().displayShort();
    board.clearBoard();
    board.getBoardCards().displayShort();
    std::cout <<"isFloprevealed() "<< board.isFlopRevealed() << std::endl;
    board.revealFlop();
    std::cout << "isFloprevealed() " << board.isFlopRevealed() << std::endl;
    std::cout << "isTurnrevealed() " << board.isTurnRevealed() << std::endl;
    board.revealTurn();
    std::cout << "isTurnrevealed() " << board.isTurnRevealed() << std::endl;
    std::cout << "isRiverrevealed() " << board.isRiverRevealed() << std::endl;
    board.revealRiver();
    std::cout << "isRiverrevealed() " << board.isRiverRevealed() << std::endl;
    board.obtainCard(new Card(three, diamonds));
    board.obtainCard(new Card(four, hearts));
    board.obtainCard(new Card(four, hearts));
    board.obtainCard(new Card(four, hearts));
    board.obtainCard(new Card(four, hearts));
    board.getFlop().displayShort();
    std::cout<< board.getTurn() <<std::endl;
    std::cout << board.getRiver() << std::endl;
    board.unRevealAll();
    std::cout << "isFloprevealed() " << board.isFlopRevealed() << std::endl;
    std::cout << "isTurnrevealed() " << board.isTurnRevealed() << std::endl;
    std::cout << "isRiverrevealed() " << board.isRiverRevealed() << std::endl;

    board.getFlop().displayShort();
    board.revealTurn();
    std::cout<<cardValueToString(board.getTurn()->getValue())<<" ";
    std::cout << cardColorToString(board.getTurn()->getColor())<<std::endl;
    board.revealRiver();
    std::cout << cardValueToString(board.getRiver()->getValue()) << " ";
    std::cout << cardColorToString(board.getRiver()->getColor()) << std::endl;
    board.checkIfFull();
    board.getBoardCards();

    //player testing
    Player player("himro");

    //player slot testing
    PlayerSlot playerSlot = PlayerSlot("himro");
    playerSlot.obtainCard(new Card(two, diamonds));
    playerSlot.obtainCard(new Card(two, diamonds));
    playerSlot.obtainCard(new Card(two, diamonds));

    playerSlot.getHand().displayShort();
    playerSlot.tossCards();
    playerSlot.getHand().displayShort();



}
