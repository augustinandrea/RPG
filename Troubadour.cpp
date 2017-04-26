/* Data Structures Final Project Troubadour.cpp
   This is the iplementation (.cpp) for the Troubadour character subclass.
*/

#include "Character.h"
#include "Troubadour.h"
#include <iostream>
#include <string>
using namespace std;

Troubadour::Troubadour (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead)
{}

void Troubadour::upgradeClass()
{Class = "Valkyrie";}

void Troubadour::displayInfo()
{
	cout << Name << endl;
	cout << "=========================================" << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
	cout << "HP: " << stats["Max HP"] << endl;; 
	cout << "Avoid: " << stats["Avoid"] << endl;
	cout << "Heal: " << stats["Heal"] << endl;
}
