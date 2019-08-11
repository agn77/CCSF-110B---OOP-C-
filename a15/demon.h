#pragma once
#ifndef DEMON_H
#define DEMON_H






#include "stdafx.h"
#include "creature.h"
#include <iostream>


using namespace std;

namespace cs_creature {

	class demon : public creature {

	public:
		demon();
		demon(int myStrength, int myHitpoints);
		int getDamage() const;
		string getSpecies() const;
	};
}
#endif