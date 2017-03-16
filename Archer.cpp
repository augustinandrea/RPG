/* Data Structures Final Project Archer.cpp
   This is the iplementation (.cpp) for the Archer character subclass.
*/

#include "Character.h"
#include "Archer.h"
#include <iostream>
#include <string>
using namespace std;

Archer::Archer (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Archer::upgradeClass()
{Class = "Sniper";}

void Archer::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
