int main()
{
  // This is the prompt for character selection.
    int charChoice[6];

    cout << "Please choose your characters." << endl;
    cout << "Do this by entering the corresponding numbers" << endl;
     
    for( int i = 0; int i <= 5; i++ )
    {
        cin >> charChoice[i];
    }
    
  // This is the prompt for the start of a player's turn.
    int playerChoice;

    cout << "It is the player's turn. Choose a character to move." << endl;
    cout << "(Alternatively, check current stats.)" << endl;
    
    cin >> playerChoice;

  // This is the prompt for the actions taken after movement.
    int actionChoice;

    cout << "Please select an action." << endl;
    cout << "Actions include: Attack, item, wait." << endl;

    cin >> actionChoice; 
}
