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

//2. Create a function for each of the following math operators. They must return a value.
//and take in at least two argument. Once all the functions have been created you will need to 
//invoke them and print out the return.
//a. Addition

int AddFunction(int a, int b, int c)
{
	a = 2;  b = 2;
	int c = a + b;
	return c;
}

//b. Subtraction

int SubtFunction(int c, int d)
{

}

//c. Multiplication

int multipFunction(int e, int f)
{

}

//d. Division

int DiviFunction(int g, int j)
{

}

//std::cout << AddFunction() << std::endl;
//std::cout <<
//std::cout <<
//std::cout <<

//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.


float ArrayingFunction(float darkerArray[], float length)
{
	float k = 0;
	for (int i = 0; i < length; i++)
	{
		if (i == 0)
		{
			k = darkerArray[i];
		}
		else
		{
			if (darkerArray[i] > k)
				k = darkerArray[i];
		}
	}
	std::cout << "largest is " << k << std::endl;
	return k;
}

//4. Using recursion write a function that prints out the Fibonacci sequence.



//5. The following statement calls a function named Half. The Half function returns a value that 
//is half that of the argument. Write the function.



//6. Write a function that takes as its parameters an array of integers and the size of the array 
// and returns the sum of the values in the array.

