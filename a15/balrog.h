#pragma once
#ifndef BALROG_H
#define BALROG_H






#include "stdafx.h"
#include "demon.h"
#include <iostream>

using namespace std;
namespace cs_creature
{
	class balrog : public demon
	{
	public:
		balrog();
		balrog(int newStrength, int newHitpoints);
		std::string getSpecies() const;
		int getDamage() const;
	};
}
#endif