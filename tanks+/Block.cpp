#include "Block.h"



Block::Block(int x, int y)
{
	_point.setX(x);
	_point.setY(y);
	_needRefresh = true;
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
