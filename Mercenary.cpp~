/* Data Structures Final Project Mervenary.cpp
   This is the iplementation (.cpp) for the Mercenary character subclass.
*/

#include "Character.h"
#include "Mercenary.h"
#include <iostream>
#include <string>
using namespace std;

Mercenary::Mercenary (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Mercenary::upgradeClass()
{Class = "Hero";}

void Mercenary::displayInfo()
{
	cout << Name << endl;
	cout << "=========================================" << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
	cout << "HP: " << stats["Max HP"] << endl;; 
	cout << "Avoid: " << stats["Avoid"] << endl;
	cout << "Accuracy: " << stats["Accuracy"] << endl;
	cout << "Crit Rate: " << stats["Crit"] << endl;
	cout << "Damage: " << stats["Damage"] << endl;
}
