/* Data Structures Final Project Character.h
   This is the interface (.h) for the base character class of a Fire Emblem character.
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using namespace std;

class Character
{
	public:
		Character(string="Name", string="Class", bool=false );
		~Character();
		string getName();
		string getClass();
		bool isDead();
		//UPGRADE CLASS FUNCTION?
		void fight(Character);
		void takeDamage(int);
		void dies();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		//MAP VARIABLE FOR STATS
};
#endif
