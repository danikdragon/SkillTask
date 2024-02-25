#pragma once
#include "window.h"
#include <iostream>
using namespace std;

class Display
{
public:

	int getSizeDisplay(char select)
	{
		if (select == 'X')
			return sizeDisplayX;
		if (select == 'Y')
			return sizeDisplayY;
	}

	void display(window app)
	{
		for (int i = 1; i < sizeDisplayY; i++)
		{
			for (int j = 1; j < sizeDisplayX; j++)
			{
				if (j >= sizeDisplayX && i >= sizeDisplayY
					&& j < app.getSize('X') + app.getPos('X')
					&& i < app.getSize('Y') + app.getPos('Y'))
					cout << "1";
				else
					cout << "0";
			}
			cout << "\n";
		}
	}
private:
	int sizeDisplayX = 80, sizeDisplayY = 50;
};