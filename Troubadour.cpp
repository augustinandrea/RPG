/* Data Structures Final Project Troubadour.cpp
   This is the iplementation (.cpp) for the Troubadour character subclass.
*/

#include "Character.h"
#include "Troubadour.h"
#include <iostream>
#include <string>
using namespace std;

Troubadour::Troubadour (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Troubadour::upgradeClass()
{Class = "Valkyrie";}

void Troubadour::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
