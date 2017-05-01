

void enemyTurn() {
  string Class; // the class 
  int hp;
  bool EturnOver = false; // enemy turn over 
  bool canGo[6] = {true, true, true, true, true, true};
  
  while(!EturnOver){
    
    if(!canGo[0] && !canGo[1] && !canGo[2] && !canGo[3] && !canGo[4] && !canGo[5]) {
      cout << "ENEMY TURN OVER" << endl;
      EturnOver = true;
      break;
    }

    // level of enemy preference 
    
    if( (Character.Cleric || Character.Troubadour) <= range) {
      if(Character.Cleric < Character.Troubadour){  //attack the Cleric
	
      }
      else if(Character.Cleric > Character.Troubadour) {  // attack the Troubadour
      
      }
      else{ // randomly attack either one of them
      
      }
      
    }

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
  
