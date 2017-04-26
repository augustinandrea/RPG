/* Data Structures Final Project Myrmidon.h
   This is the interface (.h) for the Myrmidon character subclass. 
*/

#ifndef MYRMIDON_H
#define MYRMIDON_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Myrmidon : public Character
{
	public:
		Myrmidon(string="Name", string="Myrmidon", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
