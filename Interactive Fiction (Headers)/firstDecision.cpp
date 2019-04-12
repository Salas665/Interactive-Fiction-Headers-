#include <iostream>
#include <string>
//This include statement connects the header file with this file, since
//it is not intergrated in C++, the header file is enclosed by ""
#include "firstDecision.h"

using namespace std;

//This is my function for the first choice the user is given
bool getDecisionOne()
{
	int pathChoice;
	bool isAlive = true;
	cout << "During your search for more food and water, you spot a promising trail just off the road.\n";
	cout << "What will you do?\n";
	cout << "1) Send Dax and Tiffany to investigate\n";
	cout << "2) Go as a group\n";
	//Choice 1 leads to death
	cout << "Enter '1' or '2'\n";
	//Registering user's input
	cin >> pathChoice;
	//Evaluating the user's input

	switch (pathChoice) {
	case 1:
		cout << "Tiffany and Dax are never seen again.\n";
		isAlive = false;
		break;
	case 2:
		cout << "The whole group goes and with the whole group looking around, you manage to\n";
		cout << "to find a lot of food and water among other useful supplies.\n\n";
		isAlive = true;
		break;
	default:
		cout << "You have made an illegal choice, please try again";
		return getDecisionOne();
	}
	return isAlive;
}