/*
Paul Kwak, Data Structures, 2/6/17
playerTurn.h
*/
#include <iostream>
#ifndef PLAYERTURN_H
#define PLAYERTURN_H
using namespace std;

class playerTurn
{
	public:
    playerTurn(); // default constructor
    ~playerTurn(); // deconstructor
    playerMove(); // prompts move on board, movement rules defined
    playerAction(); // prompts fight phase, if hit, deal damage

	private:
    int * Cards; // dynamic array
    int totalCards;
    int value;
};

#endif