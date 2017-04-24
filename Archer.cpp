/* Data Structures Final Project Archer.cpp
   This is the iplementation (.cpp) for the Archer character subclass.
*/

#include "Character.h"
#include "Archer.h"
#include <iostream>
#include <string>
using namespace std;

Archer::Archer (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Archer::upgradeClass() {
	Class = "Sniper";
	stats["Max HP"] = 24 
	stats["HP"] = stats["Max HP"];
	stats["Avoid"] = stats["Avoid"] + 5;
	stats["Accuracy"] = stats["Accuracy"] + 5;
	stats["Crit"] = stats["Crit"] + 5;
	stats["Damage"] = stats["Damage"] + 10;
}	

void Archer::print()
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
