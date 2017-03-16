/* Data Structures Final Project Tactician.cpp
   This is the iplementation (.cpp) for the Tactician character subclass.
*/

#include "Character.h"
#include "Tactician.h"
#include <iostream>
#include <string>
using namespace std;

Tactician::Tactician (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Tactician::upgradeClass()
{Class = "Grandmaster";}

void Tactician::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
