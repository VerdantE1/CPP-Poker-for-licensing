#include <vector>
#include <string>
#include <iostream>


using namespace std;
using Num = unsigned int; //牌数的类型
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
	vector<Card>& ownCards_;  //玩家拥有的牌 
	string name_;       //玩家姓名

};




class Card
{
public:
	
	using CardInfo = pair<int, Num>;
	Card(int kind, Num num) { kind_ = kind; num_ = num;  }

	CardInfo gettheinfo() { return make_pair(kind_, num_); }  //获取牌信息
private:
	int kind_;  //花色
	Num  num_;   //数字
};

