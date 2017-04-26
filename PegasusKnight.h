/* Data Structures Final Project PegasusKnight.h
   This is the interface (.h) for the Pegasus Knight character subclass. 
*/

#ifndef PEGASUSKNIGHT_H
#define PEGASUSKNIGHT_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class PegasusKnight : public Character
{
	public:
		PegasusKnight(string="Name", string="Pegasus Knight", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
