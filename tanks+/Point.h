#pragma once
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
};

