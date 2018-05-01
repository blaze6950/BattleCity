#include "MapProcessor.h"



MapProcessor::MapProcessor()
{
}


MapProcessor::~MapProcessor()
{
}

void MapProcessor::paint()
{	
	for each (Block block in _map)
	{
		block.paint();
	}
}

vector<Block> MapProcessor::getMap()
{
	return _map;
}

void MapProcessor::setMap(vector<Block> map)
{
	_map = map;
}

Block* MapProcessor::getBlock(int x, int y)
{
	Point* point;
	for each (Block block in _map)
	{
		point = &block._point.getAbsolutCoor();
		if (point->getX() + 1 >= x && point->getX() - 1 <= x && point->getY() + 1 >= y && point->getY() - 1 <= y)
		{
			return &block;
		}
	}
	return &Emptyblock(x, y, *this);
}

Block* MapProcessor::getBlock(Point* point)
{
	int x = point->getX();
	int y = point->getY();
	return getBlock(x, y);
}

Block* MapProcessor::getNextBlock(Point* point, Direction direction)
{
	Point newPoint;
	newPoint.setX(point->getX());
	newPoint.setY(point->getY());
	switch (direction)
	{
	case Up:
		newPoint.setY(newPoint.getY() - 2);
		break;
	case Right:
		newPoint.setX(newPoint.getX() + 2);
		break;
	case Down:
		newPoint.setY(newPoint.getY() + 2);
		break;
	case Left:
		newPoint.setX(newPoint.getX() - 2);
		break;
	default:
		break;
	}
	Block* nextBlock = getBlock(newPoint.getX(), newPoint.getY());
	return nextBlock;
}

bool MapProcessor::canMove(Point* point, Direction direction)
{
	Block* nextBlock = this->getNextBlock(point, direction);
	Block block = *(this->getBlock(point));
	if (typeid(nextBlock) == typeid(Emptyblock))
	{
		return true;
	}
	if (typeid(block) == typeid(Block))// код для проверки движения для танков
	{
		//if (typeid(nextBlock) == typeid(Block))// условие, проверяющее, является ли nextBlock emptyBlock'om
		//{
		//	return true;
		//}
	}
	else if (typeid(block) == typeid(Bullet))// код для проверки движения для пуль
	{
		//if (typeid(nextBlock) == typeid(Block) || typeid(nextBlock) == typeid(Block))// условие, проверяющее, является ли nextBlock emptyBlock'om или деревьями
		//{
		//	return true;
		//}
	}
	return false;
}
