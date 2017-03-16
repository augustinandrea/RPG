/* Data Structures Final Project Cavalier.cpp
   This is the iplementation (.cpp) for the Cavalier character subclass.
*/

#include "Character.h"
#include "Cavalier.h"
#include <iostream>
#include <string>
using namespace std;

Cavaleir::Cavalier (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Cavalier::upgradeClass()
{Class = "Paladin";}

void Cavalier::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
