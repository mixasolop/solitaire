#include "Pile.h"

Pile::Pile(): capacity(52)
{
}

void Pile::push(const Card& c)
{
	if(size() < capacity){
		cards.push_back(c);
	}
	else {
		cout << "OVERFLOW TO PUSH";
	}
}

Card Pile::pop()
{
	if(!empty()){
		Card c = cards.back();
		cards.pop_back();
		return c;
	}
	else {
		cout << "NOT ENOGHT CARDS TO POP";
		return Card();
	}
}

Card& Pile::top()
{
	return cards.back();
}

ostream& operator<<(std::ostream& out, const Pile& pile)
{
	for (int i = 0; i < pile.cards.size(); i++) {
		out << pile.cards[i] << endl;
	}
	return out;
}
