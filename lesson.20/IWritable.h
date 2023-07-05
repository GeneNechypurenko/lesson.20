#pragma once
#include <iostream>
#include <string>

using namespace std;

class IWritable
{
public:
	virtual void writeData() = 0;
	virtual void formatDisk() = 0;
};

