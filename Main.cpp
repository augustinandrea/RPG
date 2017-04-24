#include <iostream>
#include <stdlib>
#include <string>
#include <map>

using namespace std;

#include "Character.h"

void characterInitialization();
void enemyInitialization();

Character characters[29];
Character enemies[5];
Character party[5];

int main()
{
	characterInitializatoin();
	for(int a=0; a<30; a++)
		characters[a].print();
	party[0] = characterInitialization[0];
	party[1] = characterInitializatoin[1];
	party[2] = characterInitialization[2];
	party[3] = characterInitialization[3];
	party[4] = characterInitializatoin[4];
	party[5] = characterInitialization[5];
	for(int b=0; b<6; b++)
		party[b].print();
	enemyInitialization();
	for(int c=0; c<6; c++)
		enemies[c].print();
}

void characterInitialization()
{
	Character virion = Archer("Virion", "Archer", false, 19, 19, 60, 70, 40, 5, 15, 0);
        Character noire  = Archer("Noire", "Acher", false, 13, 13, 70, 65, 40, 8, 20, 0);
        Character bjorn = Barbarian("Bjorn", "Barbarian", false, 25, 25, 60, 30, 10, 8, 20, 0);
        Character garrick = Barbarian("Garrick", "Barbarian", false, 30, 30, 75, 55, 30, 8, 20, 0);
        Character lissa = Cleric("Lissa", "Cleric", false, 18, 18, 100, 70, 60, 0, 0, 10);
        Character brady = Cleric("Brady", "Cleric", false, 18, 18, 100, 70, 60, 0, 0, 10);
        Character henry = DarkMage("Henry", "Dark Mage", false, 17, 17, 55, 80, 50, 10, 18, 0);
        Character tharja = DarkMage("Tharja", "Dark Mage", false, 11, 11, 60, 70, 40, 11, 19, 0);
        Character vaike = Fighter("Vaike", "Fighter", false, 24, 24, 50, 65, 45, 9, 18, 0);
        Character malice = Fighter("Malice", "Fighter", false, 22, 22, 75, 60, 50, 10, 20, 0);
        Character kellam = Knight("Kellam", "Knight", false, 25, 25, 15, 65, 45, 9, 20, 0);
        Character kjelle = Knight("Kjelle", "Knight", false, 21, 21, 60, 90, 70, 7, 15, 0);
        Character chrom = Lord("Chrom", "Lord", false, 21, 21, 90, 60, 70, 7, 12, 0);
        Character lucina = Lord("Lucina", "Lord", false, 21, 21, 90, 63, 70, 5, 17, 0);
        Character ricken = Mage("Ricken", "Mage", false, 20, 20, 70, 50, 65, 8, 18, 0);
        Character miriel = Mage("Miriel", "Mage", false,21, 21, 75, 60, 50, 6, 12, 0);
        Character gregor = Mercenary("Gregor", "Mercenary", false, 30, 30, 65, 50, 12, 20, 0);
        Character severa = Mercenary("Severa", "Mercenary", false, 12, 12, 95, 35, 10, 18, 0);
        Character lonqu = Myrmidon("Lon'qu", "Myrmidon", false, 20, 20, 65, 75, 55, 6, 13,0);
        Character owain = Myrmidon("Owain", "Myrmidon", false, 15, 15, 95, 35, 50, 8, 17, 0);
        Character sumia = PegasusKnight("Sumia","Pegasus Knight", false, 18, 18, 70, 70, 60, 6, 17, 0);
        Character cordelia = PegasusKnight("Cordelia", "Pegasus Knight", false, 25, 25, 60, 60, 45, 9, 18, 0);
        Character robin = Tactician("Robin", "Tactician", false, 19, 19, 95, 50, 55, 9, 18, 0);
        Character morgan = Tactician("Morgan", "Tactician", false, 19, 19, 95, 50, 55, 9, 18, 0);
        Character gaius = Thief("Gaius", "Thief", false, 22, 22, 70, 70, 40, 7, 13, 0);
        Character anna = Thief("Anna", "Thief", false, 22, 22, 70, 70, 40, 7, 13, 0);
        Character maribelle = Troubadour("Maribelle", "Troubadour", false, 18, 18, 100, 70, 60, 0, 0, 10);
        Character libra = Troubadour("Libra", "Troubadour", false, 18, 18, 100, 70, 80, 0, 0, 15);
        Character cherche = WyvernRider("Cherche", "Wyvern Rider", false, 25, 25, 55, 50, 50, 14, 23, 0);
        Character gerome = WyvernRider("Gerome", "Wyvern Rider", false, 22, 22, 64, 55, 40, 10, 19, 0);
}

