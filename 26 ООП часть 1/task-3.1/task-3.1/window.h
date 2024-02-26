#pragma once
#include "display.h"
#include <iostream>
using namespace std;

class window
{
public:
	void move(Display my_display)
	{
		int x, y;
		cout << "Enter x & y: ";
		cin >> x >> y;

		if ((x + sizeWindowX <= my_display.getSizeDisplay('X') && y + sizeWindowY <= my_display.getSizeDisplay('Y')) && (x > 0 && y > 0))
		{
			windowPositionX = x;
			windowPositionY = y;
		}
		else
			cout << "Error\n";
	}
	void resize(Display my_display)
	{
		int x, y;
		cout << "Enter x & y: ";
		cin >> x >> y;
		if ((x + windowPositionX <= my_display.getSizeDisplay('X') && y + windowPositionY <= my_display.getSizeDisplay('Y')) && (x > 0 && y > 0))
		{
			sizeWindowX = x;
			sizeWindowY = y;
		}
		else
			cout << "Error\n";
	}
	int getPos(char select)
	{
		if (select == 'X')
			return windowPositionX;
		if (select == 'Y')
			return windowPositionY;
	}
	int getSize(char select)
	{
		if (select == 'X')
			return windowPositionX;
		if (select == 'Y')
			return windowPositionY;
	}
private:
	int windowPositionX = 0, windowPositionY = 0;
	int sizeWindowX = 0, sizeWindowY = 0;
};
