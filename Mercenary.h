/* Data Structures Final Project Mercenary.h
   This is the interface (.h) for the Mercenary character subclass. 
*/

#ifndef MERCENARY_H
#define MERCENARY_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Mercenary : public Character
{
	public:
		Mercenary(string="Name", string="Mercenary", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
