#include <iostream>
#include <string>
#include "Introduction.h"

using namespace std;

//This is my Introduction function, it gives the user context
string introduction()
{
	string intro;
	cout << "It is year 2023, and a zombie apocalypse is undergoing. You are with a group of ";
	cout << "\n4 survivors (Mike, Alex, Tiffany, and Dax).";
	cout << " You are currently scavenging for supplies \n2 miles away from camp. Your mission is to lead the group of survivors back";
	cout << " to safety with \nthe necessary supplies. Good luck!\n\n";
	return intro;
}