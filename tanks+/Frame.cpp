#include "Frame.h"



Frame::Frame(int x, int y, MapProcessor& _map) : Block(x, y, _map)
{
}


Frame::~Frame()
{
}

void Frame::paint()
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
		cout << char(176);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);

		//start fill second line
		coord.X -= 2;
		coord.Y += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);

		//start fill third line
		coord.X -= 2;
		coord.Y += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);
		coord.X += 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(176);
	}
}

void Frame::doTheActionWhenABulletHits()
{
	return;
}
