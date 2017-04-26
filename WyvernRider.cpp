/* Data Structures Final Project WyvernRider.cpp
   This is the iplementation (.cpp) for the Wyvern Rider character subclass.
*/

#include "Character.h"
#include "WyvernRider.h"
#include <iostream>
#include <string>
using namespace std;

WyvernRider::WyvernRider (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead)
{}

void WyvernRider::upgradeClass()
{Class = "Wyvern Lord";}

void WyvernRider::displayInfo()
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
