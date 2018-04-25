#pragma once
#include "Block.h"
#include "Header.h"
#include "MapProcessor.h"

class MovableBlock :
	public Block
{
protected:
	Direction _direction;
	MapProcessor* _mapProc;
public:
	MovableBlock(int x, int y, MapProcessor& _map);
	~MovableBlock();
	void setDir(Direction dir);
	void Move();
};

