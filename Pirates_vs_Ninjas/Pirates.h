#pragma once
#include "Character.h"
class Pirates :
	public Character
{
public:
	void UseSword();
	Pirates();//constructor
	void Talk(string name, string stuffToSay) override;
	virtual void Attack(int hitPoints);
	virtual void Help();
private:
	string Name;
	string stuffToSay;
	int hitPoints;

};

