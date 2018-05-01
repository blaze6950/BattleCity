#pragma once
#include "Header.h"

class MovableBlock : public Block
{
protected:
	Direction _direction;
	int _speed;
public:
	MovableBlock(int x, int y, MapProcessor& _map, int speed);
	~MovableBlock();
	void setDir(Direction dir);
	Direction getDir();
	void setSpeed(int speed);
	int getSpeed();
	virtual void Move();
	void paint();
};

