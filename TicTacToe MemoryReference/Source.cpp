#include "Board.h"

  Board::Board()
	{
		mPlaySpace = new char[9];
		numColumns = 3;
		numRows = 3;
		mBoardSize = 9;
		ClearBoard();
	}

	Board::Board(int rows, int columns)
	{
		mPlaySpace = new char[rows * columns];
		numColumns = columns;
		numRows = rows;
		mBoardSize = numColumns* numRows;
		ClearBoard();
	}


	void Board::ClearBoard()
	{
		for (int i = 0; i < this->mBoardSize; i++)
		{
			mPlaySpace[i] = 'X';
		}

	}

	Board::~Board()
	{
		delete this->mPlaySpace;
	}

	void Board::DisplayBoard()
	{
		for (int i = 0; i < this->mBoardSize; i++)
		{
			std::cout << mPlaySpace[i];
			if (i % numColumns == numColumns - 1)
				std::cout << std::endl;
		}
	}

	bool Board::PlacePiece(char piece, int place)
	{
		
		return true;
	}

	bool Board::WinLose()
	{
		if ( == )
		return true;
	}
