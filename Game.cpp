#pragma once
#include "string.h"
#include "Card.h"
#include "Stock.h"
#include "Waste.h"
#include "Pile.h"
#include "Column.h"
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
	srand(time(nullptr));

	bool HardMode = 1;
	Stock stock(HardMode);
	Waste waste;

	Column columns[7];

	for (int i = 0; i < 7; i++) {
		columns[i] = Column();
	}


	for (int i = 6; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			stock.draw_collumn(columns[j]);
			cout << columns[j].top() << "\t";
		}
		cout << "\n";
	}





	cout << "\n --------------STOCK-------------- \n";
	cout << stock;
	cout << "\n --------------WASTE-------------- \n";
	cout << waste;
	bool to_draw = 1;
	while(to_draw){
		cin >> to_draw;
		stock.draw_card(waste);
		cout << "\n --------------STOCK-------------- \n";
		cout << stock;
		cout << "\n --------------WASTE-------------- \n";
		cout << waste;
	}
}
