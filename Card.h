#pragma once
#include "string"
#include <iostream>
using namespace std;


enum Suit { Hearts, Diamonds, Spades, Clubs };

class Card {
protected:
	Suit suit;
	int value;
	bool is_faceUp;
public:
	string fixValue(int _value) const;
	Card();
	Card(Suit _suit, int _value, bool _is_faceUp = false);
	void setFaceUp(bool isUp);
	Suit GetSuit() { return suit; };
	Suit GetSuit() const { return suit; };
	int Getvalue() const { return value; };
	friend std::ostream& operator<<(std::ostream& out, const Card& card);
};