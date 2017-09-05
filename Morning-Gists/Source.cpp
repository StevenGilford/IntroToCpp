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