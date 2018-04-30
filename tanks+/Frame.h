#pragma once
#include "Block.h"
class Frame :
	public Block
{
public:
	Frame(int x, int y, MapProcessor& _map);
	~Frame();
	void paint();
	void doTheActionWhenABulletHits();
};

