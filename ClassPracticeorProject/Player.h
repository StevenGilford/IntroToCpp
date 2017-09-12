#pragma once
#include "Point2D.h"

class Player
{
private:
	Point2D mPos;
	char mName[255];
	int mLevel;
		
public:
	Player();
	Player(Point2D pos, char name[255]);
	void MovePlayer(Point2D direction);
	bool LevelUp();

	/*int mHealth;
	char mName[255];
	int mResource;
	int mLevel; 
	bool mGender;

	void TakeDamage(int amount);
	void ModifyLevel(int value);*/
};
