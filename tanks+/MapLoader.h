#pragma once
#include "Header.h"
#include "Block.h"

class MapLoader
{
private:
	vector<Block> _map;
public:
	MapLoader();
	~MapLoader();
	void LoadFile();
};

