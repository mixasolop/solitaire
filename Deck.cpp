#include "Deck.h"

Color suit[4] = {Hearts, Diamonds, Spades, Clubs};

Deck::Deck(bool is_hard_mode)
{
	stock = nullptr;
	waste = nullptr;
	int index = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 2; j <= 14; j++) {
			deck[index++] = new Card(suit[i], j);
		}
	}
}

Deck::~Deck()
{
	for (int i = 0; i < 52; i++) {
		delete deck[i];
	}
}

void Deck::shuffle()
{
	srand(time(0));
	for (int i = 0; i < 52; i++) {
		int j = rand() % 52;

		Card* temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

ostream& operator<<(std::ostream& out, const Deck& deck)
{
	for (int i = 0; i < 52; i++) {
		out << *(deck.deck[i]) << endl;
	}
	return out;
}
