/* Data Structures Final Project Barbarian.cpp
   This is the iplementation (.cpp) for the Barbarian character subclass.
*/

#include "Character.h"
#include "Barbarian.h"
#include <iostream>
#include <string>
using namespace std;

Barbarian::Barbarian (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Barbarian::upgradeClass(){
  Class = "Berserker";
  stats["Max HP"] = stats["Max HP"] + 10;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 9;
  stats["Accuracy"] = stats["Accuracy"] + 8;
  stats["Crit"] = stats["Crit"] + 15;
  stats["Damage"] = stats["Damage"] + 10;
}

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
