#pragma once
#include "string"
#include "Card.h"
#include <algorithm>
#include <iostream>
#include <stdlib.h>
using namespace std;


class Deck {
private:
	Card* deck[52];
	Card* stock;
	Card* waste;
	bool is_hard_mode;
public:
	Deck(bool is_hard_mode = false);
	~Deck();
	void shuffle();
	friend ostream& operator<<(std::ostream& out, const Deck& deck);
};