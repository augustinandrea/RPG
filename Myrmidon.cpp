/* Data Structures Final Project Myrmidon.cpp
   This is the iplementation (.cpp) for the Myrmidon character subclass.
*/

#include "Character.h"
#include "Myrmidon.h"
#include <iostream>
#include <string>
using namespace std;

Myrmidon::Myrmidon (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Myrmidon::upgradeClass()
{Class = "Swordmaster";}

void Myrmidon::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
