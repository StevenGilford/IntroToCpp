#include "Zombeis.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));

	Zombei ZombeiArray[7];
	for (int i = 0; i < 7; i++)
	{
		ZombeiArray[i].SetEndurance(rand() % 10000);
		ZombeiArray[i].SetPower(rand() % 10000);
	}
	
	system("pause");
}