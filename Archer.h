/* Data Structures Final Project Archer.h
   This is the interface (.h) for the Archer character subclass. 
*/

#ifndef ARCHER_H
#define ARCHER_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Archer : public Character
{
	public:
		Archer(string="Name", string="Archer", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
