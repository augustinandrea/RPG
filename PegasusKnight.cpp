/* Data Structures Final Project PegasusKnight.cpp
   This is the iplementation (.cpp) for the Pegasus Knight character subclass.
*/

#include "Character.h"
#include "PegasusKnight.h"
#include <iostream>
#include <string>
using namespace std;

PegasusKnight::PegasusKnight (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void PegasusKnight::upgradeClass()
{Class = "Falcon Knight";}

void PegasusKnight::print()
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
