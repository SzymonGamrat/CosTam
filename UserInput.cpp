// UserInput.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Kot{
public:
	string nazwa;
	int lata;
	Kot* imie;
	Kot* wiek;
	Kot() {
		this->imie = NULL;
		this->wiek = NULL;
	}
	void add() {

		if (this->imie == NULL)
		{
			cout << "Podaj imie kota: " << endl;
			cin >> nazwa;
		}
		if (this->wiek == NULL)
		{
			cout << "Podaj wiek kota: " << endl;
			cin >> lata;
		}
	}
	void wypisz(){
		cout << nazwa << endl;
		cout << lata << endl;
	}
};
int main() {
	Kot* Mruczek = new Kot();
	Mruczek->add();
	Mruczek->wypisz();
	return 0;
}

