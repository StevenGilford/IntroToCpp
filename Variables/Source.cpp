#include <iostream>
void main();
{
	float averageHeight();
	float taxedRate();
	float secondTaxedRate();
	float steamingLibrary();
	int centipedeMeter();
	float feetHeight();
	char footedHeight();
	int Millipedemeter();
	bool takeThis();
	int boxedSwap();
	int averageOfFive();
	int swapInteractive();
	// You can not print to the console unless the problem specifies.

	//1. Select suitable variable types and names for the following examples
	//a) The average height of students in your class
		float averageHeight()
	{
		std::cout << 5.5f;
		return 0;
	}
	//b) The tax rate for incomes over $65000
	float taxedRate()
	{
		std::cout << 10.5f;
		return 0;
	}
	//c) The tax rate for incomes below $5000
	float secondTaxedRate()
	{
		std::cout << 4.5f;
		return 0;
	}
	//d) The total cost of all the games on your Steam library
	float steamingLibrary()
	{
		std::cout << 47.08f;
		return 0;
	}

	//2. Select suitable data types to hold the following values :
	//a) 121
	int centipedeMeter()
	{
		std::cout << 121;
		return 0;
	}
	//b) 9.4
	float feetHeight()
	{
		std::cout << 9.4f;
		return 0;
	}
	//c) r
	char footedHeight()
	{
		std::cout << 'r';
		return 0;
	}
	//d) 100000
	int Millipedemeter()
	{
		std::cout << 100000;
		return 0;
	}
	//e) False
	bool takeThis()
	{
		std::cout << false;
		return 0;
	}

	//3. Create a program that swaps two numbers. Ask the user for 2 numbers in the console window
	//and store the result in variables called “a” and “b” print the result to screen.Write code 
	//that swaps the values for these variables, then print the variables “a” and “b” again.
	//You should comment your code.

	int boxedSwap()
	{
		int v = 65;
		int x = 32;
		int z = 55;  //these variables shall be swapped
		z = v;
		v = x;
		x = z;
		return 0;
	}




	//4. Ask the user for 5 numbers and output the average of these numbers.	
	int averageOfFive()
	{
		std::cout << "Please input 5 numbers";
		int t;
		int u;
		int s;
		int m;
		int n;
		int j;
		((t * u * s * m * n) / 5);
		return 0;
	}
	
	//5. Redo question 3 but allows the user to input the values to be swapped and provide information
	//in the console proving the data was swapped.
	int swapInteractive()
	{
		int O;
		std::cin >> O;
		int g;
		std::cin >> g;
		int H;
		std::cin >> H;
		H = O;
		O = g;
		g = H;
		std::cout << "All 3 numbers have been flipped around.";
		return 0;
	}
}