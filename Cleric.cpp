/* Data Structures Final Project Cleric.cpp
   This is the iplementation (.cpp) for the Cleric character subclass.
*/

#include "Character.h"
#include "Cleric.h"
#include <iostream>
#include <string>
using namespace std;

Cleric::Cleric (string Name, string Class, bool dead) : Character (Name, Class, dead) {
  Name= "Lissa";
}

void Cleric::upgradeClass() {
  Class = "War Cleric";

  stats["HP"]= stats["Max HP"];
  stats["Max HP"]= stats["Max HP"] + 7;
  stats["Avoid"]= stats["Avoid"] + 10;
  stats["Heal"] = stats["Heal"] + 5;
}

void Cleric::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	stats["HP"]= stats["Max HP"];                  // The amount of hp a character currently has
	stats["Max HP"]= 17;		 // The total amount of hp a character has in total
	stats["Avoid"]=50;		 // The percentage chance that an unit has in dodging a character's attack
	stats["Heal"] = 5;
}
