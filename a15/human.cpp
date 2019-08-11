

#include "stdafx.h"
#include "human.h"
#include <iostream>

using namespace std;
namespace cs_creature {

	human::human()
	{

	}







	human::human(int myStrength, int myHitpoints)

		: creature(myStrength, myHitpoints)
	{

	}






	int human::getDamage() const{
 
		int damage = creature::getDamage();
		return damage;
	  }






	string human::getSpecies() const {

		return "human";
	}
}