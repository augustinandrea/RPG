/* Data Structures Final Project Knight.h
   This is the interface (.h) for the Knight character subclass. 
*/

#ifndef KNIGHT_H
#define KNIGHT_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Knight : public Character
{
	public:
		Knight(string="Name", string="Knight", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
