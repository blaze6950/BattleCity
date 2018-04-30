#include "Point.h"



Point::Point()
{
}

Point::Point(int x, int y)
{
	_x = x;
	_y = y;
}


Point::~Point()
{
}

int Point::getX()
{
	return _x;
}

int Point::getY()
{
	return _y;
}

void Point::setX(int x)
{
	_x = x;
}

void Point::setY(int y)
{
	_y = y;
}

Point Point::getAbsolutCoor()
{
	return *this;
}

Point Point::getRelativeCoor()
{
	int newX = (_x + 1) / 3;
	int newY = (_y + 1) / 3;
	return Point(newX, newY);
}

Direction Point::getDirectionToPoint(Point* point)
{
	if (this->getX() > point->getX())
	{
		return Direction(Left);
	}
	else if (this->getX() < point->getX())
	{
		return Direction(Right);
	}
	else {
		if (this->getY() > point->getY())
		{
			return Direction(Up);
		}
		else if (this->getY() < point->getY())
		{
			return Direction(Down);
		}
	}
	return Direction();//if the values of Ox and Oy are equal, it returns null or nothing
}

COORD Point::getCoordFromThisPoint()
{
	COORD coord;
	coord.X = _x;
	coord.Y = _y;
	return coord;
}
