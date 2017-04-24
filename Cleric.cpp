/* Data Structures Final Project Cleric.cpp
   This is the iplementation (.cpp) for the Cleric character subclass.
*/

#include "Character.h"
#include "Cleric.h"
#include <iostream>
#include <string>
using namespace std;

Cleric::Cleric (string Name, string Class, bool dead) : Character (Name, Class, dead) {
  Name= "Lissa";
}

void Cleric::upgradeClass() {
  Class = "War Cleric";

  stats["HP"]= stats["Max HP"];
  stats["Max HP"]= stats["Max HP"] + 7;
  stats["Avoid"]= stats["Avoid"] + 10;
  stats["Heal"] = stats["Heal"] + 5;
}

void Cleric::print()
{
	cout << Name << endl;
	cout << ========================================= << endl;
	cout << "Class: " << Class << endl;
	
	cout << "HP: " << stats["Max HP"] << endl;; 
	cout << "Avoid: " << stats["Avoid"] << endl;
	cout << "Heal Points: " << stats["Heal"] << endl;
}
