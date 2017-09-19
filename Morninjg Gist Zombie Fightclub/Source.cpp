#include <iostream>
#include "Header.h"

Zombie::Zombie()
{
	int mHealth = 100;
	int mAttackPower = 100;
}

	

	Zombie::Zombie()
	{

	}
	Zombie::Zombie(int hp, int atk)
	{
		mHealth = hp;
		mAttackPower = atk;
	}
	int Zombie::GetHealth()
	{
		return mHealth;
	}
	int Zombie::GetAttack()
	{
		return mAttackPower;
	}
	void Zombie::TakeDamage(int amount)
	{
		amount = mHealth - mAttackPower;
		return;
	}
	bool Zombie::IsDead()
	{
		if (mHealth > 0)
		{
			return false;
		}
		else {
			return true;
		}
		
	}
