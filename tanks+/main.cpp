#include "Header.h"

using namespace std;

void main()
{
	MapProcessor* map = new MapProcessor();
	Block* newBlock = new Block(10, 20, *map);
	newBlock->doTheActionWhenABulletHits();
	system("pause");
}