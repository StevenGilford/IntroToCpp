#include <iostream>
#include "Zombeis.h"

Zombei::Zombei();
{
	mEndurance = 100;
	mPower = 100;
}

Zombei::Zombei(int Health, int Strength)
{
	mEndurance = Health;
	mPower = Strength;
}

void Zombei::SetEndurance(int Health)
{
	mEndurance = Health;
}

int Zombei::GetEndurance()
{
	return mEndurance;
}

void Zombei::SetPower(int Strength)
{
	mPower = Strength;
}

int Zombei::GetPower()
{
	return mPower;
}