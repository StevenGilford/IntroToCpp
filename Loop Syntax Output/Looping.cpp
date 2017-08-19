#include <iostream>

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
	//-For multiples of 3 print “Fizz”
	//- For multiples of 5 print “Buzz”
	//- For multiples of 3 and 5 print “FizzBuzz”
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)

	int c;
	for (c = 0; c <= 100; c++)
	{

		std::cout << c << "Fizz";
		c % 3;

		std::cout << c << "Buzz";
		c % 5;

		std::cout << c << "FizzBuzz";
		c % 3 && 5;

	}

	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop

	int o = 0;
	while (o <= 100)
	{

		std::cout << o << "Fizz";
		o % 3;

		std::cout << o << "Buzz";
		o % 5;
		
		std::cout << o << "FizzBuzz";
		o % 3 && 5;

		o + 1;

	}
	
	//do while

	int u = 0;
	do
	{

		std::cout << u << "Fizz";
		u % 3;

		std::cout << u << "Buzz";
		u % 5;

		std::cout << u << "FizzBuzz";
		u % 3 && 5;

		u + 1;
	} while (u <= 100);



	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
	system("pause");

	int a;
	for (a = 1; a <= 99; a-=2)
	{
		std::cout << a << std::endl;
    }
}	


