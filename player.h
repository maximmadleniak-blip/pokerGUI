#ifndef PLAYER_H
#define PLAYER_H


class Player
{
private: std::string name;
private: NodeList hand;

//public: std::string getName();
//public: void checkBoard(NodeList boardCards);
public: std::string sendAction();
public: Player(std::string name);
public: Player();
};



#endif