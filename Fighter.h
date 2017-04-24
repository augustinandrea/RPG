/* Data Structures Final Project Fighter.h
   This is the interface (.h) for the Fighter character subclass. 
*/

#ifndef FIGHTER_H
#define FIGHTER_H

#include "Character.h"
#include <string>
#include <iostream>
using namespace std;

class Fighter : public Character
{
	public:
		Fighter(string="Name", string="Fighter", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		virtual void upgradeClass();
		virtual void displayInfo();
		//Any methods a Lord may have that other classes won't
	private:
		//Anything a Lord may have that other classes won't
};
#endif
