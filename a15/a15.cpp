// Alberto Gonzalez Navarro
// CS110B Assignment 15.1b
// Professor Harden
// May 8th 2017
//






#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "creature.h"
#include "human.h"
#include "balrog.h"
#include "demon.h"
#include "cyberdemon.h"
#include "elf.h"

using namespace std;
using namespace cs_creature;
void battleArena(creature &creature1, creature &creature2);

int main() {

	srand(time(0));

	human h(50, 50);
	cyberdemon c(50, 50);
	elf e(50, 50);
	balrog b(50, 50);


	cout << "Battle between elf and balrog! \n\n";
	battleArena(e, b);

	cout << "\nBattle between human and cyberdemon!\n";
	battleArena(c, h);
	cout << "\nBattle between cyberdemon and elf!\n";
	battleArena(e, c);
	cout << "Battle between human and balrog! \n";
	battleArena(h, b);
	cout << "\nBattle between human and elf! \n";
	battleArena(h, e);
	cout << "\nBattle between cyberdemon and balrog! \n";


}

void battleArena(creature &creature1, creature &creature2)
{
	int hitpoint1;
	int hitpoint2; 
	int damage1;
	int damage2;

	hitpoint1 = creature1.getHitpoints();
	hitpoint2 = creature2.getHitpoints();

	cout << creature1.getSpecies() << " initial hitpoints: " << hitpoint1 << "\n";
	cout << creature2.getSpecies() << " initial hitpoints: " << hitpoint2 << "\n\n";

	while ((hitpoint1 > 0) && (hitpoint2 > 0)) {

		damage1 = creature1.getDamage();
		damage2 = creature2.getDamage();
		cout << "\n";
		cout << creature1.getSpecies() << " inflicts " << damage1 << " damage!\n";
		cout << creature2.getSpecies() << " inflicts " << damage2 << " damage!\n\n";

		hitpoint1 = hitpoint1 - damage2;
		cout << creature1.getSpecies() << " after minus damage of " << creature2.getSpecies() << " has remaining " << hitpoint1 << " hit points.\n";

		hitpoint2 = hitpoint2 - damage1;
		cout << creature2.getSpecies() << " after minus damage of " << creature1.getSpecies() << " has remaining " << hitpoint2 << " hit points.\n\n";

		creature1.setHitpoints(hitpoint1);
		creature2.setHitpoints(hitpoint2);

	}

	if ((hitpoint1 <= 0) && (hitpoint2 <= 0)) {

		cout << "The battle is a tie\n!"; 

	}

	if ((hitpoint1 <= 0) && (hitpoint2 > 0)) {

		cout << creature2.getSpecies() << " wins!\n\n "; 

	}

	if ((hitpoint1 > 0) && (hitpoint2 <= 0)) {

		cout << creature1.getSpecies() << " wins!\n\n"; 

	}
	cout << "-----------------------------------------" << endl;

	system("Pause");

}
/*ANYTHING BELOW THIS LINE IS CODE OUTPUT!

Battle between elf and balrog!

elf initial hitpoints: 50
balrog initial hitpoints: 50

The elf attacks for 8 points!
The balrog attacks for 15 points!
Demonic attack inflicts 50 additional damage points!
Balrog speed attack inflicts 48 additional damage points!

elf inflicts 8 damage!
balrog inflicts 113 damage!

elf after minus damage of balrog has remaining -63 hit points.
balrog after minus damage of elf has remaining 42 hit points.

balrog wins!

-----------------------------------------
Press any key to continue . . .

Battle between human and cyberdemon!
cyberdemon initial hitpoints: 50
human initial hitpoints: 50

The cyberdemon attacks for 4 points!
The human attacks for 41 points!

cyberdemon inflicts 4 damage!
human inflicts 41 damage!

cyberdemon after minus damage of human has remaining 9 hit points.
human after minus damage of cyberdemon has remaining 46 hit points.

The cyberdemon attacks for 6 points!
Demonic attack inflicts 50 additional damage points!
The human attacks for 25 points!

cyberdemon inflicts 56 damage!
human inflicts 25 damage!

cyberdemon after minus damage of human has remaining -16 hit points.
human after minus damage of cyberdemon has remaining -10 hit points.

The battle is a tie
!-----------------------------------------
Press any key to continue . . .

Battle between cyberdemon and elf!
elf initial hitpoints: -63
cyberdemon initial hitpoints: -16

The battle is a tie
!-----------------------------------------
Press any key to continue . . .
Battle between human and balrog!
human initial hitpoints: -10
balrog initial hitpoints: 42

balrog wins!

-----------------------------------------
Press any key to continue . . .

Battle between human and elf!
human initial hitpoints: -10
elf initial hitpoints: -63

The battle is a tie
!-----------------------------------------
Press any key to continue . . .




*/