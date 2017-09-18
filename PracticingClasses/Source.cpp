#include <iostream>
#include "Zombie.h"

Zombie::Zombie()
{
	mHealth = 100;
	mStrength = 100;
}
Zombie::Zombie(int life, int power)
{
	mHealth = life;
	mStrength = power;
}

void Zombie::SetHealth(int life)
{
	mHealth = life;
}

int Zombie::GetHealth()
{
	return mHealth;
}

void Zombie::SetStrength(int power)
{
	mStrength = power;
}

int Zombie::GetStrength()
{
	return mStrength;
}


