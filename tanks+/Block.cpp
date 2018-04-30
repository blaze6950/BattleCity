#include "Block.h"



Block::Block(int x, int y, MapProcessor& _map)
{
	this->_mapProcessor = &_map;
	this->_point.setX(x);
	this->_point.setY(y);
	this->_needRefresh = true;
}


Block::~Block()
{
}

void Block::paint()
{
	if (_needRefresh)
	{
		_needRefresh = false;
		// paint instructions
	}	
}

void Block::doTheActionWhenABulletHits()
{
}

void Block::setNeedRefresh(bool value)
{
	_needRefresh = value;
}
