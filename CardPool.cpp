#include "CardPool.h"
#include <algorithm>

CardPool::CardPool(vector<string> &names)
{
	//��ʼ������
	for (unsigned int  i = 0; i < 4; i++)
	{
		allCardsArray_.insert({ i,{} });
		
	}
	//��ʼ����ϣ
	kindhashmap[0] = "����";
	kindhashmap[1] = "�췽";
	kindhashmap[2] = "����";
	kindhashmap[3] = "��÷";
	
	
	//��ʼ����
	if (start_distribution() == false)   cout << "Distribution failed" << endl;;


	//������ɣ���ʼ�������
	for (unsigned int i = 0; i < 4; i++)
	{
		Player temp(allCardsArray_[i], names[i]);
		allplayer_.push_back(temp);
		
	}

		


}

bool CardPool::start_distribution()
{
	srand(time(0));  //������
	for (int i = RedHeart ; i<= Blackplum ; i ++)
	{
		for (unsigned int j = 1; j <= (unsigned int)13; j++)
		{
			distribution(i,j);
		}
	}



	return true;
}



bool CardPool::distribution(int  i ,  Num j)
{
	int chosen = rand() % 4;
	
	if (filled(allCardsArray_[chosen]))
	{
		//������ѡ����������
		for (int ii = 0; ii < 4; ii++)
		{
			if (ii == chosen || filled(allCardsArray_[ii]))  continue;
			else {
				allCardsArray_[ii].push_back(Card(i, j));
				break;
			}
			
		}
	}

	else
	{
		allCardsArray_[chosen].push_back(Card(i, j));
	}



	return true;
}


bool CardPool::filled(vector<Card>& temp)
{
	return temp.size() >= (size_t)13;
}


bool CardPool::display()
{
	for (int i = 0; i < 4; i++)
	{
		cout << allplayer_[i].getname() << " : ";
		vector<Card>& cards = allplayer_[i].getCards();
		
		for_each(cards.begin(), cards.end(), [&]( Card card)
			{
			cout << Kindto(card.gettheinfo().first) << card.gettheinfo().second << " ";
			});

		cout << endl;

	}
	return true;
}

string CardPool::Kindto(int temp)
{
	return kindhashmap[temp];
}