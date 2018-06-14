#pragma once
//#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include "Point.h"
#include "Block.h"
#include "Emptyblock.h"
#include "MapProcessor.h"
#include "MovableBlock.h"
#include "Bullet.h"
#include "Frame.h"

enum Colors // для установки цвета танка
{
	DarkRed = FOREGROUND_RED,
	DarkBlue = FOREGROUND_BLUE,
	DarkGreen = FOREGROUND_GREEN,
	DarkMagenta = FOREGROUND_RED | FOREGROUND_BLUE,
	DarkCyan = FOREGROUND_BLUE | FOREGROUND_GREEN,
	DarkYellow = FOREGROUND_RED | FOREGROUND_GREEN,
	DarkGrey = FOREGROUND_INTENSITY,
	Red = FOREGROUND_RED | FOREGROUND_INTENSITY,
	Blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Green = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	Magenta = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Cyan = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	Yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	Black = 0,
	Grey = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN,
	White = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
};

#include "Tank.h"
#include "MapProcessor.h"
#include "GameProcessor.h"
#include "MapLoader.h"