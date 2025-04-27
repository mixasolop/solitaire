#pragma once
#include "Pile.h"

class Waste: public Pile
{

public:
	Waste();
	virtual bool canAccept(const Card& c) const override { return true; };
};