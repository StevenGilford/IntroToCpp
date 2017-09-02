#include <iostream>
void newArrays();
int arrayUsage();
int loopingWithArrays();
int sizeArrayDisplay();
int arraysForNumbers();
int main()
{
	//1. Declare an array for each of the following(size of array does not matter unless
	//sepcified).
	//a. heights of students

	float studentHeight[13];

	//b. age of parents

	int parentalAges[26];

	//c. true of false questions

	bool questionList[20];

	//d. letters of the alphabet

	char Alphabet[26];

	//2. What is the size in memory of the following arrays
	//a. 
	float heights[5];

	//The memory size is 20 bytes.

	//b. 
	int ages[10];

	//The memory size is 40 bytes.

	//c. 
	char letters[26];

	//the memory size is 26 bytes.

	//3. Declare an array with the values 1 - 10;

	int Counter[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//4. Using the array created in problem 3 print the 5th index.
	std::cout << Counter[5];

	//5. Using a loop, populate an array of size 10 with the values 10 - 1.

	int deCounter[11];
	int numeral = 10;
	for (int i = 0; i < 11; i++)
	{
		deCounter[i] = numeral;
		numeral -= 1;
	}
	
	//6. Create a an array of size five then ask the user to input five 		
	//number into the array. Display the largest and smallest numbers 
	//to the console

	int simpleArray[5];
	int a = 0;
	int b = 0;
	int i;
	std::cout << "Please type 5 numbers";
	std::cin >> simpleArray[0];
	std::cin >> simpleArray[1];
	std::cin >> simpleArray[2];
	std::cin >> simpleArray[3];
	std::cin >> simpleArray[4];
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			a = simpleArray[i];
			b = simpleArray[i];
		}
		else
		{
			if (simpleArray[i] < a)
				a = simpleArray[i];
			if (simpleArray[i] > b)
				b = simpleArray[i];
		}
	}

	std::cout << "smallest is " << a << std::endl;
	std::cout << "largest is " << b << std::endl;

	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.

	int gridArray[3][3];
	int z;
	int s;
	for (int z = 0; z < 3; z++)
	{
		for (int s = 0; s < 3; s++)
		{
			gridArray[3][3] = (z+1)*(s+1);
	
		}
	}
	
	system("pause");

}
//1. Declare an array for each of the following(size of array does not matter unless
//sepcified).
void newArrays()
{
	//a. heights of students

	float tallnessOfStudents[32];

	//b. age of parents

	int GuardianAges[32];

	//c. true of false questions

	bool listOfQuiz[45];

	//d. letters of the alphabet

	char writingSystemTools[26];
	return;
}
//3. Declare an array with the values 1 - 10;
//4. Using the array created in problem 3 print the 5th index.
int arrayUsage()
{
	int Numerous[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	std::cout << Numerous[5];
	return 0;
}
//5. Using a loop, populate an array of size 10 with the values 10 - 1.
int loopingWithArrays()
{
	int reversalNumeral[11];
	int numeral = 10;
	for (int i = 0; i < 11; i++)
	{
		reversalNumeral[i] = numeral;
		numeral -= 1;
	}
	return 0;
}
//6. Create a an array of size five then ask the user to input five 		
//number into the array. Display the largest and smallest numbers 
//to the console
int sizeArrayDisplay()
{
	int twilightArray[5];
	int v = 0;
	int w = 0;
	int i;
	std::cout << "Please type 5 numbers";
	std::cin >> twilightArray[0];
	std::cin >> twilightArray[1];
	std::cin >> twilightArray[2];
	std::cin >> twilightArray[3];
	std::cin >> twilightArray[4];
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			v = twilightArray[i];
			w = twilightArray[i];
		}
		else
		{
			if (twilightArray[i] < v)
				v = twilightArray[i];
			if (twilightArray[i] > w)
				w = twilightArray[i];
		}
	}
	
	std::cout << "smallest is " << v << std::endl;
	std::cout << "largest is " << w << std::endl;
	return 0;
}
//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.
int arraysForNumbers()
{
	int aNight[3][3];
	int b;
	int x;
	for (int b = 0; b < 3; b++)
	{
		for (int x = 0; x < 3; x++)
		{
			aNight[3][3] = (b + 1)*(x + 1);
		}
	}

	return 0;
}
