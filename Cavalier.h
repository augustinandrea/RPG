/* Data Structures Final Project Cavalier.h
   This is the interface (.h) for the Cavalier character subclass. 
*/

#ifndef CAVALIER_H
#define CAVALIER_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Cavalier : public Character
{
	public:
		Cavalier(string="Name", string="Cavalier", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
