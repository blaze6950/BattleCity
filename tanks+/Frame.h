#pragma once
#include "Header.h"

class Frame :	public Block
{
public:
	Frame(int x, int y, MapProcessor& _map);
	~Frame();
	void paint();
	void doTheActionWhenABulletHits();
};

