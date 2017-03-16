/* Data Structures Final Project PegasusKnight.h
   This is the interface (.h) for the Pegasus Knight character subclass. 
*/

#ifndef PEGASUSKNIGHT_H
#define PEGASUSKNIGHT_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class PegasusKnight : public Character
{
	public:
		PegasusKnight(string="Name", string="Pegasus Knight", bool=false );
		virtual void upgrade Class();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
