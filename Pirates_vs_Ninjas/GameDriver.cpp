#include "GameDriver.h"


void Main()
{
	//Variable intialization
	GameDriver* gameDrvPtr;
	int choice;
	Pirates* piratePtr;
	Ninja* ninjaPtr;
	char userchar;

	do {


		gameDrvPtr->DisplayIntro();
		cin >> choice;

		userChar = gameDrvPtr->PickCharacter();
		
	} while (choice != 2);
}

void GameDriver::DisplayIntro()
{
	cout << "Welcome to Pirates vs. Ninjas!" << endl << "What would you like to do?/nFight(1) or Escape(2): ";
}

void GameDriver::DisplayStats(string character)
{
}

void GameDriver::RandomRoll(int randNum)
{
}
char GameDriver::PickCharacter(char userChoice)
{
	do
	{
		cout << "\t\tWhich Fighter are you?\n\tA)Pirate\n\tB)Ninja\n";
		cin >> userChoice;
	} while (userChoice != 'a' || 'b');

	return userChoice;
}

