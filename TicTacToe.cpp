#include"TicTacToe.h"
#include"GameBoard.h"
#include<iostream>
using namespace std;
bool TicTacToe::isValidSymbol(char symbol)
{
	// checks if the symbol is valid or not
	if (symbol >= '1' && symbol <= '9')
	{
		return false;
	}
	return true;
}
char TicTacToe::symbolInput(PlayerTurn currentPlayer)
{
	char playerSymbol;
	do
	{
		cout << "Enter Player " << currentPlayer << " Symbol: ";
		cin >> playerSymbol;
		if (!isValidSymbol(playerSymbol))
		{
			cout << "not a valid symbol. Select another symbol" << "\n";
		}

	} while (!isValidSymbol(playerSymbol));
	return playerSymbol;

}
PlayerTurn TicTacToe::switchPlayerTurn(PlayerTurn currentPlayer)
{
	currentPlayer = (currentPlayer == FIRST_PLAYER) ? SECOND_PLAYER : FIRST_PLAYER;
	return currentPlayer;
}
char TicTacToe::switchPlayerSymbol(PlayerTurn currentPlayer, char player1Symbol, char player2Symbol)
{
	return (currentPlayer == FIRST_PLAYER) ? player2Symbol : player1Symbol;
}
void TicTacToe::playGame()
{
	// provides the interface to play tic tac toe game 
	char player1Symbol;
	player1Symbol = symbolInput(FIRST_PLAYER);
	char player2Symbol;
	do
	{
		player2Symbol = symbolInput(SECOND_PLAYER);
		if (player2Symbol == player1Symbol)
		{
			cout << "Not a valid symbol. Symbol taken by another player. Select another symbol " << "\n";
		}
	} while (!isValidSymbol(player2Symbol) || player2Symbol == player1Symbol);
	GameBoard gb;
	gb.displayBoard();
	PlayerTurn currentPlayer = FIRST_PLAYER;
	char currentPlayerSymbol = player1Symbol;

	while (gb.getGameStatus() == IN_PROGRESS)
	{
		cout << "Player " << currentPlayer << " Turn: ";
		char cell;
		cout << "Enter Cell #: ";
		cin >> cell;


		if (!gb.isAlreadyMarked(cell) && gb.isValidPosition(cell))
		{
			gb.markBoard(cell, currentPlayerSymbol);
			gb.displayBoard();
			if (gb.getGameStatus() == WIN)
			{
				cout << "Game won by: Player " << currentPlayer;
			}
			else if (gb.getGameStatus() == DRAW)
			{
				cout << "Game Draw";
			}
			currentPlayerSymbol = switchPlayerSymbol(currentPlayer, player1Symbol, player2Symbol);
			currentPlayer = switchPlayerTurn(currentPlayer);
		}

	}
}
