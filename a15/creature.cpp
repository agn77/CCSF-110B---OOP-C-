#include "stdafx.h"
#include "creature.h"
#include <iostream>
#include <string>






using namespace std;

namespace cs_creature {

	creature::creature() {

		strength = 10;
		hitpoints = 10;
	}






	creature::creature(int myStrength, int myHitpoints) {

		strength = myStrength;
		hitpoints = myHitpoints;
	}





	int creature::getStrength() const {

		return strength;
	}






	int creature::getHitpoints() const {

		return hitpoints;
	}






	void creature::setStrength(int newStrength) {

		strength = newStrength;
	}






	void creature::setHitpoints(int newHitpoints) {

		hitpoints = newHitpoints;
	}






	int creature::getDamage() const {

		int damage = (rand() % strength) + 1;
		cout << "The " << getSpecies() << " attacks for " << damage << " points!" << endl;
		return damage;
	}






	string creature::getSpecies() const {

		return "creature";
	}
}