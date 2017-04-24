/*
Paul Kwak, Data Structures Project
*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

#define ROWS 8
#define COLS 8

char int_to_terrain(int i);
void printMap(int d[][COLS]);
void move(int d[ROWS][COLS], string playerSelect, char move);
//int playerTurn(int d[][]);

void printMap(int d[][COLS])
{
    int row, col;

    cout << "  +---+---+---+---+---+---+---+---+" << endl;

    for (row = 0; row < ROWS; ++row)
    {
        cout << row + 1 << " |";
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

void move(int d, string playerSelect, char move)
{
    char col, row;
    col = playerSelect.at(0) - 'A';
    row = playerSelect.at(1);
    cout << col << row << endl;
    int d[row][col] = 0;
    printMap(d);
    // Idea:
    /*
        Erase current position by setting col and row pos to 0
        Then have switch(move) case determine new placement of P or E
            That'll be an if condition to decide which one
        w = row + 1; and etc.
    */
    /*
    switch(move))
    {
        case 'w':

    }*/
}
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
