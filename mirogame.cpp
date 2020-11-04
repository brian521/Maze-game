#include <iostream>
#include <conio.h>

using namespace std;


struct _tagPoint
{
	int x;
	int y;
};

typedef _tagPoint	POINT;
typedef _tagPoint*	PPOINT;

void SetMaze(char Maze[21][21], PPOINT pPlayerPos, PPOINT pStartPos, PPOINT pEndPos)
{
	pStartPos->x = 0;
	pStartPos->y = 0;

	pEndPos->x = 19;
	pEndPos->y = 19;

	*pPlayerPos = *pStartPos;
	

	strcpy_s(Maze[0], "21100000000000000000");
	strcpy_s(Maze[1], "00111111111100000000");
	strcpy_s(Maze[2], "00100010000111111100");
	strcpy_s(Maze[3], "01100010000000000100");
	strcpy_s(Maze[4], "01000011100011111100");
	strcpy_s(Maze[5], "01000000011110000000");
	strcpy_s(Maze[6], "01100000010000000000");
	strcpy_s(Maze[7], "00100000011111111000");
	strcpy_s(Maze[8], "00011110000000001000");
	strcpy_s(Maze[9], "01110011111111111000");
	strcpy_s(Maze[10], "01000000000000000000");
	strcpy_s(Maze[11], "01111110000111111000");
	strcpy_s(Maze[12], "00000011111100000000");
	strcpy_s(Maze[13], "01111110000111111000");
	strcpy_s(Maze[14], "01000000000000001000");
	strcpy_s(Maze[15], "01111100111111111000");
	strcpy_s(Maze[16], "00000101100000000000");
	strcpy_s(Maze[17], "01111101000000000000");
	strcpy_s(Maze[18], "01000001111111100000");
	strcpy_s(Maze[19], "11000000000000111113");
}

void Output(char Maze[21][21], PPOINT pPlayerPos)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (pPlayerPos->x == j && pPlayerPos->y == i)
				cout << "☆";

			else if (Maze[i][j] == '0')
				cout << "■";

			else if (Maze[i][j] == '1')
				cout << "  ";

			else if (Maze[i][j] == '2')
				cout << "★";

			else if (Maze[i][j] == '3')
				cout << "◎";
		}

		cout << endl;
	}
}

int main() {

	char strMaze[21][21] = {};

	POINT tPlayerPos;
	POINT tStartPos;
	POINT tEndPos;

	SetMaze(strMaze, &tPlayerPos, &tStartPos, &tEndPos);

	while (true)
	{
		system("cls");
		Output(strMaze, &tPlayerPos);

		cout << "w : 위 s : 아래 a : 왼쪽 d : 오른쪽 q : 종료 : ";
		char	cInput = _getch();

		if (cInput == 'q' || cInput == 'Q')
			break;
	}

	return 0;
}