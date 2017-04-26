/* Data Structures Final Project WyvernRider.h
   This is the interface (.h) for the Wyvern Rider character subclass. 
*/

#ifndef WYVERNRIDER_H
#define WYVERNRIDER_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class WyvernRider : public Character
{
	public:
		WyvernRider(string="Name", string="Wyvern Rider", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
