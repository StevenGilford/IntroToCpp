#include <iostream>
int firstIfStatement();
int overwhelmingOfSwitchAndCase();
int barrageOfIfStatements();
int ternaryStrikesBack();
int main()
{
	//1. What do the following conditionals evaluate to if "A = true and B = false"
	// A || B    

	//True

	// A || B

	//True

	// !A

	//False

	// !(A && A)

	//False

	// B && A

	//False

	//(!B || A)

	//True


	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero
	int x;
	int y;
	if (y == 0)
	{
		x = 100;
	}

	//3. Write a program that accepts an integer that represents the month of the year. 
	//It should then display the number of days in that month. If a number that doesn’t correspond 
	//to a month is entered then the program should display an error message. You must use a switch statement
	int a;
	std::cout << "Please enter the name of a month";
	std::cin >> a;
	switch (a)
	{
	case 1:
		std::cout << "January has 31 days";
		break;
	case 2:
		std::cout << "February has 28 days.";
		break;
	case 3:
		std::cout << "March has 31 days.";
		break;
	case 4:
		std::cout << "April has 30 days.";
		break;
	case 5:
		std::cout << "May has 30 days.";
		break;
	case 6:
		std::cout << "June has 31 days.";
		break;
	case 7:
		std::cout << "July has 31 days.";
		break;
	case 8:
		std::cout << "August has 31 days.";
		break;
	case 9:
		std::cout << "September has 31 days.";
		break;
	case 10:
		std::cout << "October has 31 days.";
		break;
	case 11:
		std::cout << "November has 30 days.";
		break;
	case 12:
		std::cout << "December has 31 days.";
		break;
	case 13: 
		std::cout << "Error this number is not a month of the year";
		break;
	}
	
	//4. Redo problem 3 using if statements

	int h;
	std::cout << "Please enter the name of a month";
    std::cin >> h;
	if (h == 1)
	{
		std:: cout << "January has 31 days.";
	}
	if (h == 2)
	{
		std::cout << "February has 28 days.";

    }
	if (h == 3)
	{
		std::cout << "March has 31 days.";
	}
	if (h == 4)
	{
		std::cout << "April has 30 days.";
	}
	if (h == 5)
	{
		std::cout << "May has 30 days.";
	}
	if (h == 6)
	{
		std::cout << "June has 31 days.";
	}
	if (h == 7)
	{
		std::cout << "July has 31 days.";
	}
	if (h == 8)
	{
		std::cout << "August has 30 days.";
	}
	if (h == 9)
	{
		std::cout << "September has 31 days.";
	}
	if (h == 10)
	{
		std::cout << "October has 31 days.";
	}
	if (h == 11)
	{
		std::cout << "November has 30 days.";
	}
	if (h == 12)
	{
		std::cout << "December has 31 days.";
	}
	if (h == 13)
	{
		std::cout << "Error, this number is not a month of the year";
	}


	//5. Convert problem 2 into a ternary operator

	int g;
	int e;
    (g == 0) ? e = 100 : e = 7;

}

//2. Write an if statement that assigns 100 to the value of x when y is equal to zero  (different variables used for these functions)
int firstIfStatement()
{
	int n;
	int v;
	if (v == 0)
	{
		n = 100;
	}
	return 0;
}
//3. Write a program that accepts an integer that represents the month of the year. 
//It should then display the number of days in that month. If a number that doesn’t correspond 
//to a month is entered then the program should display an error message. You must use a switch statement

int overwhelmingOfSwitchAndCase()
{
	int k;
	std::cout << "Please enter the name of a month";
	std::cin >> k;
	switch (k)
	{
	case 1:
		std::cout << "January has 31 days";
		break;
	case 2:
		std::cout << "February has 28 days.";
		break;
	case 3:
		std::cout << "March has 31 days.";
		break;
	case 4:
		std::cout << "April has 30 days.";
		break;
	case 5:
		std::cout << "May has 30 days.";
		break;
	case 6:
		std::cout << "June has 31 days.";
		break;
	case 7:
		std::cout << "July has 31 days.";
		break;
	case 8:
		std::cout << "August has 31 days.";
		break;
	case 9:
		std::cout << "September has 31 days.";
		break;
	case 10:
		std::cout << "October has 31 days.";
		break;
	case 11:
		std::cout << "November has 30 days.";
		break;
	case 12:
		std::cout << "December has 31 days.";
		break;
	case 13:
		std::cout << "Error this number is not a month of the year";
		break;
	}
	return 0;
}

//4. Redo problem 3 using if statements
int barrageOfIfStatements()
{
	int q;
	std::cout << "Please enter the name of a month";
	std::cin >> q;
	if (q == 1)
	{
		std::cout << "January has 31 days.";
	}
	if (q == 2)
	{
		std::cout << "February has 28 days.";

	}
	if (q == 3)
	{
		std::cout << "March has 31 days.";
	}
	if (q == 4)
	{
		std::cout << "April has 30 days.";
	}
	if (q == 5)
	{
		std::cout << "May has 30 days.";
	}
	if (q == 6)
	{
		std::cout << "June has 31 days.";
	}
	if (q == 7)
	{
		std::cout << "July has 31 days.";
	}
	if (q == 8)
	{
		std::cout << "August has 30 days.";
	}
	if (q == 9)
	{
		std::cout << "September has 31 days.";
	}
	if (q == 10)
	{
		std::cout << "October has 31 days.";
	}
	if (q == 11)
	{
		std::cout << "November has 30 days.";
	}
	if (q == 12)
	{
		std::cout << "December has 31 days.";
	}
	if (q == 13)
	{
		std::cout << "Error, this number is not a month of the year";
	}
	return 0;
}

//5. Convert problem 2 into a ternary operator
int ternaryStrikesBack()
{
	int p;
	int r;
	(p == 0) ? r = 100 : r = 7;
	return 0;
}
