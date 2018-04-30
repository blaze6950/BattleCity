#pragma once
#include "MovableBlock.h"
class Bullet : public MovableBlock
{
public:
	Bullet(Point* point, Direction direction, MapProcessor* map, int speed);
	~Bullet();
	void doTheActionWhenABulletHits();
	void paint();
	void Move();
};

