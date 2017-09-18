#pragma once

class Zombei
{
private:
	int mEndurance;
	int mPower;
public:
	Zombei();
	Zombei(int Health, int Power);
	void SetEndurance(int Health);
	int GetEndurance();
	void SetPower(int Strength);
	int GetPower();

};