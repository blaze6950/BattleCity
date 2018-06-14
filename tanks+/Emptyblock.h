#pragma once
#include "Header.h"

class Block;

class Emptyblock : public Block
{
public:
	Emptyblock(int x, int y, MapProcessor& _map);
	~Emptyblock();
	void paint();
	//void doTheActionWhenABulletHits();
};

