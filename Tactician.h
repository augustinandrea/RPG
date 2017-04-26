/* Data Structures Final Project Tactician.h
   This is the interface (.h) for the Tactician character subclass. 
*/

#ifndef TACTICIAN_H
#define TACTICIAN_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Tactician : public Character
{
	public:
		Tactician(string="Name", string="Tactician", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
