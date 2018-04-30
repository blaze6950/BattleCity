#pragma once
#include <iostream>
#include "Point.h"
#include "MapProcessor.h"

class Block
{
protected:
	bool _needRefresh;	
	MapProcessor* _mapProcessor;
public:
	Point _point;
	Block(int x, int y, MapProcessor& _map);
	~Block();
	virtual void paint();	
	virtual void doTheActionWhenABulletHits();
	void setNeedRefrsh(bool value);
};

