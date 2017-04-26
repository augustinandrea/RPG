/* Data Structures Final Project Character.cpp
   This is the implementation (.cpp) for the base character class of a Fire Emblem character.
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include "Character.h"
using namespace std;

//Constructor, gives a character a name, a class, a death status, and a map of statistics
Character::Character(string n, string c, bool d, int hp, int maxHP, int avoid, int accuracy, int crit, int damage, int critDamage, int heal)
{
	Name = n;
	Class = c;
	dead = d;
	stats["HP"]=hp;                  // The amount of hp a character currently has
	stats["Max HP"]=maxHP;		 // The total amount of hp a character has in total
	stats["Avoid"]=avoid;		 // The percentage chance that an unit has in dodging a character's attack
	stats["Accuracy"]=accuracy;      // The percentage chance that an unit's attacks hits
	stats["Crit"]=crit;		 // The percentage chance that an unit's attack does crit damage
	stats["Damage"]=damage;		 // The amount of damage an attack does
	stats["Crit Damage"]=critDamage; // The amount of critical damage an attack does
	stats["Heal"]=heal;
}

//Deconstructor
Character::~Character() {}

//Getter for name
string Character::getName()
{return Name;}

//Getter for class
string Character::getClass()
{return Class;}

//Getter for death status
bool Character::isDead()
{return dead;}

//Getter for HP
int Character::getHP()
{return stats["HP"];}

//Getter for Max HP
int Character::getMaxHP()
{return stats["Max HP"];}

//Virtual function for upgrading character class
void Character::upgradeClass()
{Class = "Upgraded Class";}

//Function for when one character attacks another
void Character::fight(Character enemy)
{
	srand(time(NULL));
	int critRoll = rand();
	if(critRoll <= stats["Crit"])
	{
		enemy.takeDamage(stats["Crit Damage"]);
		cout << Name << " crits " << enemy.getName() << " and deals " << stats["Crit Damage"] << " damage!" << endl;
	}
	else
	{
		int attackRoll = rand();
		if(attackRoll <= stats["Accuracy"])
		{
			enemy.takeDamage(stats["Damage"]);
			cout << Name << " hits " << enemy.getName() << " and deals " << stats["Damage"] << " damage!" << endl;
			if(enemy.stats["HP"]<=0)
				enemy.dies();
		}
		else
		{
			cout << Name << " misses " << enemy.getName() << "." << endl;
		}
	}
}

//Function for subtracting damage dealt
void Character::takeDamage(int d)
{stats["HP"] = stats["HP"] - d;}

//Function for adding damage healed
void Character::healDamage(int d)
{
	if(stats["HP"] + d >= stats["Max HP"])
		stats["HP"] = stats["Max HP"];
	else
		stats["HP"] = stats["HP"] + d;
}

//Setter for death status
void Character::dies()
{
	dead = true;
	cout << Name << " has fallen!" << endl;
	//DEATH QUOTE???
}

//Virtual function for displaying a character's information
void Character::displayInfo()
{
	cout << Name << endl;
	cout << "=========================================" << endl;
	cout << "Class:          " << Class << endl;
	cout << "Current HP:     " << stats["HP"] << endl;
	cout << "Max HP:         " << stats["Max HP"] << endl;
	cout << "Avoid:          " << stats["Avoid"] << "%" << endl;
	cout << "Accuracy:       " << stats["Accuracy"] << "%" << endl;
	cout << "Crit Rate:      " << stats["Crit"] << "%" << endl;
	cout << "Damage:         " << stats["Damage"] << endl;
	cout << "Crit Damage:    " << stats["Crit Damage"] << endl;
	cout << "Recorvery Rate: " << stats["Heal"] << endl;
}
















