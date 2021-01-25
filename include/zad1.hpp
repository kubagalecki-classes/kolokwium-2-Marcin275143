#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

using namespace std;

class Warzywo
{
public:

	Warzywo(const string& N, const double& C, const int& K) : nazwa(N), cena(C), kolor(K) { ++liczba_warzyw; };

	static unsigned getVeg() { return liczba_warzyw; }

	void opis(ostream& os) const { os << nazwa << ": " << cena << ", " << kolor << endl; }

	string get_nazwa() { return nazwa; }

	~Warzywo() { --liczba_warzyw; }



private:

	string nazwa;
	double cena;
	int kolor;
	inline static unsigned liczba_warzyw;

};

unsigned Warzywo::liczba_warzyw = 0;
// tutaj klasa Warzywo
