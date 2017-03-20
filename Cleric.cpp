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
	stats["HP"]= stats["Max HP'];                  // The amount of hp a character currently has
	stats["Max HP"]= 17;		 // The total amount of hp a character has in total
	stats["Avoid"]=avoid;		 // The percentage chance that an unit has in dodging a character's attack
	stats["Accuracy"]=accuracy;      // The percentage chance that an unit's attacks hits
	stats["Heal"] = 
}
