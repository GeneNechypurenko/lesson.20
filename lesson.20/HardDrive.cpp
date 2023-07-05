#include "HardDrive.h"

HardDrive::HardDrive()
{}

HardDrive::HardDrive(const string brand, int capacity)
	:
	Storage(brand, capacity)
{}

void HardDrive::readData()
{
	cout << "read data from HD" << endl;
}

void HardDrive::writeData()
{
	cout << "write data on HD" << endl;
}

void HardDrive::formatDisk()
{
	cout << "formating HD.." << endl;
}
