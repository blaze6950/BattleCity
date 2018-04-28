#include "Bullet.h"


Bullet::Bullet(Point* point, Direction direction)
{
	this->_point.setX(point->getX());
	this->_point.setY(point->getY());
}

Bullet::~Bullet()
{
}
