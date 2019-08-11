#include "stdafx.h"
#include <iostream>
#include "demon.h"






using namespace std;
namespace cs_creature {

	demon::demon()
	{

	}






	demon::demon(int myStrength, int myHitpoints)

		: creature(myStrength, myHitpoints)

	{

	}






	int demon::getDamage() const {

		int damage = creature::getDamage();

		if (rand() % 4 == 0) {
			damage = damage + 50;
			cout << "Demonic attack inflicts 50 additional damage points!" << endl;
		}
		return damage;
	}






	string demon::getSpecies() const {

		return "demon";
	}
}