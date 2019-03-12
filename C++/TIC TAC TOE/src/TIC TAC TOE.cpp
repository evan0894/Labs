#include <iostream>

#include <unistd.h>

using namespace std;

void DrawBoard(int bd[3][3])
{
	string caprow = "           ||         ||           ";

		string side = "  ";

		string vertbars = "||";

		string horibars = "  ------------------------------  ";

		string sprite[3][4] = {
				"         ", "         ", "         ", "         ",
				"  xx xx  ", "   xxx   ", "   xxx   ", "  xx xx  ",
				"   o o   ", "  o   o  ", "  o   o  ", "   o o   "};

		cout << caprow << endl;

		for (int i = 0; i < 4; i++)
		{
			cout << side;
			cout << sprite[bd[0][0]][i];
			cout << vertbars;
			cout << sprite[bd[0][1]][i];
			cout << vertbars;
			cout << sprite[bd[0][2]][i];
			cout << side;
			cout << endl;
		}
		cout << horibars << endl;

		for (int i = 0; i < 4; i++)
			{
				cout << side;
				cout << sprite[bd[1][0]][i];
				cout << vertbars;
				cout << sprite[bd[1][1]][i];
				cout << vertbars;
				cout << sprite[bd[1][2]][i];
				cout << side;
				cout << endl;
			}
		cout << horibars << endl;

		for (int i = 0; i < 4; i++)
				{
					cout << side;
					cout << sprite[bd[2][0]][i];
					cout << vertbars;
					cout << sprite[bd[2][1]][i];
					cout << vertbars;
					cout << sprite[bd[2][2]][i];
					cout << side;
					cout << endl;
				}

		cout << caprow << endl;
}


bool CheckWin(int bd[3][3], int player)
{
	bool playerWins = false;


	return playerWins;
}

int main()
{
	bool xWins = false, oWins = false;


	int board[3][3] = {
			0,0,0,
			0,0,0,
			0,0,0};
	DrawBoard(board);

	for(int turn = 0; turn < 9; turn++)
		{
		if (turn % 2 == 0)
		{


			DrawBoard(board);


			xWins = CheckWin(board, 1);


			if (xWins)
			{
				cout << "X wins" << endl;
				break;
			}
		}
		else
		{

		}
		}

	if (!xWins && !oWins)
	{
		cout << "Draw" << endl;
	}




}

