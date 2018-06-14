#pragma once
#include "Header.h"

class Tank :
	public MovableBlock
{
private:
	Colors _color;
	int _hp;
	Bullet* _bullet;
public:
	Tank(Point* point, Direction direction, MapProcessor map, int speed);
	~Tank();
	void paint();
	void setColor(Colors color);
	Colors getColor();
	void setHP(int hp);
	int getHP();
	void Fire();
};

