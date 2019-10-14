#pragma once
#include <iostream>
#include "Character.h"
#include "Ninja.h"
#include "Pirates.h"

using namespace std;

class GameDriver
{
public:
	void DisplayIntro();
	void DisplayStats(string character);
	void RandomRoll(int randNum);
};

