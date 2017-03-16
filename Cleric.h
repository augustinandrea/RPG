/* Data Structures Final Project Cleric.h
   This is the interface (.h) for the Cleric character subclass. 
*/

#ifndef CLERIC_H
#define CLERIC_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Cleric : public Character
{
	public:
		Cleric(string="Name", string="Cleric", bool=false );
		virtual void upgrade Class();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
