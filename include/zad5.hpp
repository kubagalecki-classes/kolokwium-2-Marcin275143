#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

bool Funktor(Warzywo& w1, Warzywo& w2) { if (w1.get_nazwa() == w2.get_nazwa()) return true; }

template <typename typ>
bool liczKolejneWarzywa(typ poczatek, typ koniec, unsigned n, const string &s)
{
	Warzywo w = Warzywo(s, 40, 4);
	if (search_n(poczatek, koniec, n, w, Funktor) == poczatek) ? true : false;
}

// tutaj algorytm liczKolejneWarzywa
