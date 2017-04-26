/* Data Structures Final Project DarkMage.h
   This is the interface (.h) for the Dark Mage character subclass. 
*/

#ifndef DARKMAGE_H
#define DARKMAGE_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class DarkMage : public Character
{
	public:
		DarkMage(string="Name", string="Dark Mage", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
