#pragma once
#include "Character.h"
#include <iostream>

using namespace std;

class Ninjas :
	public Character
{
public:
	void ThrowStars();
	Ninjas();
	void Talk(string name, string stuffToSay) override;
	void Attack(int hitPoints) override;
	void Help() override;
private:
	string Name;
	string stuffToSay;
	int hitPoints;
};

