/* Data Structures Final Project Character.cpp
   This is the implementation (.cpp) for the base character class of a Fire Emblem character.
*/

#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

Character::Character(string n, string c, bool d)
{
	Name = n;
	Class = c;
	dead = d;
}

Character::~Character() {}

string Character::getName()
{return Name;}

string Character::getClass()
{return Class;}

bool Character::isDead()
{return dead;}

virtual void Character::upgradeClass()
{Class = "Upgraded Class";}

void Character::fight(Character enemy)
{
	int roll = rand();
	if(roll <= hitPercent)
	{
		enemy.takeDamage(attack);
		cout << Name << " hits " << enemy.getName() << " and deals " << attack << " damage!" << endl;
		if(enemy.getHP() <= 0)
			enemy.dies();
	}
	else()
	{
		cout << Name << " misses " << enemy.getName() << "." << endl;
	}
}

void Character::takeDamage(int d)
{hp = hp - d;}

void Character::dies()
{
	dead = true;
	cout << Name << " has fallen!" << endl;
	//DEATH QUOTE???
}

void Character::displayInfo()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	//DISPLAY STATS FROM MAP
}
















