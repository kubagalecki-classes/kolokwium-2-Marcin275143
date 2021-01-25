#pragma once

#include "catch.hpp"
#include "chrup.hpp"

using namespace std;

class Ogorek
{
public:

	virtual string chrup() = 0;

};

class Zielony : public Ogorek
{

	virtual string chrup() override { chrupZielony(); }

};

class Kiszony : public Ogorek
{

	virtual string chrup() override { chrupKiszony(); }

};

string jedzOgorek(Ogorek* ogorek)
{
	string tekst;
	if (ogorek == new Zielony) tekst = "Zielony: " + ogorek->chrup();
	else if (ogorek == new Kiszony) tekst = "Kiszony: " + ogorek->chrup();
	return tekst;
}

// tutaj klasy Ogorek, Zielony i Kiszony
