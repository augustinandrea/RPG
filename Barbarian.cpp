/* Data Structures Final Project Barbarian.cpp
   This is the iplementation (.cpp) for the Barbarian character subclass.
*/

#include "Character.h"
#include "Barbarian.h"
#include <iostream>
#include <string>
using namespace std;

Barbarian::Barbarian (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Barbarian::upgradeClass()
{Class = "Berserker";}

void Barbarian::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
