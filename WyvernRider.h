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
		WyvernRider(string="Name", string="Wyvern Rider", bool=false );
		virtual void upgrade Class();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
