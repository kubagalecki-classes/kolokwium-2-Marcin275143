#pragma once

#include "zad1.hpp"

#include <cmath>
#include <functional>

// tutaj szablon gotujZupe

template <typename T>
unsigned gotujZupe(const Warzywo& w, const T& t)
{
	return (pow(t.gotuj(w),2));
}
