#include <iostream>
//Create an application that allows to users to play Tic-Tac-Toe. The game
//should be able to played until the users decide to quit by either hitting the X button on
//the window or they should have an on screen prompt in your application that pops up after
//each game.  If the user does not exit the game they must have an option to restart the game without
//having to relaunch the application.You must provide a document breaking down the steps taken to
//solve the problem.

void main()
{
	int worldGrid[3][3];
	int roadways;
	int towers;
	char player = 'X';
	char player2 = 'O';
	int gameSpace;
    std::cout << "  0    1   2\n";
    std::cout << "     |   |   \n";
    std::cout << "  ===========\n";
    std::cout << "  1  |   |   \n";
    std::cout << "  ===========\n";
    std::cout << "  2  |   |   \n";
    std::cout << "choose a space\n";
    std::cin >> gameSpace;
switch (gameSpace)
{
case 1: 
	std::cout << "  0    1   2\n";
	std::cout << "     |   |   \n";
	std::cout << "  ===========\n";
	std::cout << "  1  |   |   \n";
	std::cout << "  ===========\n";
	std::cout << "  2  |   |   \n";
	std::cout << "choose a space\n";
case 2: 
case 3: 
case 4: 
case 5: 
case 6: 
case 7: 
case 8: 
case 9: 
default: std::cout << "this is outside the grid, please try again.";
}
switch(gameSpace)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
default: std::cout << "this is outside the grid, please try again.";
}
system("pause");
}