#include "Emptyblock.h"



Emptyblock::Emptyblock(int x, int y, MapProcessor& _map) : Block(x, y, _map)
{
}


Emptyblock::~Emptyblock()
{
}

void Emptyblock::paint()
{
	if (_needRefresh)
	{
		_needRefresh = false;
		//new variable COORD for function SetConsoleCursorPosition();
		COORD coord = _point.getCoordFromThisPoint();

		//start fill first line
		coord.X -= 1;
		coord.Y -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);

		//start fill second line
		coord.X -= 2;
		coord.Y += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);

		//start fill third line
		coord.X -= 2;
		coord.Y += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(255);
	}
}
