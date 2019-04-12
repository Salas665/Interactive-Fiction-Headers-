#include <iostream>
#include <string>
//This include statement connects the header file with this file, since
//it is not intergrated in C++, the header file is enclosed by ""
#include "thirdDecision.h"

using namespace std;

//This is my function for the third choice the user is given
bool getDecisionThree()
{
	bool isAlive = true;
	int pathChoice;

	cout << "You are coming to the end of the scavenging route and will need to turn back soon. Mike tells the group that he\n";
	cout << "is familiar with the are and knows of a shortcut to the camp\n";
	cout << "What do you wish to do?\n";
	cout << "1) Take the shortcut\n";
	cout << "2) Take the normal route\n";
	//Choice 1 leads to death
	cout << "Enter '1' or '2'\n";
	//Registering user's input
	cin >> pathChoice;
	//Evaluating the user's input
	switch (pathChoice)
	{
	case 1:
		cout << "While on the shortcut the group is ambushed by a horde of zombies, there are no survivors left.\n";
		isAlive = false;
		break;
	case 2:
		cout << "halfway to their return you spot a Twinkie truck, upon opening it, you ecstatic to see that it has not been looted yet.\n";
		cout << "You gather as much Twinkies as the group can hold and continue the trail back to the camp.\n\n";
		isAlive = true;
		break;
	default:
		cout << "You have made an illegal choice, please try again";
		return getDecisionThree();
	}
	return isAlive;
}