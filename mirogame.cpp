#include <iostream>
using namespace std;

void SetMaze(char Maze[21][21])
{
	strcpy_s(Maze[0], "21100000000000000000");
	strcpy_s(Maze[1], "00111111111100000000");
	strcpy_s(Maze[2], "00100010000111111100");
	strcpy_s(Maze[3], "01100010000000000100");
	strcpy_s(Maze[4], "01000011100011111100");
	strcpy_s(Maze[5], "01000000011110000000");
	strcpy_s(Maze[6], "01100000010000000000");
	strcpy_s(Maze[7], "00100000011111111000");
	strcpy_s(Maze[8], "00000000000000001113");
	strcpy_s(Maze[9], "01100000000000000000");
	strcpy_s(Maze[10], "21100000000000000000");
	strcpy_s(Maze[11], "21100000000000000000");
	strcpy_s(Maze[12], "21100000000000000000");
	strcpy_s(Maze[13], "21100000000000000000");
	strcpy_s(Maze[14], "21100000000000000000");
	strcpy_s(Maze[15], "21100000000000000000");
	strcpy_s(Maze[16], "21100000000000000000");
	strcpy_s(Maze[17], "21100000000000000000");
	strcpy_s(Maze[18], "21100000000000000000");
	strcpy_s(Maze[19], "21100000000000000000");
}

void Output(char Maze[21][21])
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (Maze[i][j] == '0')
				cout << "¡á";

			else if (Maze[i][j] == '1')
				cout << "  ";

			else if (Maze[i][j] == '2')
				cout << "¡Ú";

			else if (Maze[i][j] == '3')
				cout << "¡Ý";
		}

		cout << endl;
	}
}

int main() {

	char strMaze[21][21] = {};

	SetMaze(strMaze);

	Output(strMaze);

	return 0;
}