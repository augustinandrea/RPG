/* Data Structures Final Project Myrmidon.cpp
   This is the iplementation (.cpp) for the Myrmidon character subclass.
*/

#include "Character.h"
#include "Myrmidon.h"
#include <iostream>
#include <string>
using namespace std;

Myrmidon::Myrmidon (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void Myrmidon::upgradeClass(){
  Class = "Swordmaster";
  stats["Max HP"] = stats["Max HP"] + 11;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 12;
  stats["Accuracy"] = stats["Accuracy"] + 9;
  stats["Crit"] = stats["Crit"] + 11;
  stats["Damage"] = stats["Damage"] + 9;
}

void Myrmidon::displayInfo()
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
