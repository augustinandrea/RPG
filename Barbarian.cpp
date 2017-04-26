/* Data Structures Final Project Barbarian.cpp
   This is the iplementation (.cpp) for the Barbarian character subclass.
*/

#include "Character.h"
#include "Barbarian.h"
#include <iostream>
#include <string>
using namespace std;

Barbarian::Barbarian (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead)
{}

void Barbarian::upgradeClass()
{Class = "Berserker";}

void Barbarian::displayInfo()
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
