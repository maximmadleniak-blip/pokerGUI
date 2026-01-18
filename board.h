// board.h

#ifndef BOARD_H
#define BOARD_H
class Board
{
private: NodeList boardCards;
private: bool flopRevealed;
private: bool turnRevealed;
private: bool riverRevealed;

public: bool isFlopRevealed();
public: bool isTurnRevealed();
public: bool isRiverRevealed();
public: NodeList getBoardCards();
public: void obtainCard(Card* card);
public: NodeList clearBoard();
public: void revealFlop();
public: void revealTurn();
public: void revealRiver();
public: void unRevealAll();
public: NodeList getFlop();
public: Card* getTurn();
public: Card* getRiver();
public: bool checkIfFull();
};
#endif