/* Data Structures Final Project Cleric.cpp
   This is the iplementation (.cpp) for the Cleric character subclass.
*/

#include "Character.h"
#include "Cleric.h"
#include <iostream>
#include <string>
using namespace std;

Cleric::Cleric (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Cleric::upgradeClass()
{Class = "War Cleric";}

void Cleric::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
