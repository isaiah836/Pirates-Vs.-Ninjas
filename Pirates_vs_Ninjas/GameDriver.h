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
	void Fight();
	void PickCharacter(char userChoice);
	void DisplayStats(string character);
	void RandomRoll(int randNum);
private:
	//in case of need of private variables
};


