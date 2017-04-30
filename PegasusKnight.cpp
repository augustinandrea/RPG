/* Data Structures Final Project PegasusKnight.cpp
   This is the iplementation (.cpp) for the Pegasus Knight character subclass.
*/

#include "Character.h"
#include "PegasusKnight.h"
#include <iostream>
#include <string>
using namespace std;

PegasusKnight::PegasusKnight (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal)
{}

void PegasusKnight::upgradeClass(){
  Class = "Falcon Knight";
  stats["Max HP"] = stats["Max HP"] + 8;
  stats["HP"] = stats["Max HP"];
  stats["Avoid"] = stats["Avoid"] + 16;
  stats["Accuracy"] = stats["Accuracy"] + 10;
  stats["Crit"] = stats["Crit"] + 7;
  stats["Damage"] = stats["Damage"] + 6;
}

void PegasusKnight::displayInfo()
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
