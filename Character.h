/* Data Structures Final Project Character.h
   This is the interface (.h) for the base character class of a Fire Emblem character.
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
using namespace std;

class Character
{
	public:
		Character(string="Name", string="Class", bool=false );
		~Character();
		string getName();
		string getClass();
		bool isDead();
		virtual void upgradeClass() = 0;
		void fight(Character);
		void takeDamage(int);
		void dies();
		virtual void displayInfo() = 0;
	private:
		string Name;
		string Class;
		bool dead;
		//MAP VARIABLE FOR STATS
};
#endif
