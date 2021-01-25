#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe

template <typename T>
unsigned gotujZupe(const Warzywo& w, const T& t)
{
	return ((t.gotujZupe(w)). ^ 2);
}

void jedzOstatnieWarzywa(const vector <Warzywo> &W, unsigned& N, ostream& O)
{
	if (N >= W.size()) throw logic_error("To jest wyjatek");
	for (vector <Warzywo>::iterator it = W.rbegin(); it != W.rend(); it++) { it + 1 -> opis(O); }
}
