#include <vector>
#include <iostream>
#include <string>
using namespace std;

class playing_card {
public:
	string card_suit;
	int value;
};

class fool {
public:
	vector <playing_card> My_deck;
	vector <playing_card> Enemy_deck;

	void compare() {
	};

	void throwing_out() {
	};

	void add() {
	};

};

int main()
{
	fool p1;
	return 0;
}