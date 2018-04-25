#include "MapProcessor.h"



MapProcessor::MapProcessor()
{
}


MapProcessor::~MapProcessor()
{
}

void MapProcessor::paint()
{
	for each (vector<Block> yLine in _map)
	{
		for each (Block block in yLine)
		{
			block.paint();
		}
		cout << endl;
	}	
	cout << endl;
}

vector<vector<Block>> MapProcessor::getMap()
{
	return _map;
}

void MapProcessor::setMap(vector<vector<Block>> map)
{
	_map = map;
}

Block* MapProcessor::getBlock(int x, int y)
{
	if (y <= _map.size() - 1)
	{
		if (x <= _map[y].size() - 1)
		{
			return &(_map[y][x]);
		}
	}
	return nullptr;
}

Block * MapProcessor::getBlock(Point point)
{
	int x = point.getX();
	int y = point.getY();
	if (y <= _map.size() - 1)
	{
		if (x <= _map[y].size() - 1)
		{
			return &(_map[y][x]);
		}
	}
	return nullptr;
}

bool MapProcessor::canMove(Point point, Direction dir)
{
	Block block = *(this->getBlock(point));
	Point newPoint = block._point;
	switch (dir)
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
	Point newRelativePoint = newPoint.getRelativeCoor();
	Block nextBlock = _map[newRelativePoint.getY()][newRelativePoint.getX()];
	if (typeid(block) == typeid(Block))// код для проверки движения для танков
	{
		if (typeid(nextBlock) == typeid(Block))// условие, проверяющее, является ли nextBlock emptyBlock'om
		{
			return true;
		}
	}
	else if (typeid(block) == typeid(Block))// код для проверки движения для пуль
	{
		if (typeid(nextBlock) == typeid(Block) || typeid(nextBlock) == typeid(Block))// условие, проверяющее, является ли nextBlock emptyBlock'om или деревьями
		{
			return true;
		}
	}
	return false;
}
