#pragma once

class Zombie
{
private:
	int mHealth;
	int mStrength;
public:
	Zombie();
	Zombie(int life, int power);
	void SetHealth(int life);
	int GetHealth();
	void SetStrength(int power);
	int GetStrength();

};