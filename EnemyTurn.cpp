
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

    else if(Archer <= distance && (Cleric || Troubadour > distance) ){
      // attack the archer
    }
    else if(playerCharacter == stats["HP"] < playerCharacter == stats["Max HP"] && (Cleric || Troubadour > 3) && Archer > distance){
      // attack the character
    }
    
    else if(playerCharacter <= 3 && (playerCharacter.stats["HP"]) == (playerCharacter.stats["Max HP"]) && (Cleric || Troubadour)> 3 && Archer > distance){
      // attack the character
    }

    else{
      // enemy moves forward
    }
    cout << "Enemy " << enemyName << " attacks " << playerCharacter << "." << endl;
  }
  cout << "ENEMY TURN" << endl;
}
  
