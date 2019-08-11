#include "stdafx.h"
#include "balrog.h"
#include <iostream>






using namespace std;
namespace cs_creature {

	balrog::balrog()
	{

	}






	balrog::balrog(int myStrength, int myHitpoints)

		: demon(myStrength, myHitpoints)

	{

	}






	int balrog::getDamage() const {

		int damage = demon::getDamage();
		int damage2 = (rand() % getStrength()) + 1;
		cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
		return damage + damage2;
	}






	string balrog::getSpecies() const {

		return "balrog";
	}
}