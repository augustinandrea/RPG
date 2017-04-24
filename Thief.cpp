/* Data Structures Final Project Thief.cpp
   This is the iplementation (.cpp) for the Thief character subclass.
*/

#include "Character.h"
#include "Thief.h"
#include <iostream>
#include <string>
using namespace std;

Thief::Thief (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Thief::upgradeClass()
{Class = "Trickster";}

void Thief::print()
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
