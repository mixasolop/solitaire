#include "Column.h"

Column::Column(): Pile()
{
}

void Column::moveColumn(Column col)
{
	if(col.canAccept(top())){
		
		Card c = pop();
		if(size() > 0) {
			top().setFaceUp(true);
		}

		col.push(c);
	}
}

bool Column::canAccept(const Card& c) const
{
	switch (cards.back().GetSuit())
	{
	case Hearts:
		if ((c.GetSuit() == Spades || c.GetSuit() == Clubs) && cards.back().Getvalue() > c.Getvalue())
			return true;
		break;

	case Spades:
		if (c.GetSuit() == Hearts || c.GetSuit() == Diamonds)
			return true;
		break;

	case Clubs:
		if (c.GetSuit() == Hearts || c.GetSuit() == Diamonds)
			return true;
		break;

	case Diamonds:
		if (c.GetSuit() == Spades || c.GetSuit() == Clubs)
			return true;
		break;
	
	default:
		break;
	}
	return false;
}

//void Column::moveFinal(int from, Suit suit )
//{
//	if (columns[from].top().GetSuit() == suit) {
//		Card c = columns[from].pop();
//		if (columns[from].size() > 0) {
//			columns[from].top().setFaceUp(true);
//		}
//		//Final[suit].push(c);
//	}
//}
