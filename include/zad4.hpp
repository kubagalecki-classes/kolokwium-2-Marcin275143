#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa


void jedzOstatnieWarzywa(const vector <Warzywo> &W, unsigned& N, ostream& O)
{
	if (N >= W.size()) throw logic_error("To jest wyjatek");
	for (vector <Warzywo>::iterator it = W.rbegin(); it != W.rend(); it++) { it + 1 -> opis(O); }
}
