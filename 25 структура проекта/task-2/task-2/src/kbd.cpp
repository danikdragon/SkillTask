#include <iostream>
#include "kbd.h"
using namespace std;

int* KBD(int date[8])
{
	for (int i = 0; i < 8; i++)
	{
		cout << "Enter elem #" << i + 1 << " - ";
		cin >> date[i];
	}
	return date;
}
