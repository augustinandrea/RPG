/* Data Structures Final Project Lord.cpp
   This is the iplementation (.cpp) for the Lord character subclass.
*/

#include "Character.h"
#include "Lord.h"
#include <iostream>
#include <string>
using namespace std;

Lord::Lord (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Lord::upgradeClass()
{Class = "Great Lord";}

void Lord::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
