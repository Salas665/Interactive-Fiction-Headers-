#include <iostream>
#include <string>
//This include statement connects the header file with this file, since
//it is not intergrated in C++, the header file is enclosed by ""
#include "secondDecision.h"

using namespace std;

//This is my function for the second choice the user is given
bool getDecisionTwo()
{
	bool isAlive = true;
	int pathChoice;
	string getPathTwo;
	cout << "While still scavenging, you are halted by the noise of rustling leaves, and it is coming from behind you!\n";
	cout << "What do you do?\n";
	cout << "1) Turn around and investigate\n";
	cout << "2) Run!\n";
	//Choice 2 leads to death
	cout << "Enter '1' or '2'\n";
	//Registering user's input
	cin >> pathChoice;
	//Evaluating the user's input
	switch (pathChoice)
	{
	case 1:
		cout << "You come to find out that it was a wounded deer that was causing the ruckus. You decide to kill\n";
		cout << "it and harvest its meat. More food for the camp!\n\n";
		isAlive = true;
		break;
	case 2:
		cout << "You and your group run until the whole group is fatigued, while everyone catching your breath\n";
		cout << "you are ambushed by a horde of zombies and you died, the only survivor was Dax.\n";
		isAlive = false;
		break;
	default:
		cout << "You have made an illegal choice, please try again";
		return getDecisionTwo();
	}
	return isAlive;
}