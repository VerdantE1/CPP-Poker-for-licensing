#include <vector>
#include <string>
#include <iostream>


using namespace std;
using Num = unsigned int;
class Player;
class Card;

enum Kind
{
	RedHeart,
	RedSqure,
	BlackHeart,
	Blackplum
};


class Player 
{
public:


	Player(vector<Card>& cardsgiven, string name) :ownCards_(cardsgiven), name_(name) {}
	~Player() {}
	string getname() { return name_; }
	vector<Card>& getCards() { return ownCards_; }
private:
	vector<Card>& ownCards_;  
	string name_;      

};




class Card
{
public:
	
	using CardInfo = pair<int, Num>;
	Card(int kind, Num num) { kind_ = kind; num_ = num;  }
	CardInfo gettheinfo() { return make_pair(kind_, num_); } 
private:
	int kind_;  
	Num  num_;  
};

