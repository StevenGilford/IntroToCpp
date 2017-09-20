#include <iostream>
#include "Board.h"
int main()
{
	Board *game = new Board();
	game->DisplayBoard();
	delete game;
	game->DisplayBoard();
	system("pause");
}