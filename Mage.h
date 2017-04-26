/* Data Structures Final Project Mage.h
   This is the interface (.h) for the Mage character subclass. 
*/

#ifndef MAGE_H
#define MAGE_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Mage : public Character
{
	public:
		Mage(string="Name", string="Mage", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
