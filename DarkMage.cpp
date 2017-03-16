/* Data Structures Final Project DarkMage.cpp
   This is the iplementation (.cpp) for the DarkMage character subclass.
*/

#include "Character.h"
#include "DarkMage.h"
#include <iostream>
#include <string>
using namespace std;

DarkMage::DarkMage (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void DarkMage::upgradeClass()
{Class = "Sorcerer";}

void DarkMage::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
