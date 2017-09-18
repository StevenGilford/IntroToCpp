#include "Zombie.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	Zombie Zumo;
	Zombie zomNumOne(100, 50);
	while (zomNumOne.GetHealth() > 0 && Zumo.GetHealth() > 0)
	{
		Zumo.SetHealth(Zumo.GetHealth() - zomNumOne.GetStrength());
		zomNumOne.SetHealth(zomNumOne.GetHealth() - Zumo.GetStrength());
	}
    
	Zombie zombieArray[5];
	for (int i = 0; i < 5; i++)
	{
		zombieArray[i].SetHealth(rand() % 10000);
		zombieArray[i].SetStrength(rand() % 10000);

	}
	
	zombieArray[5];
	zombieArray[].GetHealth() - zombieArray;


	system("pause");
}