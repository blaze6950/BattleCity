#include "Header.h"



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

Direction MovableBlock::getDir()
{
	return _direction;
}

void MovableBlock::setSpeed(int speed)
{
	this->_speed = speed;
}

int MovableBlock::getSpeed()
{
	return _speed;
}

void MovableBlock::Move()
{
	if (_mapProcessor->canMove(&this->_point, _direction))
	{
		switch (_direction)
		{
		case Direction(Up):
			break;
		case Direction(Down):
			break;
		case Direction(Left):
			break;
		case Direction(Right):
			break;
		default:
			break;
		}
		this->_needRefresh = true;
	}	
}

void MovableBlock::paint()
{
	if (_needRefresh)
	{
		_needRefresh = false;
		// paint instructions
	}
}
