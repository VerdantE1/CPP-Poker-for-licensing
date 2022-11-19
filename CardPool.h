#pragma once


#include <unordered_map>
#include "Card.h"

using PlayerArray = vector<Player>;


class CardPool
{
public:
	CardPool(vector<string>&);
	bool start_distribution(); //开始分牌
	bool display(); //显示所有的牌

private:
	
	string Kindto(int);
	bool distribution(int,unsigned);
	bool filled(vector<Card>&);
	PlayerArray allplayer_;
	unordered_map<unsigned int, vector<Card>> allCardsArray_; //hashmap to 4 cardsArray; (0~3)
	unordered_map<int, string> kindhashmap; //hashmap int to string;

	

};

