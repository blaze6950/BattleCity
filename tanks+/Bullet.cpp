#include "Bullet.h"


Bullet::Bullet(Point* point, Direction direction, MapProcessor map, int speed) : MovableBlock(point->getX(), point->getY(), map, speed)
{
}

Bullet::~Bullet()
{
}

void Bullet::doTheActionWhenABulletHits()
{
}
