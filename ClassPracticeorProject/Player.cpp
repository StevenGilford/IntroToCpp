#include "Player.h"
#include "Point2D.h"
#include <iostream>

Player::Player()
{

	mPos = Point2D();
	strcpy_s(mName, "Default");
	mLevel = 1;

}

Player::Player(Point2D pos, char name[255])
{

}

void Player::MovePlayer(Point2D direction)
{
	int tilesMoved;
	Point2D Point2D::Add(Point2D point);
	<mX, mY> + <X, Y> = <newPoint.mX, newPoint,mY>;
	return;
}

bool Player::LevelUp()
{
	int levelCap = 110;
	//return (mLevel < 110) ? mLevel++, true : false;
	if (mLevel < 110)
	{
		std::cout << "Level Up!" << std::endl;
		mLevel + 1;
		return true;
	}
	else
	return false;
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