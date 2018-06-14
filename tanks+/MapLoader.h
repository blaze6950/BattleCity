#pragma once
#include "Header.h"

class MapLoader
{
private:
	vector<Block> _map;
public:
	MapLoader();
	~MapLoader();
	void LoadFile();
};

