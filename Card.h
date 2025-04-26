#pragma once
#include "string"
#include <iostream>
using namespace std;


enum Color { Hearts, Diamonds, Spades, Clubs };

class Card {
private:
	Color suit;
	int value;
	bool is_faceUp;
public:
	string fixValue(int _value) const;
	Card(Color _suit, int _value, bool _is_faceUp = false);
	friend ostream& operator<<(std::ostream& out, const Card& card);
};