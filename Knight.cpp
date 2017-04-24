/* Data Structures Final Project Knight.cpp
   This is the iplementation (.cpp) for the Knight character subclass.
*/

#include "Character.h"
#include "Knight.h"
#include <iostream>
#include <string>
using namespace std;

Knight::Knight (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Knight::upgradeClass()
{Class = "General";}

void Knight::print()
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
