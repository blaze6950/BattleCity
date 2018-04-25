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
