#include "zad1.hpp"

#include <algorithm>
#include <deque>
#include <vector>

template <typename typ>
bool liczKolejneWarzywa(typ poczatek, typ koniec, unsigned n, const string &s)
{
	Warzywo w = Warzywo(s, 40, 4);
	if (search_n(poczatek, koniec, n, w, Funktor) == poczatek) ? true : false;
}

// tutaj algorytm liczKolejneWarzywa
