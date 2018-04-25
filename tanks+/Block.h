#pragma once
#include <iostream>
#include "Point.h"

class Block
{
protected:
	bool _needRefresh;	
public:
	Point _point;
	Block(int x, int y);
	~Block();
	virtual void paint();	
};

