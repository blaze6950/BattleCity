#pragma once
#include "MapProcessor.h"

class GameProcessor
{
private:
	MapProcessor* _mapProcessor;
public:
	GameProcessor();
	~GameProcessor();
	void MakeOneCycle();
};

