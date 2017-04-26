/* Data Structures Final Project Cleric.h
   This is the interface (.h) for the Cleric character subclass. 
*/

#ifndef CLERIC_H
#define CLERIC_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Cleric : public Character
{
	public:
		Cleric(string="Name", string="Cleric", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
