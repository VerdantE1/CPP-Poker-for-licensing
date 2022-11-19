#include "CardPool.h"


int main()
{
	vector<string> playernames = { "李延德","余风","李加豪","邝钟强" };
	CardPool m(playernames);


	m.display();

	return 0;
}