/* Data Structures Final Project Barbarian.h
   This is the interface (.h) for the Barbarian character subclass. 
*/

#ifndef BARBARIAN_H
#define BARBARIAN_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Barbarian : public Character
{
	public:
		Barbarian(string="Name", string="Barbarian", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
