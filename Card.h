#include <vector>
#include <string>
#include <iostream>


using namespace std;
<<<<<<< HEAD
using Num = unsigned int; //牌数的类型
=======
using Num = unsigned int;
>>>>>>> a52233db090a22eeac4c9c298b63cca705c3fa3b
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
<<<<<<< HEAD
	vector<Card>& ownCards_;  //玩家拥有的牌 
	string name_;       //玩家姓名
=======
	vector<Card>& ownCards_;  
	string name_;      
>>>>>>> a52233db090a22eeac4c9c298b63cca705c3fa3b

};




class Card
{
public:
	
	using CardInfo = pair<int, Num>;
	Card(int kind, Num num) { kind_ = kind; num_ = num;  }
<<<<<<< HEAD

	CardInfo gettheinfo() { return make_pair(kind_, num_); }  //获取牌信息
private:
	int kind_;  //花色
	Num  num_;   //数字
=======
	CardInfo gettheinfo() { return make_pair(kind_, num_); } 
private:
	int kind_;  
	Num  num_;  
>>>>>>> a52233db090a22eeac4c9c298b63cca705c3fa3b
};

