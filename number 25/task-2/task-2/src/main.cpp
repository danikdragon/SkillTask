#include "cpu.h"
#include "gpu.h"
#include "kbd.h"
#include "disk.h"
#include "ram.h"
#include <iostream>

using namespace std;

int main()
{
	ram temp;
	string command;
	while (command != "exit")
	{
		cout << "Enter command : ";
		cin >> command;

		if (command == "cpu")
			CPU(getRam(temp));

		if (command == "disk")
		{
			cout << "Select options (save-load) : ";
			cin >> command;
			if (command == "save")
				Save(getRam(temp));
			if (command == "load")
				Load(getRam(temp));
		}

		if (command == "gpu")
			GPU(getRam(temp));

		if (command == "kbd")
			setRam(temp, KBD(getRam(temp)));

	}
	cout << "Shutdown";
	return 0;
}
