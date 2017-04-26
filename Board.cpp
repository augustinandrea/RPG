/*
Paul Kwak, Data Structures Project
*/
// Work on adding in bounds for move and checks, always never more than 7,
// and never less than 0 in move func. otherwise print err message, but allow
// user to reselect
// So checks needed in character call, out of bounds, and whether it's a P
// Checks needed in move and erase, never out of bounds.

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define ROWS 8
#define COLS 8

char int_to_terrain(int i);
void printMap(int d[][COLS]);
void erase(int d[][COLS], string playerSelect, char move);
void move(int d[][COLS], string playerSelect, char move);
bool battle(int d[][COLS], string playerSelect);
//int playerTurn(int d[][]);

void printMap(int d[][COLS])
{
    int row, col;

    cout << "  +---+---+---+---+---+---+---+---+" << endl;

    for (row = 0; row < ROWS; ++row)
    {
        cout << row << " |";
        for (col = 0; col < COLS; ++col)
        {
            printf(" %c |", int_to_terrain(d[row][col]) );
            //cout << int_to_terrain(d[row][col]) << "  |";
            //learned some c formatting from Systems Programming
        }
        cout << endl;
        cout << "  +---+---+---+---+---+---+---+---+" << endl;
    }

    cout << "    A   B   C   D   E   F   G   H" << endl;
}


char int_to_terrain(int i)
{
    switch(i)
    {
  	    case 0:
            return ' ';
        case 1:
            return '.';
        case 2:
            return 'E';
        case 3:
            return 'P';
    }
    return ('*');
}

void erase(int d[][COLS], string playerSelect, char move) // for move, and death (hp=0)
{
    int col, row;
    col = playerSelect.at(0) - 'A';
    row = playerSelect.at(1) - 48;
    cout << col << " " << row << endl;
    d[row][col] = 0;
    printMap(d);
    cout << endl;
}

void move(int d[][COLS], string playerSelect, char move)
{
    int row, col;
    erase(d, playerSelect, move);

    col = playerSelect.at(0) - 'A';
    row = playerSelect.at(1) - 48;
    /* clear board for animation */
    // Look at system library
    //
    // Idea:
    /*
        Erase current position by setting col and row pos to 0
        Then have switch(move) case determine new placement of P or E
            That'll be an if condition to decide which one
        w = row + 1; and etc.
    */

    switch(move)
    {
        case 'w':
            row = row - 1;
            break;
        case 'a':
            col = col - 1;
            break;
        case 's':
            col = col + 1;
            break;
        case 'd':
            row = row + 1;
            break;

        d[row][col] = 3; // may need if statment for two switches for if(player) else(player2)
        printMap(d);
    }
}
/*
bool battle(int d[][COLS], string playerSelect)
{
    int col, row;
    col = playerSelect.at(0) - 'A';
    row = playerSelect.at(1) - 48;
    cout << col << " " << row << endl;
    if(d[row+1][col] == 2);
    if(d[row-1][col] == 2)
    if(d[row][col+1] == 2)
    if(d[row][col-1] == 2)
    {
        return true;
        // call battle func from battle.cpp;
    }

    else
        return false;
}
*/
/*
This will be the basis for playerTurn, and probably enemyTurn as well.
Also, this will have validity checks, whether inside or as another function.
Below is the general idea.

int playerTurn(int d[][])
{

}
*/

int main()
{
	int d[ROWS][COLS]={
    {0,0,0,0,0,2,0,0},
    {2,0,0,2,2,0,0,0},
    {0,0,2,0,0,0,2,0},
    {1,1,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,1},
    {3,0,0,0,0,0,0,0},
    {0,3,0,3,0,3,0,3},
	{0,0,3,0,0,0,0,0}};

    while(true){
        // display board
        for(int i = 0; i < ROWS; i++)
        {
            for(int j = 0; j < COLS; j++)
            {
                cout << d[i][j] << " ";
            }
            cout << endl;
        }

        printMap(d);
        // red turn
        cout << "Player Phase" << endl;
        bool playerTurn = true;
        char playerMove = ' ';
        string playerSelect = " ";

        while(playerTurn)
        {
            cout << "Select which piece to move. ex: (A1)" << endl;
            cin >> playerSelect;
            cout << "move to where? up to 3 moves. " << endl;
            cout << "w (up)  a (left)  s (right)  d (down) " << endl;
            cin >> playerMove;
            // move
            move(d, playerSelect, playerMove);

            playerTurn = false;
        }


        //display board
        printMap(d);

        // AI turn
        cout << "Enemy Phase" << endl;
        bool aiTurn = true;
        string aiFrom = "";
        string aiTo = "";
        while(aiTurn)
        {
           cout << "move to where? format: A1 (from), B1 (end)" << endl;
           cin >> aiFrom >> aiTo;
           // then move based off of coordinate
           //if(notValid())
           //{
           //break; or continue; depending on what code is beneath
           //}
           aiTurn = false;
        }

        //check for win
        //win function, exit out of infinite while loop
    }
}

// NOTES for later

// BATTLE CODE
// possibly implement battle code once characters are within a space or two
// depending on the abilities they have.
// then obviously get rid of infinite while loop, and have exit case where
// it depends on the amount of user's characters left remaining.

// MOVEMENT SYSTEM
// Thinking about changing movement system from reading two strings, to possibly
// displaying already thought out possible moves, and just have the user
// select which one
// Another option, and probably way better, is to define just how many spaces
// each character is allowed to move total, and then have the user move the space...somehow
// This may involve having a pathfinder algorithm which may get really complicated
// and messy.

// Will look for a better solution on optimizing and giving character movement
// to Player and AI
