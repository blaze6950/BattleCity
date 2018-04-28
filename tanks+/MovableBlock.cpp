#include "MovableBlock.h"



MovableBlock::MovableBlock(int x, int y, MapProcessor& _map, int speed) : Block(x, y, _map)
{	
	_direction = Up;
	_speed = speed;
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
	if (_mapProcessor->canMove(&this->_point, _direction))
	{
		this->_needRefresh = true;
	}	
}
