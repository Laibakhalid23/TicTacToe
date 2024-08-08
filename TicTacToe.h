#ifndef TICTACTOE_H
#define TICTACTOE_H
#include"GameBoard.h"
class TicTacToe
{
private:
	char player1Symbol;
	char player2Symbol;
	bool isValidSymbol(char symbol);
	char symbolInput(PlayerTurn currentPlayer);
	char switchPlayerSymbol(PlayerTurn currentPlayer, char player1Symbol, char player2Symbol);
	PlayerTurn switchPlayerTurn(PlayerTurn currentPlayer);
public:
	void playGame();
};
#endif
