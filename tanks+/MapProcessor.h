#pragma once
#include "Block.h"
#include "vector"
#include "Header.h"
#include "Emptyblock.h"
#include "Bullet.h"

using namespace std;

class MapProcessor
{
protected:
	vector<Block> _map;
public:
	MapProcessor();
	~MapProcessor();
	void paint();
	vector<Block> getMap();
	void setMap(vector<Block> map);
	Block* getBlock(int x, int y);
	Block* getBlock(Point* point);
	Block* getNextBlock(Point* point, Direction direction);
	bool canMove(Point* point, Direction direction);
};

