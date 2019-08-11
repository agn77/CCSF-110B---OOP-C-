#pragma once
#ifndef CYBERDEMON_H
#define CYBERDEMON_H






#include "stdafx.h"
#include "demon.h"
#include <iostream>

using namespace std;
namespace cs_creature
{
	class cyberdemon : public demon
	{
	public:
		cyberdemon();
		cyberdemon(int newStrength, int newHitpoints);
		std::string getSpecies() const;
		int getDamage() const;
	};
}
#endif