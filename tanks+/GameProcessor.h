#pragma once
#include "Header.h"

class GameProcessor
{
private:
	MapProcessor* _mapProcessor;
	Tank* _mainTank;
	vector<Tank*> _botTanks;
	vector<Bullet*> _bullets;
	//vector<Bonus*> _bonuses;
	int _speed; // общий темп игры
public:
	GameProcessor();
	~GameProcessor();
	void MakeOneCycle();
	void LoadMap();
};

