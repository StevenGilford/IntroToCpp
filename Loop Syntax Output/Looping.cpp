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
	//-For multiples of 3 print �Fizz�
	//- For multiples of 5 print �Buzz�
	//- For multiples of 3 and 5 print �FizzBuzz�
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)

	int i;
	for (i = 0; i < 100; i++)
	{

	std::cout << i % 3 << "Fizz";

	std::cout << i % 5 << "Buzz";

	std::cout << i % 3 && i % 5 << "FizzBuzz";

	}



	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop

	int i = 0;
	while (i < 100)
	{

	std::cout << i % 3 <<  "Fizz";

	std::cout << i % 5 << "Buzz";

	std::cout << i % 3 && i % 5 << "FizzBuzz";

	i + 1;

	}


	int i;
	do 
	{

	std::Cout << i % 3 << "Fizz";

	std::cout << i % 5 << "Buzz";

	std::cout << i % 3 && i % 5 << "FizzBuzz";

	i + 1;

	} while (i < 100);


	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
	system("pause");

	int a;
	for (a = 1; a < 99; a++)
	{
	std::cout << a % 2 << std::endl;

	}


}