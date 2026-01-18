#ifndef PLAYER_SLOT_H
#define PLAYER_SLOT_H


class PlayerSlot
{
	
	private: Player* player;
	private: NodeList hand;
	private: NodeList copiedBoard;
	private: bool isDealer;
	// Player balance;
	public: NodeList getHand();
	public: void obtainCard(Card* card);
	public: NodeList* tossCards();
	public: void getWonPot();
	public: void sendMoneyToPot();
	public: void copyBoard(NodeList boardCards);
	public: void clearCopiedBoard();
	public: PlayerSlot(std::string name);
	public: PlayerSlot();
	public: Player* getPlayer();
	public: void setDealer(bool isDealer);





};


#endif
