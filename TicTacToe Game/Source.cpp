#include <iostream>


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