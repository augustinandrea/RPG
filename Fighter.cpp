/* Data Structures Final Project Fighter.cpp
   This is the iplementation (.cpp) for the Fighter character subclass.
*/

#include "Character.h"
#include "Fighter.h"
#include <iostream>
#include <string>
using namespace std;

Fighter::Fighter (string Name, string Class, bool dead, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal) : Character (Name, Class, dead)
{}

void Fighter::upgradeClass()
{Class = "Warrior";}

void Fighter::displayInfo()
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
