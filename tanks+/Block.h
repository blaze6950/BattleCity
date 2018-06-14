#pragma once
#include "Header.h"

class MapProcessor;

class Block{
protected:
	bool _needRefresh;	
	MapProcessor *_mapProcessor;
public:
	Point _point;
	Block(int x, int y, MapProcessor& _map);
	~Block();
	virtual void paint();	
	virtual void doTheActionWhenABulletHits();
	void setNeedRefresh(bool value);
};

