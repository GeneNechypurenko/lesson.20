#pragma once

#include "Storage.h"

class CD : public Storage
{
public:
	CD();
	CD(const string brand, int capacity);

	void readData() override;
};