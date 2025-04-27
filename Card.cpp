#include "Card.h"

Card::Card(Suit _suit, int _value, bool _is_faceUp) : suit(_suit), value(_value), is_faceUp(_is_faceUp)
{
}

void Card::setFaceUp(bool isUp)
{
	is_faceUp = isUp;
}

string Card::fixValue(int _value) const
{
	if (_value >= 2 && _value < 10) {
		return to_string(_value);
	}
	switch (_value)
	{
	case 10: return "10";
	case 11: return "J";
	case 12: return "Q";
	case 13: return "K";
	case 14: return "A";
	default: break;
	}
	return "error";
}

Card::Card() :suit(), value()
{
	is_faceUp = false;
}

ostream& operator<<(std::ostream& out, const Card& card)
{
	if (card.is_faceUp == false) {
		out << "??";
		return out;
	}
	if (card.suit == Hearts || card.suit == Diamonds) {
		out << "\033[1;31;40m";
	}
	out << card.fixValue(card.value);
	string suit;
	switch (card.suit)
	{
	case Hearts:
		suit = "<3";
		break;
	case Diamonds:
		suit = "<>";
		break;
	case Spades:
		suit = "^";
		break;
	case Clubs:
		suit = "*";
		break;
	default:
		break;
	}
	out << suit << "\033[0m";
	return out;
}
