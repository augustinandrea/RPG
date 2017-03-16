/* Data Structures Final Project Fighter.cpp
   This is the iplementation (.cpp) for the Fighter character subclass.
*/

#include "Character.h"
#include "Fighter.h"
#include <iostream>
#include <string>
using namespace std;

Fighter::Fighter (string Name, string Class, bool dead) : Character (Name, Class, dead)
{}

void Fighter::upgradeClass()
{Class = "Warrior";}

void Fighter::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
