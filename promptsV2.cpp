int main()
{
  // This is the prompt for character selection.
    int charSize = 6;
        // The amount of characters being used in the game.
    int maxChars = 6;
        // The amount of characters a user is allowed to choose.
    int charChoice[charSize];
        // An array to store the user's choices in this section.
    int firstChoice;
        // A value used to determine user's input.
    character[charSize] characters;
        // The array containing all available characters.
    character[maxChars] charInUse;
        // The array containing the selected characters.
    int detailChoice;
        // A value used to determine user input.
    int curChoice = 0;
        // A value which tracks how many characters have been chosen.

    while(( curChoice < maxChars ))
    {
        // This loop runs for as long as the user needs to input more characters

        for( int j = 0; int j < charSize; j++ )
        {
            // This loop dispays all of the available characters.

            cout << j << " ";
            characters[j].getName();
            cout << endl;
        }

        cout << "1 - see more information about characters." << endl;
        cout << "2 - select character." << endl;

        cin >> firstChoice;
            // The above has the user choose between either choosing a character
            // or viewing further details about the characters.

        if(( firstChoice == 1 ))
        {
            // Allows the user to select a character and then see further
            // information about that particular character.

            cout << "Which character would you like to view?" << endl;
            cout << "Input the corresponding number" << endl;

            cin >> detailChoice;

            charChoice[detailChoice].displayInfo();
        }
        else if(( firstChoice == 2 ))
        {
            // Has the user choose a character. The number corresponding to the
            // character is stored in an array. Then the tracker of how many 
            // choices have been made is iterated.

            cout << "Please select a character." << endl;
            cout << "Input the corresponding number." << endl;

            cin >> charChoice[curChoice];

            curChoice++;
        } 
    }
    
    for( int addI = 0; addI < maxChars; addI++ )
    {
        // This loop adds the selected characters to the in use array.
        charInUse[addI] = characters[charChoice[addI]];
    }
    
  // This is the prompt for the start of a player's turn.
    int playerChoice;
        // Variable used to store player input in this section.
    int moveChoice = 0;
        // Variable used both to track which character is to be moved and to
        // track when the loop should be exited.

    while( moveChoice = 0 )
    {
        // Loop that allows the user to choose what to do when their turn begins

        cout << "Player phase." << endl;
        cout << "1 - Move a character." << endl;
        cout << "2 - Check the battlefield's status." << endl;
            // Has the player choose between either moving or looking at the
            // current state of the game.
    
        cin >> playerChoice;

        if(( playerChoice == 1 )) 
        {
            // Loop for choosing which character to move. 

            cout << "Choose a character to move." << endl;
            for( int moveI = 0; moveI < maxChars; moveI++ )
            {
                cout << moveI << " ";
                charInUse[moveI].getName();
                cout << endl;
            }
        
            cin >> moveChoice;
        }
        else if(( playerChoice == 2 ));
        {
            // Displays the current battlefield status. Not sure how this will
            // work exactly yet. Need more information from the group as a whole
            // as to how we will implement this.
            battlefield.display();
        }
    }    

    move( moveChoice );
       // Hypothetical movement function utilizing the choice made. Also not 
       // sure how this will be implemented. Need group input.

  // This is the prompt for the actions taken after movement.
    int actionChoice;
         // Tracks user input.

    cout << "Please select an action." << endl;
    cout << "Actions include: " << endl;
    cout << " 1 - Attack." << endl; << "2 - Item" << endl; << "3 - Wait" << endl;
        // Displays all available actions for the user to take.

    cin >> actionChoice; 
        // Inputs the action selected.
}
