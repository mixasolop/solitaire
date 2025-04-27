#pragma once
#include "Pile.h"

class Column: public Pile{
public:
	Column();
	void moveColumn(Column col);
	//void moveFinal(Column col);
	virtual bool canAccept(const Card& c) const override;
};