#include <vector>
#include <string>
#include <iostream>


using namespace std;
<<<<<<< HEAD
using Num = unsigned int; //����������
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
	vector<Card>& ownCards_;  //���ӵ�е��� 
	string name_;       //�������
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

	CardInfo gettheinfo() { return make_pair(kind_, num_); }  //��ȡ����Ϣ
private:
	int kind_;  //��ɫ
	Num  num_;   //����
=======
	CardInfo gettheinfo() { return make_pair(kind_, num_); } 
private:
	int kind_;  
	Num  num_;  
>>>>>>> a52233db090a22eeac4c9c298b63cca705c3fa3b
};

