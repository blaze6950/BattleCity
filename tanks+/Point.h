#pragma once
#include "Header.h"
//class storing coordinates
class Point
{
protected:
	int _x;
	int _y;
public:
	Point();
	Point(int x, int y);
	~Point();
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	Point getAbsolutCoor();
	Point getRelativeCoor();
	Direction getDirectionToPoint(Point* point);
	COORD getCoordFromThisPoint();
};

