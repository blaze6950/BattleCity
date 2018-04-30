#pragma once
#include "Block.h"
#include "Header.h"

class MovableBlock :
	public Block
{
protected:
	Direction _direction;
	int _speed;
	Block* _lowerBlock;
public:
	MovableBlock(int x, int y, MapProcessor& _map, int speed);
	~MovableBlock();
	void setDir(Direction dir);
	void Move();
	void paint();
	void PaintLowerBlock();
};

