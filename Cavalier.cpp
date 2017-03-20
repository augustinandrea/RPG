/* Data Structures Final Project Cavalier.cpp
   This is the iplementation (.cpp) for the Cavalier character subclass.
*/

#include "Character.h"
#include "Cavalier.h"
#include <iostream>
#include <string>
using namespace std;

Cavaleir::Cavalier (string Name, string Class, bool dead) : Character (Name, Class, dead)
{ Name = "Stahl";
}

void Cavalier::upgradeClass() {
	Class = "Paladin";
	stats["HP"]= stats["Max HP"];                  // The amount of hp a character currently has
	stats["Max HP"]= 30;		 // The total amount of hp a character has in total
	stats["Avoid"]= stats["Avoid"] + 5;		 // The percentage chance that an unit has in dodging a character's attack
	stats["Accuracy"]= stats["Accuracy"] + 5;      // The percentage chance that an unit's attacks hit
	stats["Damage"]= 12;		 // The amount of damage an attack does
	stats["Crit Damage"]= 18;
}

void Cavalier::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	stats["HP"]= stats["Max HP"];                  // The amount of hp a character currently has
	stats["Max HP"]= 22;		 // The total amount of hp a character has in total
	stats["Avoid"]= 50;		 // The percentage chance that an unit has in dodging a character's attack
	stats["Accuracy"]= 55;      // The percentage chance that an unit's attacks hits
	stats["Crit"]= 55;		 // The percentage chance that an unit's attack does crit damage
	stats["Damage"]= 8;		 // The amount of damage an attack does
	stats["Crit Damage"]= 12;
}
