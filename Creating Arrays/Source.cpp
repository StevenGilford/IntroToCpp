#include <iostream>
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

	int Counter[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//4. Using the array created in problem 3 print the 5th index.
	std::cout << Counter [5];

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

	int Spectral[5];
	std::cout << "Please input 5 numbers";
	std::cin >> Spectral[5];
	if (Spectral[1] < Spectral[2] < Spectral [3] < Spectral [4] < Spectral [5])
	   for (int i = 0; i = Spectral[1];  i++)
	   {
		   if (Spectral[] < Spectral [])
			   
			   std::cout << Spectral[true];
	   }
	if (Spectral[1] > Spectral[2] > Spectral [3] > Spectral [4] > Spectral [5])
		for (int i = 0; i = Spectral[1]; i++)
		{
			if (true)
				std::cout << Spectral[true];
		}


	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format.
		
	int aNight[3][3];
		for (int i = 0; i < 10; i++)
		{
			aNight[i][i] = ;
			for(int i = 0; i < 10; i++)
			{

			}
	    }
		std::cout << ;
}