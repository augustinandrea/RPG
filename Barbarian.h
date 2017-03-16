/* Data Structures Final Project Barbarian.h
   This is the interface (.h) for the Barbarian character subclass. 
*/

#ifndef BARBARIAN_H
#define BARBARIAN_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Barbarian : public Character
{
	public:
		Barbarian(string="Name", string="Barbarian", bool=false );
		virtual void upgrade Class();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
