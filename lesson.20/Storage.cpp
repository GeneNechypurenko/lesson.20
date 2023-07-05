#include "Storage.h"

Storage::Storage()
{}

Storage::Storage(string brand, int capacity)
	:
	brand(brand),
	capacity(capacity)
{}

void Storage::setBrand(const string brand)
{
	this->brand = brand;
}

void Storage::setCapacity(int capacity)
{
	this->capacity = capacity;
}