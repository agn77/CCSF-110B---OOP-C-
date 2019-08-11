#pragma once
#ifndef HUMAN_H
#define HUMAN_H






#include "stdafx.h"
#include "creature.h"

using namespace std;
namespace cs_creature
{
	class human : public creature
	{
	public:
		human();
		human(int newStrength, int newHitpoints);
		std::string getSpecies() const;
		int getDamage() const;
	};
}
#endif