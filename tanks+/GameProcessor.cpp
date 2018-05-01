#include "GameProcessor.h"



GameProcessor::GameProcessor()
{
}


GameProcessor::~GameProcessor()
{
}

void GameProcessor::MakeOneCycle()
{
	int key = 0;
	while (!_kbhit())
	{
		/*if (tank::game == 0)
		{
			break;
		}
		t1.RWhatDo();
		t1.MoveBullet();
		t2.MoveBullet();
		t1.MoveBullet();
		t2.MoveBullet();*/

		int size = (_mapProcessor->getMap).size();
		for (int i = 0; i < size; i++)
		{
			(_mapProcessor->getMap)[i].paint();
		}

		Sleep(200 - _speed);
	}
	key = _getch();
	if (key == 224 || key == 0)
		key = _getch();
	//_mainTank.WhatDo(key);
	/*if (tank::game == 0)
	{
		break;
	}*/
}

void GameProcessor::LoadMap()
{
	MapLoader* mapLoader = new MapLoader();
	mapLoader->LoadFile();
	_mapProcessor->setMap(mapLoader->)
}
