#pragma once
#include "MovableBlock.h"
class Bullet : public MovableBlock
{
protected:
	Point _point;
	Direction _direction;
	int _speed;
public:
	Bullet(Point* point, Direction direction);
	~Bullet();
};

