#include <iostream>
int main()
{
	//Week 1 Assignment:
	//What you will need to know
	//	- Variables
	//	- Conditionals
	//	- Loops
	//	- arrays
	//	Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
	//	each day during a typical week.Write a program that stores this information in a
	//	2 dimensional 3 x 7 array, where each row represents a different dragon and each column
	//	represents a different day of the week.Then it should create a report that includes the
	//	following information:
	//  - Average amount of food eaten per day by all the dragons together
	//	- Average amount of food eaten per day by any one dragon
	//	- The greatest amount of food eaten during one day and which dragon that was
	//	- The least amount of food eaten during one day and which dragon that was

	int Bob;
	int Cat;
	int Scott;
	int bobAverageDailyFood;
	int catAverageDailyFood;
	int scottAverageDailyFood;
	int averageFoodDailyTogether;
	int dragonFood[3][7] = { { 10, 1, 11, 4, 0, 20, 5 },
	{ 5, 17, 1, 2, 6, 12, 8 },                           //data is already here, so no need for
	{ 3, 8, 9, 15, 9, 4, 9 } };                          //"step one" of inputting data in Friday review
	

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Dragon" << i << "|";
		for (int u = 0; u < 7; u++)
		{
			std::cout << dragonFood[i][u] << "|";
		}
		std::cout << averageFoodDailyTogether;

	}
	std::cout << std::endl;

	int totalFoodSum;
	for (int i = 0; i < 3; i++)
	{
		for (int u = 0; u < 7; u++)
		{
			totalFoodSum += dragonFood[i][u];
		}
	}
	float avg = (float)(totalFoodSum)/21;

	std::cout << "This is the total average of all food the dragons ate." << avg << std::endl;

	for (int i; i < 3; i++)
	{
		int indivDragonSum = 0;
		for (int u; u < 7; u++)
		{
			indivDragonSum += dragonFood[i][u];
		}
		float averPerday = (float)(indivDragonSum) / 7;
		std::cout << "The Average Food eaten per Day by " << i << ":" << averPerday << std::endl;
	}
	
	int numDay = 0;
	int fatDragon = 0;
	int biggestAmount = dragonFood[0][0];
	for(int i; i < 3; i++)
	{
		for (int u; u < 7; u++)
		{
			if (dragonFood[i][u] > biggestAmount)
				biggestAmount = dragonFood[i][u];
			fatDragon = i;
			numDay = u;
		}
	}
	std::cout <<  "The fattest dragon is " << fatDragon << "and it ate " << biggestAmount << "in one day.\n";


	int numbeDay = 0;
	int skeleDragon = 0;
	int smallAmount = dragonFood[0][0];
	for (int i; i < 3; i++)
	{
		for (int u; u < 7; u++)
		{
			if (dragonFood[i][u] < smallAmount)
				smallAmount = dragonFood[i][u];
			skeleDragon = i;
			numbeDay = u;
		}
	}
	std::cout << "The thinnest dragon is " << skeleDragon << "and it ate " << smallAmount << "in one day.\n";

	system; ("pause");
}