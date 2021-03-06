#include <iostream>
int firstFizzBussForLoop();
int secondFizzBuzzWhileLoop();
int thirdFizzBuzzDoWhileLoop();
int fourthLooptoOneHundred();
int main()
{
	//1. What is the out put of the following code samples?
	//a. 
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
	}                                //The output of this sample is every number before 100.

	//b. 
	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
	}                                //The output of this sample is every even number between 100 and 0.
	//c. 
	int iter = 0;
	while (iter != 25)
	{
		std::cout << iter << std::endl;
		iter += 5;
	}                                //The outputs of this sample are 5, 10, 15 and 20.
	//d. 
	int counter = 0;
	do
	{
		counter++;
		if (counter == 1)
			break;
		else
			std::cout << counter << std::endl;
	} while (counter < 10);                       //The outputs of this sample are 1, 2, 3, 4, 5, 6, 7, 8, and 9.

	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print �Fizz�
	//- For multiples of 5 print �Buzz�
	//- For multiples of 3 and 5 print �FizzBuzz�
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)

	int c;
	for (c = 0; c <= 100; c++)
	{
		if (c % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (c % 5 == 0)
		{
			std::cout << "Buzz";
		}

		if (c % 3 && 5 == 0)
		{
			std::cout << "FizzBuzz";
		}
	}

	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop

	int o = 0;
	while (o <= 100)
	{
		if (o % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (o % 5 == 0)
		{
			std::cout << "Buzz";
		}
		
		if (o % 3 && 5 == 0)
		{
			std::cout << "FizzBuzz";
		}


		o++;

	}
	
	//do while

	int u = 0;
	do
	{

		if (u % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (u % 5 == 0)
		{
			std::cout << "Buzz";
		}

		if (u % 3 && 5 == 0)
		{
			std::cout << "FizzBuzz";
		}

		u++;
	} while (u <= 100);



	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
	system("pause");

	int a;
	for (a = 1; a <= 99; a++)
	{
		if (a == 0)
		{
			std::cout << "nothing here";
		}

		if (a == 100)
		{
			std::cout << "nothing here";
		}
    }
}	

//2. Using a for loop, iterate through numbers 0 to 100.
//-For multiples of 3 print �Fizz�
//- For multiples of 5 print �Buzz�
//- For multiples of 3 and 5 print �FizzBuzz�
//- Otherwise print the number.
//Note, you will need to use the modulus operator (%)
int firstFizzBussForLoop()
{
	int d;
	for (d = 0; d <= 100; d++)
	{
		if (d % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (d % 5 == 0)
		{
			std::cout << "Buzz";
		}

		if (d % 3 && 5 == 0)
		{
			std::cout << "FizzBuzz";
		}
	}
	return 0;
}

//3. Repeat problem 2 using a while loop and a do while loop.
//while loop
int secondFizzBuzzWhileLoop()
{
	int l = 0;
	while (l <= 100)
	{
		if (l % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (l % 5 == 0)
		{
			std::cout << "Buzz";
		}

		if (l % 3 && 5 == 0)
		{
			std::cout << "FizzBuzz";
		}


		l++;

	}
	return 0;
}

int thirdFizzBuzzDoWhileLoop()
{
	int w = 0;
	do
	{

		if (w % 3 == 0)
		{
			std::cout << "Fizz";
		}

		if (w % 5 == 0)
		{
			std::cout << "Buzz";
		}

		if (w % 3 && 5 == 0)
		{
			std::cout << "FizzBuzz";
		}

		w++;
	} while (w <= 100);
	return 0;
}

//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
int fourthLooptoOneHundred()
{
	int t;
	for (t = 1; t <= 99; t++)
	{
		if (t == 0)
		{
			std::cout << "nothing here";
		}

		if (t == 100)
		{
			std::cout << "nothing here";
		}
	}
	return 0;
}
