#pragma once
#include <iostream>
class Board
{
private:
	char *mPlaySpace; //points to character array representing playspace
	int mBoardSize; //Number of board spaces
	int numColumns;
	int numRows;
public:
	Board();
	
	Board(int rows, int columns);
	
	void ClearBoard();
		
	~Board();

	void DisplayBoard();
	
	bool PlacePiece(char piece, int place);
	
	bool WinLose();

};