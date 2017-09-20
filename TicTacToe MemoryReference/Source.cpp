#include "Board.h"

int main()
{
	Board *game = new Board(10,10);
	game->DisplayBoard();
	delete game;
	game->DisplayBoard();
	system("pause");
}