/* Data Structures Final Project Troubadour.h
   This is the interface (.h) for the Troubadour character subclass. 
*/

#ifndef TROUBADOUR_H
#define TROUBADOUR_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Troubadour : public Character
{
	public:
		Troubadour(string="Name", string="Troudabour", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
