#include <iostream>
#include <cstdlib>

using namespace std;

void battle();
int showEnemyHp(int enemyhp, int attack);
int showHp(int hp, int enemyattack);

int main()
{
    int choice = 0;
    cout << endl << "Attack?";
    // this will eventually have more options as discussed.
    // Include options for stay, item, and more, which will in consequence,
    // have their own functions and code.
    cout << endl << "Yes = 1" << endl << "No = 2" << endl;
    cin >> choice;
    if(choice == 1)
    {
        battle();
    }
    else if(choice == 2)
    {
        cout << "Stay. Initiating next phase." << endl;
        // this will eventually then initiate another character's move
    }
    else
    {
        cout << "Invalid." << endl;
        return main(); // makes sure the user inputs a valid selection
    }
}

// Initiate Battle Phase
// May need playerTurn and enemyTurn functions here later on instead of simple
// hits to determine complex AI possibilities, but for now, this will do.
// Eventual Functions for a Battle Phase class
int showEnemyHp(int enemyhp, int attack)
{
    enemyhp = enemyhp - attack;
    return enemyhp;
}

int showHp(int hp, int enemyattack)
{
    hp = hp - enemyattack;
    return hp;
}

void battle()
{
  // so an example to pull from a class made for characters here below.
  // just sample hp and attack data
  int hp = 25, enemyhp = 15, attack = 5, enemyattack = 5;
  int hit = 0;

  do
  {
  // example of having more options rather than hit, or item.
  // Also this needs more organization just in case that this structure turns
  // out to be too messy. Will plan to draw and write out at a future date
  cout << endl << "Hit?" << endl << "Yes = 1" << endl << "Item = 2" << endl;
  cin >> hit;
  if (hit == 1)
  {
    enemyhp = showEnemyHp(enemyhp, attack);
    hp = showHp(hp, enemyattack);
    cout << endl << "Player Attack Phase" << endl;
    cout << "The enemy has " << enemyhp << "HP left." << endl << endl;
    if(enemyhp <= 0)
    {
      cout << "Battle Phase Over. EXP gained!" << endl;;
      // EXP system here maybe? future thoughts.
    }
    else if(enemyhp > 0)
    {
      cout << "Enemy Attack Phase" << endl;
      cout << "You now have " << hp << "HP left." << endl << endl;
    }
  }

  else if(hit == 2)
  {
    cout << "Item" << endl;
    cout << "Item use should increase some stat, maybe even HP" << endl;
    cout << "Enemy Attack Phase" << endl;
    cout << "You now have " << showHp(hp, enemyattack) << "HP left." << endl;
  }

  else
  {
    cout << "Invalid" << endl << endl;
    return battle();
  }
 } // end of do
 while(hp > 0 && enemyhp > 0); // while condition
}