void enemyInitialization()
{
        //Initialize Enemy 1
        srand();
        int hp = rand()%25+15;
        switch(rand()%16+1)
        {
                case 1:
                        int dam = rand()%8+6;
                        enemies[0] = Character("Enemy 1", "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 2:
                        int dam = rand()%10+9;
                        enemies[0] = Character("Enemy 1", "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
 			break;
                case 3:
                        int dam = rand()%8+7;
                        enemies[0] = Character("Enemy 1", "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 4:
                        int heal = rand()%9+7;
                        enemies[0] = Character("Enemy 1", "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 5:
                        int dam = rand()%12+10;
                        enemies[0] = Character("Enemy 1", "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 6:
                        int dam = rand()%11+9;
                        enemies[0] = Character("Enemy 1", "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 7:
                        int dam = rand()%10+9;
                        enemies[0] = Character("Enemy 1", "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 8:
                        int dam = rand()%12+8;
                        enemies[0] = Character("Enemy 1", "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 9:
                        int dam = rand()%8+7;
                        enemies[0] = Character("Enemy 1", "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 10:
                        int dam = rand()%12+10;
                        enemies[0] = Character("Enemy 1", "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 11:
                        int dam = rand()%8+6;
                        enemies[0] = Character("Enemy 1", "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 12:
                        int dam = rand()%7+6;
                        enemies[0] = Character("Enemy 1", "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 13:
                        int dam = rnad()%9+7;
                        enemies[0] = Character("Enemy 1", "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 14:
                        int dam = rand()%9+7;
                        enemies[0] = Character("Enemy 1", "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 15:
                        int heal = rand()%8+5
                        enemies[0] = Character("Enemy 1", "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 16:
                        int dam = rand()%14+11;
                        enemies[0] = Character("Enemy 1", "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
        }
        //Initialize Enemy 2
        srand();
        hp = rand()%25+15;
        switch(rand()%16+1)
        {
                case 1:
                        int dam = rand()%8+6;
                        enemies[1] = Character("Enemy 2", "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 2:
                        int dam = rand()%10+9;
                        enemies[1] = Character("Enemy 2", "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 3:
                        int dam = rand()%8+7;
                        enemies[1] = Character("Enemy 2", "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 4:
                        int heal = rand()%9+7;
                        enemies[1] = Character("Enemy 2", "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 5:
                        int dam = rand()%12+10;
                        enemies[1] = Character("Enemy 2", "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 6:
                        int dam = rand()%11+9;
                        enemies[1] = Character("Enemy 2", "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 7:
                        int dam = rand()%10+9;
                        enemies[1] = Character("Enemy 2", "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 8:
                        int dam = rand()%12+8;
                        enemies[1] = Character("Enemy 2", "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
 			break;
                case 9:
                        int dam = rand()%8+7;
                        enemies[1] = Character("Enemy 2", "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 10:
                        int dam = rand()%12+10;
                        enemies[1] = Character("Enemy 2", "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 11:
                        int dam = rand()%8+6;
                        enemies[1] = Character("Enemy 2", "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 12:
                        int dam = rand()%7+6;
                        enemies[1] = Character("Enemy 2", "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 13:
                        int dam = rnad()%9+7;
                        enemies[1] = Character("Enemy 2", "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 14:
                        int dam = rand()%9+7;
                        enemies[1] = Character("Enemy 2", "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 15:
                        int heal = rand()%8+5
                        enemies[1] = Character("Enemy 2", "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 16:
                        int dam = rand()%14+11;
                        enemies[1] = Character("Enemy 2", "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
        }
        //Initialize Enemy 3
        srand();
        hp = rand()%25+15;
        switch(rand()%16+1)
        {
                case 1:
                        int dam = rand()%8+6;
                        enemies[2] = Character("Enemy 3", "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 2:
                        int dam = rand()%10+9;
                        enemies[2] = Character("Enemy 3", "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 3:
                        int dam = rand()%8+7;
                        enemies[2] = Character("Enemy 3", "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 4:
                        int heal = rand()%9+7;
                        enemies[2] = Character("Enemy 3", "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 5:
                        int dam = rand()%12+10;
                        enemies[2] = Character("Enemy 3", "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 6:
                        int dam = rand()%11+9;
                        enemies[2] = Character("Enemy 3", "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 7:
                        int dam = rand()%10+9;
                        enemies[2] = Character("Enemy 3", "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 8:
                        int dam = rand()%12+8;
                        enemies[2] = Character("Enemy 3", "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 9:
                        int dam = rand()%8+7;
                        enemies[2] = Character("Enemy 3", "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 10:
                        int dam = rand()%12+10;
                        enemies[2] = Character("Enemy 3", "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 11:
                        int dam = rand()%8+6;
                        enemies[2] = Character("Enemy 3", "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 12:
                        int dam = rand()%7+6;
                        enemies[2] = Character("Enemy 3", "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 13:
                        int dam = rnad()%9+7;
                        enemies[2] = Character("Enemy 3", "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 14:
                        int dam = rand()%9+7;
                        enemies[2] = Character("Enemy 3", "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 15:
                        int heal = rand()%8+5
                        enemies[2] = Character("Enemy 3", "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 16:
                        int dam = rand()%14+11;
                        enemies[2] = Character("Enemy 3", "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
        }
        //Initialize Enemy 4
        srand();
        hp = rand()%25+15;
        switch(rand()%16+1)
        {
                case 1:
                        int dam = rand()%8+6;
                        enemies[3] = Character("Enemy 4", "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 2:
                        int dam = rand()%10+9;
                        enemies[3] = Character("Enemy 4", "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 3:
                        int dam = rand()%8+7;
                        enemies[3] = Character("Enemy 4", "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 4:
                        int heal = rand()%9+7;
                        enemies[3] = Character("Enemy 4", "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 5:
                        int dam = rand()%12+10;
                        enemies[3] = Character("Enemy 4", "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 6:
                        int dam = rand()%11+9;
                        enemies[3] = Character("Enemy 4", "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 7:
                        int dam = rand()%10+9;
                        enemies[3] = Character("Enemy 4", "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 8:
                        int dam = rand()%12+8;
                        enemies[3] = Character("Enemy 4", "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 9:
                        int dam = rand()%8+7;
                        enemies[3] = Character("Enemy 4", "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 10:
                        int dam = rand()%12+10;
                        enemies[3] = Character("Enemy 4", "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 11:
                        int dam = rand()%8+6;
                        enemies[3] = Character("Enemy 4", "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 12:
                        int dam = rand()%7+6;
                        enemies[3] = Character("Enemy 4", "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 13:
                        int dam = rnad()%9+7;
                        enemies[3] = Character("Enemy 4", "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 14:
                        int dam = rand()%9+7;
                        enemies[3] = Character("Enemy 4", "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 15:
                        int heal = rand()%8+5
                        enemies[3] = Character("Enemy 4", "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 16:
                        int dam = rand()%14+11;
                        enemies[3] = Character("Enemy 4", "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
        }
        //Initialize Enemy 5
        srand();
        hp = rand()%25+15;
        switch(rand()%16+1)
        {
                case 1:
                        int dam = rand()%8+6;
                        enemies[4] = Character("Enemy 5", "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 2:
                        int dam = rand()%10+9;
                        enemies[4] = Character("Enemy 5", "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 3:
                        int dam = rand()%8+7;
                        enemies[4] = Character("Enemy 5", "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 4:
                        int heal = rand()%9+7;
                        enemies[4] = Character("Enemy 5", "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 5:
                        int dam = rand()%12+10;
                        enemies[4] = Character("Enemy 5", "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 6:
                        int dam = rand()%11+9;
                        enemies[4] = Character("Enemy 5", "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 7:
                        int dam = rand()%10+9;
                        enemies[4] = Character("Enemy 5", "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 8:
                        int dam = rand()%12+8;
                        enemies[4] = Character("Enemy 5", "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 9:
                        int dam = rand()%8+7;
                        enemies[4] = Character("Enemy 5", "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 10:
                        int dam = rand()%12+10;
                        enemies[4] = Character("Enemy 5", "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 11:
                        int dam = rand()%8+6;
                        enemies[4] = Character("Enemy 5", "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 12:
                        int dam = rand()%7+6;
                        enemies[4] = Character("Enemy 5", "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 13:
                        int dam = rnad()%9+7;
                        enemies[4] = Character("Enemy 5", "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 14:
                        int dam = rand()%9+7;
                        enemies[4] = Character("Enemy 5", "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 15:
                        int heal = rand()%8+5
                        enemies[4] = Character("Enemy 5", "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 16:
                        int dam = rand()%14+11;
                        enemies[4] = Character("Enemy 5", "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
        }
        //Initialize Enemy 6
        srand();
        hp = rand()%25+15;
        switch(rand()%16+1)
        {
                case 1:
                        int dam = rand()%8+6;
                        enemies[5] = Character("Enemy 6", "Archer", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 2:
                        int dam = rand()%10+9;
                        enemies[5] = Character("Enemy 6", "Barbarian", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 3:
                        int dam = rand()%8+7;
                        enemies[5] = Character("Enemy 6", "Cavalier", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 4:
                        int heal = rand()%9+7;
                        enemies[5] = Character("Enemy 6", "Cleric", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 5:
                        int dam = rand()%12+10;
                        enemies[5] = Character("Enemy 6", "Dark Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 6:
                        int dam = rand()%11+9;
                        enemies[5] = Character("Enemy 6", "Fighter", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 7:
                        int dam = rand()%10+9;
                        enemies[5] = Character("Enemy 6", "Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 8:
                        int dam = rand()%12+8;
                        enemies[5] = Character("Enemy 6", "Lord", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 9:
                        int dam = rand()%8+7;
                        enemies[5] = Character("Enemy 6", "Mage", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 10:
                        int dam = rand()%12+10;
                        enemies[5] = Character("Enemy 6", "Mercenary", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 11:
                        int dam = rand()%8+6;
                        enemies[5] = Character("Enemy 6", "Myrmidon", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 12:
                        int dam = rand()%7+6;
                        enemies[5] = Character("Enemy 6", "Pegasus Knight", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 13:
                        int dam = rnad()%9+7;
                        enemies[5] = Character("Enemy 6", "Tactician", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 14:
                        int dam = rand()%9+7;
                        enemies[5] = Character("Enemy 6", "Thief", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
                case 15:
                        int heal = rand()%8+5
                        enemies[5] = Character("Enemy 6", "Troubadour", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, 0, 0, heal);
			break;
                case 16:
                        int dam = rand()%14+11;
                        enemies[5] = Character("Enemy 6", "Wyvern Rider", false, hp, hp, rand()%70+55, rand()%90+65, rand()%70+35, dam, dam*3, 0);
			break;
        }
}
