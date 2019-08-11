#pragma once
#include "stdafx.h"
#include "cyberdemon.h"
#include <iostream>






using namespace std;
namespace cs_creature {


	cyberdemon::cyberdemon()
	{

	}






	cyberdemon::cyberdemon(int myStrength, int myHitpoints)

		: demon(myStrength, myHitpoints)

	{

	}
	





	int cyberdemon::getDamage() const{

		int damage = demon::getDamage();
		return damage;
	}







	string cyberdemon::getSpecies() const {

		return "cyberdemon";
	}

}