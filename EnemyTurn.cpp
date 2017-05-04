#include <cmath>

void enemyTurn() {
  string Class; // the class
  int Ecol;
  int Erow;
  bool EturnOver = false; // enemy turn over
  bool EcanGo[6] = {true, true, true, true, true, true};
  
  while(!EturnOver){

    if(!EcanGo[0] && !EcanGo[1] && !EcanGo[2] && !EcanGo[3] && !EcanGo[4] && !EcanGo[5]) {
      cout << "ENEMY TURN OVER" << endl;
      EturnOver = true;
      break;
    }

    // based off of around lines 300
    int EnumMoves = 3;
    bool moving = true;
    
    cout << endl;
    for(r=0; r < 8; r++){
      for(c=0; c < 8; c++){
	if(2<=d[r][c] && d[r][c]<=7 && canGo[d[r][c]-2]){
	    cout << enemies[d[r][c]-2].getName() << " (" << r << ", " << char(c+65) << ") ";
	}
      }
    }
    cout << endl;
    
    //get position for each enemy
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
	if(member == d[i][j]){
	  Prow = i;
	  Pcol = j;
	}
	
	for(int k = 0; k < 4; k++){
	  if( (d[i][j-k] || d[i][j+k] || d[i-k][j] || d[i+k][j]) != 0){
	    if(enemies[]){
	    }
	  }
	  
	}
      }
    }

    // enemy distance to player characters
    for(int k = 0; k < 4; k++){
      
    }

    // Enemy clerics/troubadours only go around and heal   
    // distance formula
    double x;
    double y;
    double a;
    double b;
    double distance = sqrt( pow(x - a, 2) + pow(y - b, 2);

      /*
    if( (Character.getClass() == "Cleric" || Character.getClass() == "Troubadour") ) {
      if(Character.Cleric < Character.Troubadour){  //attack the Cleric

      }
      else if(Character.Cleric > Character.Troubadour) {  // attack the Troubadour

      }
      else{ // randomly attack either one of them

      }

    }
    */
	  else if(playerCharacter <= 3 && (Cleric || Troubadour) > 3){   // attack the character that is closest

    }

    else if(playerCharacter1 == distance && playerCharacter2 == distance){ // if two characters are equally close

      if( (playerCharacter1.stats["HP"]) < (playerCharacter2.stats["HP"]) ){ //attack character with lowest HP
	  // attack the character
      }
      else if( (playerCharacter1.stats["HP"]) == (playerCharacter2.stats["HP"]) ){ // attack at random

      }
    }

    else{
      // enemy moves forward
    }
    cout << "Enemy " << enemyName << " attacks " << playerCharacter << "." << endl;
  }
  cout << "ENEMY TURN" << endl;
}

