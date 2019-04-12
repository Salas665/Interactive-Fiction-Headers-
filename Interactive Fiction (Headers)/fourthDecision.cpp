#include <iostream>
#include <string>
//This include statement connects the header file with this file, since
//it is not intergrated in C++, the header file is enclosed by ""
#include "fourthDecision.h"

using namespace std;

//This is my function for the fourth choice the user is given
bool getDecisionFour()
{
	bool isAlive = true;
	int pathChoice;
	cout << "Upon being a half a mile away from your camp, you hear crying up ahead, and decide to investigate it.\n";
	cout << "It is a boy no more than 14 years old, he tells your group that he escaped a zombie attack, but his parents\n";
	cout << "weren’t that lucky, he is lost and in need of a shelter\n";
	cout << "How do you wish to handle the situation?\n";
	cout << "1) Take the boy as a new member of the group\n";
	cout << "2) Ignore his cries and return being on your way \n";
	cout << "3) Let Tiffany kill Him \n";
	//Choices 1 and 3 lead to death
	cout << "Enter '1', '2', or '3'\n";
	//Resigtering user's input
	cin >> pathChoice;
	//Evaluting user's input
	switch (pathChoice)
	{
	case 1:
		cout << "You return to camp safely, with a lot of supplies and no members dead.\n";
		cout << "You are looking forward to sleep, as well as everyone else in the group. What none of you\n";
		cout << "know is that that night would be your last. The boy you accepted into the group was bit in the\n";
		cout << "zombie attack he was in. He turned into a zombie in the middle of night and killed every member\n";
		cout << "of the group including you.\n";
		isAlive = false;
		break;
	case 2:
		cout << "You return to camp safely, with a lot of supplies and no members dead. You are looking forward\n";
		cout << "to sleep, as well as everyone else in the group. The next day, you wake up to see all your members\n";
		cout << "around a fire telling stories about their past, you are delighted by the view of companionship\n";
		cout << "you join them and enjoy a well-deserved twinkie.\n";
		isAlive = true;
		break;

	case 3:
		cout << "Tiffany kills the boy, but Mike is furious at Tiffany and they get into a really heated argument.\n";
		cout << "Mike ends up shooting Tiffany. Alex, who was Tiffany's boyfriend shoots Mike in return.\n";
		cout << "and Dax, who was Mike's best friends, points his gun at Alex, Alex reacts just in time for him\n";
		cout << "to be able to shoot Dax. But he was a fraction of a second too late. They end up killing each other.\n";
		cout << "You are the only person left in the group.\n";
		isAlive = false;
		break;
	default:
		cout << "You have made an illegal choice, please try again";
		return getDecisionFour();
	}
	return isAlive;
}