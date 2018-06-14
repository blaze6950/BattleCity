#include "Header.h"



Tank::Tank(Point* point, Direction direction, MapProcessor map, int speed) : MovableBlock(point->getX(), point->getY(), map, speed)
{
	this->setSpeed(speed);
}


Tank::~Tank()
{
}

void Tank::paint()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), _color);
	COORD coord = _point.getCoordFromThisPoint();
	switch (_direction)
	{
	case Up:
		coord.X -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(178);
		cout << char(178);
		coord.Y -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(186);
		cout << char(178);
		coord.Y += 2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(32);
		cout << char(178);
		break;
	case Right:
		coord.X -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(32);
		cout << char(178);
		cout << char(205);
		coord.Y -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(178);
		cout << char(178);
		coord.Y += 2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(178);
		cout << char(178);
		break;
	case Down:
		coord.X -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(178);
		cout << char(178);
		coord.Y -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(32);
		cout << char(178);
		coord.Y += 2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(186);
		cout << char(178);
		break;
	case Left:
		coord.X -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(205);
		cout << char(178);
		cout << char(32);
		coord.Y -= 1;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(178);
		cout << char(178);
		coord.Y += 2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		cout << char(178);
		cout << char(178);
		cout << char(178);
		break;
	default:
		break;
	}
}

void Tank::setColor(Colors color)
{
	_color = color;
}

Colors Tank::getColor()
{
	return _color;
}

void Tank::setHP(int hp)
{
	_hp = hp;
}

int Tank::getHP()
{
	return _hp;
}

void Tank::Fire()
{
	if (_bullet == nullptr)
	{
		_bullet = new Bullet(&_point, _direction, _mapProcessor, _speed + 10);
		//_mapProcessor.
	}
}
