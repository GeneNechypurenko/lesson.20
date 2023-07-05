#include "CD.h"

CD::CD()
{}

CD::CD(const string brand, int capacity)
	:
	Storage(brand, capacity)
{}

void CD::readData()
{
	cout << "read from CD" << endl;
}