#pragma once
#include "Pile.h"
#include <algorithm>
#include <stdlib.h>


class Stock: public Pile {
private:
	bool isHardMode;
public:
	Stock(bool _is_hard_mode = false);
	void shuffle();
	void draw_card(Pile& waste);
	virtual bool canAccept(const Card& c) const override { return false; };
};