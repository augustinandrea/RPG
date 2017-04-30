/* Data Structures Final Project Cleric.cpp
   This is the iplementation (.cpp) for the Cleric character subclass.
*/

#include "Character.h"
#include "Cleric.h"
#include <iostream>
#include <string>
using namespace std;

Cleric::Cleric (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal) 
{}

void Cleric::upgradeClass() {
  Class = "War Cleric";
  stats["Max HP"] = stats["Max HP"] + 7;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 11;
  stats["Accuracy"] = stats["Accuracy"] - 5;
  stats["Crit"] = stats["Crit"];
  stats["Damage"] = stats["Damage"] + 9;
}

void Cleric::displayInfo()
{
	cout << Name << endl;
	cout << "=========================================" << endl;
	cout << "Class: " << Class << endl;
	cout << "HP: " << stats["Max HP"] << endl;; 
	cout << "Avoid: " << stats["Avoid"] << endl;
	cout << "Heal Points: " << stats["Heal"] << endl;
}
