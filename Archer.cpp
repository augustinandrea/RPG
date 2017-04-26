/* Data Structures Final Project Archer.cpp
   This is the iplementation (.cpp) for the Archer character subclass.
*/

#include "Character.h"
#include "Archer.h"
#include <iostream>
#include <string>
using namespace std;

Archer::Archer(string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Archer::upgradeClass() {
	Class = "Sniper";
	stats["Max HP"] = 24;
	stats["HP"] = stats["Max HP"];
	stats["Avoid"] = stats["Avoid"] + 5;
	stats["Accuracy"] = stats["Accuracy"] + 5;
	stats["Crit"] = stats["Crit"] + 5;
	stats["Damage"] = stats["Damage"] + 10;
}	

void Archer::displayInfo()
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
