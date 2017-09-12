#include <iostream>
#include "Player.h"
#include "Vehicle.h"
#include "Point2D.h"


int main()
{

	Point2D Test;
	Point2D Test2(4.6f, 5.5f);
	Point2D Test3 = Test.Add(Test2);
	Point2D Test4 = Test3.Add(Test2);

	Player playerOne;
	Player playerTwo(Test2, "Steven");
	Player playerThree(Point2D(1, 5), "Bob");

	/*Player steven;
	steven.mHealth = 100;
	steven.mGender = true;
	steven.mLevel = 8;
	steven.mResource = 4;

	steven.TakeDamage(41);

	Vehicle Honda;
	Honda.mNumTires = 4;
	Honda.mNumDoors = 5;
	Honda.mNumSeats = 4;
	strcpy_s(Honda.mBrandType, "Azura");
	strcpy_s(Honda.mModelDesignation, "Unknown");
	Honda.mYearMade = 2008;
	Honda.mAllDoorsOpen = false;
	Honda.mEngineStart = true;

	Honda.EngineOn( false, true);*/
	
	system("pause");
}