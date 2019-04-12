#include <iostream>
#include <string>
//These include statements connect the header files with this file, since
//it is not intergrated in C++, the header files are enclosed by ""
#include "Introduction.h"
#include "firstDecision.h"
#include "secondDecision.h"
#include "thirdDecision.h"
#include "fourthDecision.h"

using namespace std;

int main()
{
	//Declaring the bool variable (locally on main)
	bool isAlive = true;
	//introduction function
	introduction();
	system("pause");
	//First scenario
	isAlive = getDecisionOne();
	if (isAlive == true)
	{
		//Second scenario
		//This is CRUCIAL
		//This sets up the local variable in main, to whatever is returned in the function
		isAlive = getDecisionTwo();
	}
	else
	{
		cout << "You lost two members of the group.\n";
		cout << "Game Over!\n\n";
		system("\npause");
		//This exits the program
		return 0;
	}
	//Third scenario
	if (isAlive == true)
	{
		isAlive = getDecisionThree();
	}
	else
	{
		cout << "You and 3 members of your group are dead...\n";
		cout << "Game Over!\n\n";
		system("\npause");
		//This exits the program
 		return 0;
	}

	if (isAlive == true)
	{
		//Fourth scenario
		isAlive = getDecisionFour();
	}
	if (isAlive == false)
	{
		cout << "Game Over!\n";
		system("pause");
		//This exits the program
		return 0;
	}
	cout << "\nCongratulations! You have survived yet another day in hell on Earth.\n";
	system("pause");
	return 0;
}