/* Data Structures Final Project Lord.h
   This is the interface (.h) for the Lord character subclass. 
*/

#ifndef LORD_H
#define LORD_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Lord : public Character
{
	public:
		Lord(string="Name", string="Lord", bool=false );
		virtual void upgrade Class();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
