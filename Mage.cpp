/* Data Structures Final Project Mage.cpp
   This is the iplementation (.cpp) for the Mage character subclass.
*/

#include "Character.h"
#include "Mage.h"
#include <iostream>
#include <string>
using namespace std;

Mage::Mage (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Mage::upgradeClass(){
  Class = "Sage";
  stats["Max HP"] = stats["Max HP"] + 13;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 8;
  stats["Accuracy"] = stats["Accuracy"] + 5;
  stats["Crit"] = stats["Crit"] + 10;
  stats["Damage"] = stats["Damage"] + 4;
}

void Mage::displayInfo()
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
