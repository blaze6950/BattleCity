#pragma once
#include "Block.h"
#include "vector"
#include "Header.h"

using namespace std;

class MapProcessor
{
protected:
	vector<vector<Block>> _map;
public:
	MapProcessor();
	~MapProcessor();
	void paint();
	vector<vector<Block>> getMap();
	void setMap(vector<vector<Block>> map);
	Block* getBlock(int x, int y);
	Block* getBlock(Point point);
	bool canMove(Point point, Direction dir);
};

