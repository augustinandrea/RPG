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
		Knight(string="Name", string="Knight", bool=false );
		virtual void upgrade Class();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif