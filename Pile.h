#pragma once
#include "string.h"
#include "Card.h"
#include <vector>
#include <iostream>

class Pile
{
protected:
	vector<Card> cards;
    int capacity;
public:
    Pile();
    virtual bool canAccept(const Card& c) const = 0;   // “legal move?” rule
    virtual void   push(const Card& c);                // add a card
    virtual Card   pop();                               // remove & return top
    virtual Card& top();                   // peek top
    virtual bool   empty() const { return cards.empty(); };      // is it empty?
    virtual size_t size() const { return cards.size(); };      // how many cards?
    virtual ~Pile() {};
    friend ostream& operator<<(std::ostream& out, const Pile& pile);
};

