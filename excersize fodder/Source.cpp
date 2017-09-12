#include <iostream>

//struct Items
//{
//	char mName[255];
//	int mCost;
//	int mQuantity;
//};
//struct Shop
//{
//	int mTotalGold;
//	Items mItems[5];
//};
//void PrintShopInventory(Shop ShopData)
//{
//	std::cout << "current shop funds: " << ShopData.mTotalGold << std::endl;
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "Item Name: " << ShopData.mItems[i].mName << std::endl;
//		std::cout << "Item Cost: " << ShopData.mItems[i].mCost << std::endl;
//		std::cout << "Stock    : " << ShopData.mItems[i].mQuantity << std::endl;
//	}
//}

//struct Vehicle
//{
//	int mNumTires;
//	int mNumSeats;
//	char mMakerName[255];
//	char mModelName[255];
//	int mModelYear;
//};
//
////Function printing vehicle information

//void CarInfo(Vehicle vehicle)
//{
//	std::cout << "Maker       :" << vehicle.mMakerName << std::endl;
//	std::cout << "Model Name  :" << vehicle.mModelName << std::endl;
//	std::cout << "Model Year  :" << vehicle.mModelYear << std::endl;
//	std::cout << "Number Tires:" << vehicle.mNumTires << std::endl;
//	std::cout << "Number Seats:" << vehicle.mNumSeats << std::endl;
//
//}

//struct Student
//{
//	char mName[255];
//	char ID
//	int mAge;
//};


//struct Player
//{
//	int mHealth;
//	int mResource;
//	int mStrength;
//	int mLevel;
//	float mMovementSpeed;
//	int mArmor;
//};
//
//Player CreationScreen();
//Player CreationScreen(int health, int strength, float movementspeed);
//
//struct Enemy
//{
//	float mHealth;
//	int mAttackPower;
//};
//

int main()
{	//Vehicle MatthewCar = { 4, 2, "Nissan", "Frontier", 2001 };
	//Vehicle LukeCar = { 4, 4, "Subaru", "BRZ", 2014 };
	//Vehicle StevenCar = { 2, 1, "Mongoose", "Legion L40", 2017 }; //I actually walk, this is a fun example or filler.
	//Vehicle ebayAutomotive[15];
	//ebayAutomotive[0] = { 2, 4, "Porshe", "911", 2016 };
	//ebayAutomotive[1] = { 2, 4, "McLaren", "720s", 2018 };
	//ebayAutomotive[2] = { 4, 4, "Honda", "Civic", 2017 };
	//ebayAutomotive[3] = { 4,4,"Nissan", "Sentra", 2012 };
	//ebayAutomotive[4] = { 2,4, "Ford", "Mustang", 1965 };
	//ebayAutomotive[5] = { 2, 4, "Audi", "S8", 2017 };
	//ebayAutomotive[6] = { 2, 2, "Ford", "GT", 2017 };
	//ebayAutomotive[7] = { 2,4,"Toyota", "Supra", 1998 };
	//ebayAutomotive[8] = { 4,4,"Ford", "Fiesta", 2005 };
	//ebayAutomotive[9] = { 2, 1, "YuGiOh", "Duel Runner", 2025 };
	//ebayAutomotive[10] = { 2, 3, "UNSC", "Warthog", 2500 };
	//ebayAutomotive[11] = { 2, 1, "Moongoose", "Legion L40", 2017 };
	//ebayAutomotive[12] = { 2, 2, "Ferrari", "La Farrari", 2015 };
	//ebayAutomotive[13] = { 2, 2, "TVR", "Sergis", 2013 };
	//ebayAutomotive[14] = { 1, 0, "US Army", "M1 Abrams", 2018 };
	//bool carFound = false;
	//char userInput[255];
	//std::cout << "Emter a vehicle maker.\n";
	//std::cin >> userInput;
	//for (int i; i < 15; i++)
	//{
	//	if (strcmp(userInput, ebayAutomotive[i].mMakerName) == 0);
	//	{
	//		CarInfo(ebayAutomotive[i]);
	//		std::cout << std::endl;
	//	}
	//	if (carFound == false)
	//		std::cout << "no results found." << std::endl;
	//}

	/*Student classRoom[7];
			classRoom[0] = { "Zach", "s171", 18 };
			classRoom[1] = { "Luke", "s172", 18 };
			classRoom[2] = { "Matthew", "s173", 18 };
			classRoom[3] = { "TJ", "s174", 21 };
			classRoom[4] = { "Steven", "s175", 19 };
			classRoom[5] = { "Ralenski", "s176", 20 };
			classRoom[6] = { "Brett", "s177", 18 };
		
			int oldStudent = 0;
			int greatestAge = classRoom[0].mAge;
			for (int i = 0; i < 7; i++)
			{
				if (classRoom[i].mAge > greatestAge)
					greatestAge = classRoom[i].mAge;
				    oldStudent = i;
			}
			std::cout << "the oldest student is " << classRoom[greatestAge].mName << ".  Their ID is " << classRoom[greatestAge].mId 
				<< ".  Their age is " << classRoom[greatestAge].mAge << "\n";*/

	//	Player Matthew = {};
		//	Player Dan = CreationScreen();
		//	Player Don = CreationScreen(42, 12, 9);
		//	Dan = Don;
		//
		//	Enemy Drake{ 8.8f, 15};
		//	Enemy Noire{95.2f, 2};
		//
		//	while (Drake.mHealth > 0 && Noire.mHealth > 0)
		//	{
		//		Drake.mHealth -= Noire.mAttackPower;
		//		Noire.mHealth -= Drake.mAttackPower;
		//	}
		//    system("pause");

	/*Shop blacksmith = { 2000 };
	blacksmith.mItems[0] = { "Stick", 1, 1 };
	blacksmith.mItems[1] = { "Wand", 5, 1 };
	blacksmith.mItems[2] = { "Dagger", 15, 1 };
	blacksmith.mItems[3] = { "Sword", 30, 1 };
	blacksmith.mItems[4] = { "Excaliber", 1500, 1 };
	PrintShopInventory(blacksmith);
	blacksmith.mItems[0].mCost = 6;
	std::cout << "Changing Prices" << std::endl;
	PrintShopInventory(blacksmith);
	system("pause");*/
}

//
//Player CreationScreen()
//{
//	Player newCreation = {};
//	return newCreation;
//}
//
//Player CreationScreen(int health, int strength, float movementspeed)
//{
//	Player newCreation = {health, 0, strength, 0, movementspeed, 0};
//	return newCreation;
//}
//
