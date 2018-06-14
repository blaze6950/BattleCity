#pragma once
#include "Header.h"

using namespace std;

class Block;

class MapProcessor
{
protected:
	vector<Block> _map;
public:
	MapProcessor();
	~MapProcessor();
	void paint();
	vector<Block>& getMap();
	void setMap(vector<Block> map);
	Block* getBlock(int x, int y);
	Block* getBlock(Point* point);
	Block* getNextBlock(Point* point, Direction direction);
	bool canMove(Point* point, Direction direction);
};

