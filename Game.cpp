#pragma once
#include "string.h"
#include "Card.h"
#include "Stock.h"
#include "Waste.h"
#include "Pile.h"
#include <iostream>
using namespace std;


//First step : Create Card, Deck, and Pile classes.
//
// 
// 
// 
//Second step : Shuffle deck, create the initial 7 piles + reserve.
//
// 
// 
//Third step : Implement simple move logic(move a single card).
//
//Fourth step : Implement more complex moves(move sequence of cards).
//
//Fifth step : Implement foundations.
//
//Sixth step : Implement drawing cards from reserve.
//
//Seventh step : Implement undo and victory screen.


int main() {
	Stock stock;
	Waste waste;
	cout << "\n --------------STOCK-------------- \n";
	cout << stock;
	cout << "\n --------------WASTE-------------- \n";
	cout << waste;
	stock.draw_card(waste);
	cout << "\n --------------STOCK-------------- \n";
	cout << stock;
	cout << "\n --------------WASTE-------------- \n";
	cout << waste;
}
