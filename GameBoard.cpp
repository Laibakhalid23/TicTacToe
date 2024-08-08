#include"GameBoard.h"
#include<iostream>
using namespace std;
GameBoard::GameBoard()
{
	//initialize the board with following values
	// 1 2 3
	// 4 5 6
	// 7 8 9
	char ch = '1';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			data[i][j] = ch;

			ch++;
			validMovesCount++;
		}
	}
}
void GameBoard::displayBoard()
{
	//display the board on console
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << data[i][j] << " ";
		}
		cout << "\n";
	}
}
bool GameBoard::isValidPosition(char pos)
{
	// checks whether the position is in the range i.e 1 to 9
	if (pos >= '1' && pos <= '9')
	{
		return true;
	}
	return false;
}
bool GameBoard::isAlreadyMarked(char pos)
{
	// checks whether the cell is already marked or not
	if (!isValidPosition(pos))
	{
		return false;
	}
	int i = (pos - '1') / 3;
	int j = (pos - '1') % 3;
	if (data[i][j] != pos)
	{
		return true;
	}
	return false;
}
void GameBoard::markBoard(char pos, char playerSymbol)
{
	// marks the specified position in board with symbol
	int i = (pos - '1') / 3;
	int j = (pos - '1') % 3;
	if (isValidPosition(pos) && !isAlreadyMarked(pos))
	{

		data[i][j] = playerSymbol;
	}
	validMovesCount--;

}
int GameBoard::getValidMovesCount()
{
	// returns the count of valid moves on board
	return validMovesCount;
}
GameStatus GameBoard::getGameStatus()
{
	//checking win for row
	for (int i = 0; i < 3; i++)
	{
		if ((data[i][0] == data[i][1]) && (data[i][1] == data[i][2]))
		{
			return WIN;
		}
	}
	//checking win for column
	for (int j = 0; j < 3; j++)
	{
		if (data[0][j] == data[1][j] && data[1][j] == data[2][j])
		{
			return WIN;
		}
	}
	//checking win for diagonal
	if ((data[0][0] == data[1][1] && data[1][1] == data[2][2]) || (data[0][2] == data[1][1] && data[1][1] == data[2][0]))
	{
		return WIN;
	}
	else if (validMovesCount == 0)
	{
		return DRAW;
	}
	else
	{
		return IN_PROGRESS;
	}
}