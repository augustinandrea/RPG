/* Data Structures Final Project Mervenary.cpp
   This is the iplementation (.cpp) for the Mercenary character subclass.
*/

#include "Character.h"
#include "Mercenary.h"
#include <iostream>
#include <string>
using namespace std;

Mercenary::Mercenary (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Mercenary::upgradeClass()
{Class = "Hero";}

void Mercenary::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
	cout << "HP: " << stats["Max HP"] << endl;; 
	cout << "Avoid: " << stats["Avoid"] << endl;
	cout << "Accuracy: " << stats["Accuracy"] << endl;
	cout << "Crit Rate: " << stats["Crit"] << endl;
	cout << "Damage: " << stats["Damage"] << endl;
}
