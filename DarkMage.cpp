/* Data Structures Final Project DarkMage.cpp
   This is the iplementation (.cpp) for the DarkMage character subclass.
*/

#include "Character.h"
#include "DarkMage.h"
#include <iostream>
#include <string>
using namespace std;

DarkMage::DarkMage (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead, hp, maxHP, avoid, accuracy, crit, damage, critDamage, heal) 
{}

void DarkMage::upgradeClass() {
  Class = "Sorcerer";
  stats["HP"]= stats["Max HP"];       // The amount of hp a character currently has
  stats["Max HP"]= stats["Max HP"] + 12;        // The total amount of hp a character has in total   
  stats["Avoid"]= stats["Avoid"] + 5;         // The percentage chance that an unit has in dodging a character's attack 
  stats["Accuracy"]= stats["Accuracy"] + 3;      // The percentage chance that an unit's attacks hits
  stats["Crit"]= stats["Crit"] + 10;          // The percentage chance that an unit's attack does crit damage
  stats["Damage"]= stats["Damage"] + 3;        // The amount of damage an attack does 
  stats["Crit Damage"]= stats["Crit Damage"] + 6;
}

void DarkMage::displayInfo()
{
	cout << Name << endl;
	cout << "=========================================" << endl;
	cout << "Class: " << Class << endl;
  cout << "HP: " << stats["Max HP"] << endl;              // The amount of hp a character currently has
	cout << "Avoid: " << stats["Avoid"] << endl;         // The percentage chance that an unit has in dodging a character's attack
  cout << "Accuracy: " << stats["Accuracy"] << endl;      // The percentage chance that an unit's attacks hits 
  cout << "Critical: " << stats["Crit"] << endl;          // The percentage chance that an unit's attack does crit damage                                                
  cout << "Damage: " << stats["Damage"] << endl;        // The amount of damage an attack does
}
