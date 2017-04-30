/* Data Structures Final Project Tactician.cpp
   This is the iplementation (.cpp) for the Tactician character subclass.
*/

#include "Character.h"
#include "Tactician.h"
#include <iostream>
#include <string>
using namespace std;

Tactician::Tactician (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Tactician::upgradeClass(){
  Class = "Grandmaster";
  stats["Max HP"] = stats["Max HP"] + 8;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 11;
  stats["Accuracy"] = stats["Accuracy"] + 5;
  stats["Crit"] = stats["Crit"] + 5;
  stats["Damage"] = stats["Damage"] + 8;
}

void Tactician::displayInfo()
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
