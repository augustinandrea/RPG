/* Data Structures Final Project Thief.h
   This is the interface (.h) for the Thief character subclass. 
*/

#ifndef THIEF_H
#define THIEF_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Thief : public Character
{
	public:
		Thief(string="Name", string="Thief", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
