#include <iostream>
//Find the sum of the two largest values in an array
//Bonus: allow the user to input the array values
int AdditionFunction(int addArray[], int length)
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += addArray[i];

	}
	return sum;
}
int SubtractionFunction(int subtArray[], int length, int sub)
{
	for (int i = 0; i < length; i++)
	{
		subtArray[i] -= sub;
	}
	return sub;
}
int MultiplicationFunction(int a, int b, int c)
{
	c = a * b;
	return c;
}
int DivisionFunction(int divArray[], int length)
{
	for (int i = 0; i < length; i++)
	{

	}
}

int main()
{
	int darkerArray[7];
	int r;
	int h;
	int i;
	std::cout << "You can input only 7 values";
	std::cin >> darkerArray[0];
	std::cin >> darkerArray[1];
	std::cin >> darkerArray[2];
	std::cin >> darkerArray[3];
	std::cin >> darkerArray[4];
	std::cin >> darkerArray[5];
	std::cin >> darkerArray[6];
	for (int i = 0; i < 7; i++)
	{
		if (i == 0)
		{
			r = darkerArray[i];
			h = darkerArray[i];
		}
		else
		{
			if (darkerArray[i] > r)
			{
				r = darkerArray[i];
			}
			if (r > darkerArray[i] >= h)
			{
				h = darkerArray[i];
			}
		}
	}
	int q = r + h;
	std::cout << "The two largest values combined is " << q << std::endl;

}

//2. Create a function for each of the following math operators. They must return a value.
//and take in at least two argument. Once all the functions have been created you will need to 
//invoke them and print out the return.
//a. Addition

//b. Subtraction

//c. Multiplication

//d. Division


//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.


//4. Using recursion write a function that prints out the Fibonacci sequence.


//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.


//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.