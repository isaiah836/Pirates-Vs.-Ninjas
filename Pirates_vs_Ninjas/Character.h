#pragma once
#include <iostream>
#include <string>
#include "GameStructure.h"

using namespace std;

class Character :
	public GameStructure
{
public:
	string Name;
	virtual int GetHealth(int health);
	virtual void SetHealth(int health);
	virtual void Talk(string stuffToSay);
	virtual void Attack(int hitPoints);
	virtual void Help() override;

private:
	int health;
	int hitPoints;
};

