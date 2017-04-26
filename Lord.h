/* Data Structures Final Project Lord.h
   This is the interface (.h) for the Lord character subclass. 
*/

#ifndef LORD_H
#define LORD_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Lord : public Character
{
	public:
		Lord(string="Name", string="Lord", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
