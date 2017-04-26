/* Data Structures Final Project Cavalier.cpp
   This is the iplementation (.cpp) for the Cavalier character subclass.
*/

#include "Character.h"
#include "Cavalier.h"
#include <iostream>
#include <string>
using namespace std;

Cavalier::Cavalier(string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Cavalier::upgradeClass() {
	Class = "Paladin";
	stats["HP"]= stats["Max HP"];                  // The amount of hp a character currently has
	stats["Max HP"]= 42;		 // The total amount of hp a character has in total
	stats["Avoid"]= stats["Avoid"] + 5;		 // The percentage chance that an unit has in dodging a character's attack
	stats["Accuracy"]= stats["Accuracy"] + 3;      // The percentage chance that an unit's attacks hit
	stats["Damage"]= 11;		 // The amount of damage an attack does
	stats["Crit Damage"]= stats["Crit Damage"] + 6;
}

void Cavalier::displayInfo()
{
	cout << Name << endl;
	cout << "=========================================" << endl;
	cout << "Class: " << Class << endl;
	cout << "HP: " << stats["Max HP"] << endl;; 
	cout << "Avoid: " << stats["Avoid"] << endl;
	cout << "Accuracy: " << stats["Accuracy"] << endl;
	cout << "Crit Rate: " << stats["Crit"] << endl;
	cout << "Damage: " << stats["Damage"] << endl;
}
