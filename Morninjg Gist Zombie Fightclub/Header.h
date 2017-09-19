#pragma once

class Zombie
{
private:
	int mHealth;
	int mAttackPower;
public:
	Zombie();
	Zombie(int hp, int atk);
	int GetHealth();
	int GetAttack();
	void TakeDamage(int amount);
	bool IsDead();
};