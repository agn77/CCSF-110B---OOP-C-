#include "stdafx.h"
#include "elf.h"
#include <iostream>






using namespace std;

namespace cs_creature{

	elf::elf()
	{

	}






	elf::elf(int myStrength, int myHitpoints)

	: creature(myStrength, myHitpoints)

	{

	}






	int elf::getDamage() const {

		int damage = creature::getDamage();

		if ((rand() % 2) == 0) {
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
		damage *= 2;
	}
		return damage;
	}






	string elf::getSpecies() const {

		return "elf";
	}

}