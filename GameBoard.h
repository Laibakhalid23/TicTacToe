#ifndef GAMEBOARD_H
#define GAMEBOARD_H
enum PlayerTurn { FIRST_PLAYER = 1, SECOND_PLAYER = 2 };
enum GameStatus { DRAW, WIN, IN_PROGRESS };
class GameBoard
{
private:
	char data[3][3];
	GameStatus gameStatus = IN_PROGRESS;
	int validMovesCount = 0;
public:
	GameBoard();
	void displayBoard();
	bool isValidPosition(char pos);
	bool isAlreadyMarked(char pos);
	void markBoard(char pos, char playerSymbol);
	int getValidMovesCount();
	GameStatus getGameStatus();
};
#endif
