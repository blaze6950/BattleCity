#include "GameProcessor.h"



GameProcessor::GameProcessor()
{
}


GameProcessor::~GameProcessor()
{
}

void GameProcessor::MakeOneCycle()
{
	int size = (_mapProcessor->getMap).size();
	for (int i = 0; i < size; i++)
	{
		(_mapProcessor->getMap)[i].paint();
	}
}
