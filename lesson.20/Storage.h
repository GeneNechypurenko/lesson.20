#pragma once
#include <iostream>
#include <string>

using namespace std;

class Storage
{
protected:
	string brand;
	int capacity;

public:
	Storage();
	Storage(string brand, int capacity);

	void setBrand(const string brand);
	void setCapacity(int capacity);

	virtual void readData() = 0;
};

