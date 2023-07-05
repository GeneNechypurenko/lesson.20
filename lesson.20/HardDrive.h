#pragma once

#include "Storage.h"
#include "IWritable.h"

class HardDrive : public Storage, public IWritable
{
public:
	HardDrive();
	HardDrive(const string brand, int capacity);

	void readData() override;

	void writeData() override;
	void formatDisk() override;
};

