#include "MapLoader.h"



MapLoader::MapLoader()
{
}


MapLoader::~MapLoader()
{
}

void MapLoader::LoadFile()
{
	char buf[40];
	area.resize(13);
	ifstream stage_null("stage1.txt");
	bool is_open = stage_null.is_open();
	int y = 0;
	for (auto it = area.begin(); it != area.end(); it++)
	{
		stage_null.getline(buf, 40);
		if (buf[0] == 32)
		{
			stage_null.getline(buf, 40);
			y++;
			stage_null.getline(buf, 40);
			y++;
		}
		for (int i = 0; i < 37; i++)
		{
			if (buf[i] != 32)
			{
				it->push_back(decipher(buf[i], i, y));
			}
		}
		y++;
	}

	stage_null.close();
}
