Game: Main.o Character.o Archer.o Barbarian.o Cavalier.o Cleric.o DarkMage.o Fighter.o Knight.o Lord.o Mage.o Mercenary.o Myrmidon.o PegasusKnight.o Tactician.o Thief.o Troubadour.o WyvernRider.o
	g++ -o Game Main.o Character.o Archer.o Barbarian.o Cavalier.o Cleric.o DarkMage.o Fighter.o Knight.o Lord.o Mage.o Mercenary.o Myrmidon.o PegasusKnight.o Tactician.o Thief.o Troubadour.o WyvernRider.o

Main.o: Main.cpp
	g++ -c Main.cpp

Character.o: Character.cpp Character.h
	g++ -c Character.cpp

Archer.o: Archer.cpp Archer.h
	g++ -c Archer.cpp

Barbarian.o: Barbarian.cpp Barbarian.h
	g++ -c Barbarian.cpp

Cavalier.o: Cavalier.cpp Cavalier.h
	g++ -c Cavalier.cpp

Cleric.o: Cleric.cpp Cleric.h
	g++ -c Cleric.cpp

DarkMage.o: DarkMage.cpp DarkMage.h
	g++ -c DarkMage.cpp

Fighter.o: Fighter.cpp Fighter.h
	g++ -c Fighter.cpp

Knight.o: Knight.cpp Knight.h
	g++ -c Knight.cpp

Lord.o: Lord.cpp Lord.h
	g++ -c Lord.cpp

Mage.o: Mage.cpp Mage.h
	g++ -c Mage.cpp

Mercenary.o: Mercenary.cpp Mercenary.h
	g++ -c Mercenary.cpp

Myrmidon.o: Myrmidon.cpp Myrmidon.h
	g++ -c Myrmidon.cpp

PegasusKnight.o: PegasusKnight.cpp PegasusKnight.h
	g++ -c PegasusKnight.cpp

Tactician.o: Tactician.cpp Tactician.h
	g++ -c Tactician.cpp

Thief.o: Thief.cpp Thief.h
	g++ -c Thief.cpp

Troubadour.o: Troubadour.cpp Troubadour.h
	g++ -c Troubadour.cpp

WyvernRider.o: WyvernRider.cpp WyvernRider.h
	g++ -c WyvernRider.cpp

clean:
	rm Game *.o