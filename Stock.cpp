#include "Stock.h"

Suit suit[4] = {Hearts, Diamonds, Spades, Clubs};

Stock::Stock(bool _is_hard_mode): Pile()
{
	isHardMode = _is_hard_mode;
	for (int i = 0; i < 4; i++) {
		for (int j = 2; j <= 14; j++) {
			cards.push_back(Card(suit[i], j, false));
		}
	}
	shuffle();
}

void Stock::shuffle()
{
	for (int i = 0; i < capacity; i++) {
		int j = rand() % capacity;

		Card temp = cards[i];
		cards[i] = cards[j];
		cards[j] = temp;
	}
}

void Stock::draw_card(Pile& waste)
{
	if(!this->empty()){
		int n = isHardMode ? 3 : 1;
		for (int i = 0; i < n && !this->empty(); i++) {
			Card c = this->pop();
			c.setFaceUp(true);
			waste.push(c);
		}
	}
	else{
		while(!waste.empty()){
			Card c = waste.pop();
			c.setFaceUp(false);
			this->push(c);
		}
		this->shuffle();
	}
}

void Stock::draw_collumn(Pile& waste)
{
	capacity--;
	Card c = this->pop();
	c.setFaceUp(true);
	if (!waste.empty()){
		waste.top().setFaceUp(false);
}
	waste.push(c);
}
