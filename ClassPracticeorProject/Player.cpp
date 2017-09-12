#include "Player.h"
#include <iostream>

Player::Player()
{
	mPos = Point2D();
	strcpy_s(mName, "Default");
	mLevel = 1;
	
}

//void Player::TakeDamage(int amount)
//{
//	mHealth -= amount;
//}
//
//void Player::ModifyLevel(int value)
//{
//	mLevel -= 2;
//}