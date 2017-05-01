/* Data Structures Final Project Character.h
   This is the interface (.h) for the base character class of a Fire Emblem character.
*/

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include <map>
using namespace std;

class Character
{
	public:
		Character(string="Name", string="Class", bool=false, int=0, int=0, int=0, int=0, int=0, int=0, int=0, int=0);
		~Character();
		string getName();
		string getClass();
		bool isDead();
		int getHP();
		int getMaxHP();
		int getHeal();
		int getAvoid();
		int getAccuracy();
		int getDamage();
		int getCrit();
		int getCritDamage();
		virtual void upgradeClass();
		void takeDamage(int);
		void healDamage(int);
		void dies();
		virtual void displayInfo();
	private:
		string Name;
		string Class;
		bool dead;
		map<string,int> stats;
};
#endif
