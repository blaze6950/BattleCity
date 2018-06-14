#include "Header.h"


Bullet::Bullet(Point* point, Direction direction, MapProcessor* map, int speed) : MovableBlock(point->getX(), point->getY(), *map, speed)
{
}

Bullet::~Bullet()
{
}

void Bullet::doTheActionWhenABulletHits()
{
}

void Bullet::paint()
{
	/*if (_needRefresh)
	{
		_needRefresh = false;
		if (_lowerBlock != nullptr)
		{
			PaintLowerBlock();
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), White);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), _point.getCoordFromThisPoint());
		cout << char(253);
	}*/
}

void Bullet::Move()
{
	if (_mapProcessor->canMove(&this->_point, _direction))
	{
		switch (_direction)
		{
		case Direction(Up):
			break;
		case Direction(Down):
			break;
		case Direction(Left):
			break;
		case Direction(Right):
			break;
		default:
			break;
		}
		this->_needRefresh = true;
	}
	else {
		_mapProcessor->getNextBlock(&_point, _direction)->doTheActionWhenABulletHits();
		// delete bulle after hit
	}
}
