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
	Board()
	{
		mPlaySpace = new char[9];
		numColumns = 3;
		numRows = 3;
		mBoardSize = 9;
		ClearBoard();
	}

	Board(int rows, int columns)
	{
		mPlaySpace = new char[rows * columns];
		numColumns = columns;
		numRows = rows;
		mBoardSize = numColumns* numRows;
		ClearBoard();
	}


	void ClearBoard()
	{
		for (int i = 0; i < this-> mBoardSize; i++)
		{
			mPlaySpace[i] = 'X';
		}
		
	}
	
	~Board()
	{
		delete this-> mPlaySpace;
	}

	void DisplayBoard()
	{
		for (int i = 0; i < this-> mBoardSize; i++)
		{
			std::cout << mPlaySpace[i];
			if (i % numColumns == numColumns - 1)
				std::cout << std::endl;
		}
	}

	bool PlacePiece(char piece, int place)
	{
		
	}

	bool WinLose()
	{

	}

};