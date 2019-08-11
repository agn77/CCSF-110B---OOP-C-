#pragma once
#ifndef ELF_H
#define ELF_H






#include "stdafx.h"
#include "creature.h"
#include <iostream>

using namespace std;
namespace cs_creature {

	class elf : public creature {

	public:

		elf();
		elf(int myStrength, int myHitpoints);
		int getDamage()const;
		string getSpecies()const;

	};

}
#endif