#include "observer.h"

void Observable::notify()
{
	for (auto obs : interesati)
		obs->update();
}

void Observable::addObserver(Observer* o)
{
	interesati.push_back(o);
}

void Observable::removeObserver(Observer* o)
{
	interesati.erase(remove(interesati.begin(), interesati.end(), o));
}