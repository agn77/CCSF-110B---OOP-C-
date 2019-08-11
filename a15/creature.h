#pragma once
#ifndef creature_H
#define creature_H






#include "stdafx.h"
#include <iostream>

using namespace std;
namespace cs_creature {

	class creature {
	public:
		creature();
		creature(int myStrength, int myHitpoints);
		int getStrength()const;
		int getHitpoints()const;
		void setStrength(int newStrength);
		void setHitpoints(int newHitpoints);
		virtual int getDamage()const;
		virtual string getSpecies()const;

	private:
		int strength;
		int hitpoints;

	};
}
#endif