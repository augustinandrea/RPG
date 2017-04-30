/* Data Structures Final Project Troubadour.cpp
   This is the iplementation (.cpp) for the Troubadour character subclass.
*/

#include "Character.h"
#include "Troubadour.h"
#include <iostream>
#include <string>
using namespace std;

Troubadour::Troubadour (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Troubadour::upgradeClass(){
  Class = "Valkyrie";
  stats["Max HP"] = stats["Max HP"] + 12;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 17;
  stats["Heal"] = stats["Heal"] + 9
}

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
