#include "MovableBlock.h"



MovableBlock::MovableBlock(int x, int y, MapProcessor& _map) : Block(x, y)
{	
	_direction = Up;
	_mapProc = &_map;
}


MovableBlock::~MovableBlock()
{
}

void MovableBlock::setDir(Direction dir)
{
	_direction = dir;
	this->_needRefresh = true;
}

void MovableBlock::Move()
{
	if (_mapProc->canMove(this->_point, _direction))
	{
		this->_needRefresh = true;
	}	
}
