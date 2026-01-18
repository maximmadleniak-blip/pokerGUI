// table.h

#ifndef TABLE_H
#define TABLE_H

#include "deck.h"
class Table
{

	private:Deck deck;
	private:Board board;
	private:PlayerSlot playerSlots[10];
	public: PlayerSlot* getSlotPosition(int position);
	public:Table();
	public: void roundStart();
	private: bool roundInProgress;
	public: bool getRoundInProgress();
	public: void roundEnd();
	private: bool gameInProgress;
	public: void gameStart();
	public: void gameEnd();
	public: void nextRound();
	public: NodeList getBoardCards();
	public: bool getBoardFlopRevealed();
	public: bool getBoardTurnRevealed();
	public: bool getBoardRiverRevealed();
	public: void setBoardFlopRevealed();
	public: void setBoardTurnRevealed();
	public: void setBoardRiverRevealed();
	public: void setBoardAllUnrevealed();
	public: Deck& getDeck();
	public: NodeList clearBoard();
	

	




};













#endif
