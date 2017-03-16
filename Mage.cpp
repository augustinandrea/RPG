/* Data Structures Final Project Mage.cpp
   This is the iplementation (.cpp) for the Mage character subclass.
*/

#include "Character.h"
#include "Mage.h"
#include <iostream>
#include <string>
using namespace std;

Mage::Mage (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Mage::upgradeClass()
{Class = "Sage";}

void Mage::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
