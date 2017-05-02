

void enemyTurn() {
  string Class; // the class 
  int Enemy_col;
  int Enemy_row;
  bool EturnOver = false; // enemy turn over 
  bool canGo[6] = {true, true, true, true, true, true};
  
  while(!EturnOver){
    
    if(!canGo[0] && !canGo[1] && !canGo[2] && !canGo[3] && !canGo[4] && !canGo[5]) {
      cout << "ENEMY TURN OVER" << endl;
      EturnOver = true;
      break;
    }

    // loop through board
    if(enemies[0].getName().compare(playerSelect)==0)
      member = 2;
    else if(enemies[1].getName().compare(playerSelect)==0)
      member = 3;
    else if(enemies[2].getName().compare(playerSelect)==0)
      member = 4;
    else if(enemies[3].getName().compare(playerSelect)==0)
      member = 5;
    else if(enemies[4].getName().compare(playerSelect)==0)
      member = 6;
    else if(enemies[5].getName().compare(playerSelect)==0)
      member = 7;
    
    //get position for each enemy
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
	if( enemies[i].getName().compare("Enemy" + to_string(i) ) == 0 ){
	  enemy_row = i;
	  enemy_col = j;
      }
      

    }


    //get position for each enemy
    for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
	if(member == d[i][j]){
	  enemy_row = i;
	  enemy_col = j;
	}
      }
    }

    // enemy distance
    int distance;

    for(int k = 0; k < 4; k++){
      if(d[i][j-k] || d[i][j+k] || d[i-k][j] ||d[i+k][j]){
	if(){
	
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

