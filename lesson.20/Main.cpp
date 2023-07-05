#include <iostream>

#include "CD.h"
#include "HardDrive.h"
#include "IWritable.h"
#include "Storage.h"

using namespace std;

int main() {

	Storage* s = nullptr;

	HardDrive hd("Seagate", 500);
	CD cd("Verbatim", 700);

	s = &hd;
	s->readData();
	((IWritable*)(s))->formatDisk();
	((IWritable*)(s))->writeData();

	cout << "-------------" << endl;

	s = &cd;
	s->readData();

	return 0;
}