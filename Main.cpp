#include <iostream>
#include <stdlib.h>
#include <string>
#include <map>
#include <time.h>

using namespace std;

#include "Character.h"
#include "Archer.h"
#include "Barbarian.h"
#include "Cavalier.h"
#include "Cleric.h"
#include "DarkMage.h"
#include "Fighter.h"
#include "Knight.h"
#include "Lord.h"
#include "Mage.h"
#include "Mercenary.h"
#include "Myrmidon.h"
#include "PegasusKnight.h"
#include "Tactician.h"
#include "Thief.h"
#include "Troubadour.h"
#include "WyvernRider.h"

void characterInitialization();
void enemyInitialization();

Character characters[30];
Character enemies[6];
Character party[6];

int main()
{
	characterInitialization();
	for(int a=0; a<30; a++)
        {
		characters[a].displayInfo();
                cout << endl;
        }
	party[0] = characters[0];
	party[1] = characters[1];
	party[2] = characters[2];
	party[3] = characters[3];
	party[4] = characters[4];
	party[5] = characters[5];
	for(int b=0; b<6; b++)
        {
		party[b].displayInfo();
                cout << endl;
        }
	enemyInitialization();
	for(int c=0; c<6; c++)
        {
		enemies[c].displayInfo();
                cout << endl;
        }
}

void characterInitialization()
{
	characters[0] = Archer("Virion", "Archer", false, 19, 19, 60, 70, 40, 5, 15, 0);
        characters[1]  = Archer("Noire", "Acher", false, 13, 13, 70, 65, 40, 8, 20, 0);
        characters[2] = Barbarian("Bjorn", "Barbarian", false, 25, 25, 60, 30, 10, 8, 20, 0);
        characters[3] = Barbarian("Garrick", "Barbarian", false, 30, 30, 75, 55, 30, 8, 20, 0);
        characters[4] = Cleric("Lissa", "Cleric", false, 18, 18, 100, 70, 0, 0, 0, 10);
        characters[5] = Cleric("Brady", "Cleric", false, 18, 18, 100, 70, 0, 0, 0, 10);
        characters[6] = DarkMage("Henry", "Dark Mage", false, 17, 17, 55, 80, 50, 10, 18, 0);
        characters[7] = DarkMage("Tharja", "Dark Mage", false, 11, 11, 60, 70, 40, 11, 19, 0);
        characters[8] = Fighter("Vaike", "Fighter", false, 24, 24, 50, 65, 45, 9, 18, 0);
        characters[9] = Fighter("Malice", "Fighter", false, 22, 22, 75, 60, 50, 10, 20, 0);
        characters[10] = Knight("Kellam", "Knight", false, 25, 25, 15, 65, 45, 9, 20, 0);
        characters[11] = Knight("Kjelle", "Knight", false, 21, 21, 60, 90, 70, 7, 15, 0);
        characters[12] = Lord("Chrom", "Lord", false, 21, 21, 90, 60, 70, 7, 12, 0);
        characters[13] = Lord("Lucina", "Lord", false, 21, 21, 90, 63, 70, 5, 17, 0);
        characters[14] = Mage("Ricken", "Mage", false, 20, 20, 70, 50, 65, 8, 18, 0);
        characters[15] = Mage("Miriel", "Mage", false,21, 21, 75, 60, 50, 6, 12, 0);
        characters[16] = Mercenary("Gregor", "Mercenary", false, 30, 30, 65, 50, 12, 20, 0);
        characters[17] = Mercenary("Severa", "Mercenary", false, 12, 12, 95, 35, 10, 18, 0);
        characters[18] = Myrmidon("Lon'qu", "Myrmidon", false, 20, 20, 65, 75, 55, 6, 13,0);
        characters[19] = Myrmidon("Owain", "Myrmidon", false, 15, 15, 95, 35, 50, 8, 17, 0);
        characters[20] = PegasusKnight("Sumia","Pegasus Knight", false, 18, 18, 70, 70, 60, 6, 17, 0);
        characters[21] = PegasusKnight("Cordelia", "Pegasus Knight", false, 25, 25, 60, 60, 45, 9, 18, 0);
        characters[22] = Tactician("Robin", "Tactician", false, 19, 19, 95, 50, 55, 9, 18, 0);
        characters[23] = Tactician("Morgan", "Tactician", false, 19, 19, 95, 50, 55, 9, 18, 0);
        characters[24] = Thief("Gaius", "Thief", false, 22, 22, 70, 70, 40, 7, 13, 0);
        characters[25] = Thief("Anna", "Thief", false, 22, 22, 70, 70, 40, 7, 13, 0);
        characters[26] = Troubadour("Maribelle", "Troubadour", false, 18, 18, 100, 70, 0, 0, 0, 10);
        characters[27] = Troubadour("Libra", "Troubadour", false, 18, 18, 100, 70, 0, 0, 0, 15);
        characters[28] = WyvernRider("Cherche", "Wyvern Rider", false, 25, 25, 55, 50, 50, 14, 23, 0);
        characters[29] = WyvernRider("Gerome", "Wyvern Rider", false, 22, 22, 64, 55, 40, 10, 19, 0);
}

void enemyInitialization()
{
        srand( time( NULL ) );
        for(int i=0; i<6; i++)
        {
                int hp = rand()%10+15;
                switch(rand()%16+1)
                {
                        case 1:
                        {
                                int dam = rand()%2+6;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 2:
                        {
                                int dam = rand()%1+9;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 3:
                        {
                                int dam = rand()%1+7;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 4:
                        {
                                int heal = rand()%2+7;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
                                break;
                        }
                        case 5:
                        {
                                int dam = rand()%2+10;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 6:
                        {
                                int dam = rand()%2+9;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 7:
                        {
                                int dam = rand()%1+9;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 8:
                        {
                                int dam = rand()%4+8;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 9:
                        {
                                int dam = rand()%1+7;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 10:
                        {
                                int dam = rand()%2+10;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 11:
                        {
                                int dam = rand()%2+6;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 12:
                        {
                                int dam = rand()%1+6;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 13:
                        {
                                int dam = rand()%2+7;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 14:
                        {
                                int dam = rand()%2+7;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                        case 15:
                        {
                                int heal = rand()%3+5;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
                                break;
                        }
                        case 16:
                        {
                                int dam = rand()%3+11;
                                enemies[i] = Character("Enemy " + to_string(i+1), "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
                                break;
                        }
                }
        }
}
