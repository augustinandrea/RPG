
    // A bit of notes of sort. The following code is a qusi-adaption of the 
    // damage formulas used in the inspiration game. They might use things that
    // we get rid of for simplicity, but they might be useful as a reference.
    // Since the stats have already been boiled down to some of the things
    // being calculated in these calculations, the only one that I really 
    // anticipate being useful is the accuracy calculation. The others only
    // serve as food for thought.
int main()
{
    character attackingChar;
        // The character who is initiating the attack.
    character defendingChar;
        // The character who is receiving the attack.
    int attacks;
        // The amount of attacks the attacker makes against the defender.
    int counters;
        // The amount of attacks the defender makes against the attacker.

    if(( attackingChar.getSpeed() > defendingChar.getSpeed() + 5 ))
    {
         // If the attacker's Speed stat is greater than the defender's by a 
         // certain margin, then they make two attacks.
         attacks = 2;
         counters = 1;
    }
    else if(( attackingChar.getSpeed() + 5 < defendingChar.getSpeed() ))
    {
         // If the defender's Speed stat is greater than the attacker's by a 
         // certain margin, then they make two attacks.
         attacks = 1;
         counters = 2;
    }
    else
    {
         // Pretty much default value for both is one attack and one counter.
         attacks = 1;
         counters = 1;
    }

    int hitRateAttack;
        // How the game calculates a character's odds to hit an enemy.
    int hitRateDefend;

    hitRateAttack = attackingChar.getSkill() * 2 + 90 + attackingChar.getLuck();
    hitRateDefend = defendingChar.getSkill() * 2 + 90 + defendingChar.getLuck();

    int avoidRateAttack;
        // How the game calculates a character's odds to avoid an attack.
    int avoidRateDefend;

    avoidRateAttack = attackingChar.getSpeed() + attackingChar.getLuck() / 2;
    avoidRateDefend = defendingChar.getSpeed() + defendingChar.getLuck() / 2;

    int attackAccuracy;
    int defendAccuracy;
        // This is how the game calculates the odds that any given attack will
        // hit. This is probably the most useful calculation since it is 
        // the only one we might use. Worth looking at.

    attackAccuracy = hitRateAttack - avoidRateDefend;
    defendAccuracy = hitRateDefend - avoidRateAttack;

    int attackCritRate;
    int defendCritRate;
        // Involves the chances for a critical attack.

    attackCritRate = ( attackingChar.getSkill() + attackingChar.getLuck() ) / 2;
    defendCritRate = ( defendingChar.getSkill() + defendingChar.getLuck() ) / 2;

    int attackCritEvade;
    int defendCritEvade;
        // Involves the chances for avoiding a critical attack.

    attackCritEvade = attackingChar.getLuck();
    defendCritEvade = defendingChar.getLuck();
}
