#pragma once
#include "Block.h"

class Emptyblock : public Block
{
public:
	Emptyblock(int x, int y, MapProcessor& _map);
	~Emptyblock();
	void paint();
	void doTheActionWhenABulletHits();
};

