#include <iostream>
using namespace std;

class window
{
public:
	void move(int display_size_x, int display_size_y)
	{
		int app_x, app_y;
		cout << "Enter x & y: ";
		cin >> app_x >> app_y;

		if ((app_x + sizeWindowX <= display_size_x && app_y + sizeWindowY <= display_size_y) && (app_x >= 0 && app_y >= 0))
		{
			windowPositionX = app_x;
			windowPositionY = app_y;
		}
		else
			cout << "Error\n";
	}
	void resize(int display_size_x, int display_size_y)
	{
		int app_x, app_y;
		cout << "Enter x & y: ";
		cin >> app_x >> app_y;
		if ((app_x + windowPositionX <= display_size_x && app_y + windowPositionY <= display_size_y) && (app_x >= 0 && app_y >= 0))
		{
			sizeWindowX = app_x;
			sizeWindowY = app_y;
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
			return sizeWindowX;
		if (select == 'Y')
			return sizeWindowY;
	}
private:
	int windowPositionX = 0, windowPositionY = 0;
	int sizeWindowX = 0, sizeWindowY = 0;
};

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
		for (int y = 1; y <= sizeDisplayY; y++)
		{
			for (int x = 1; x <= sizeDisplayX; x++)
			{
				if (x <= sizeDisplayX && y <= sizeDisplayY //проверка не вышел ли за границы экрана
					&& x > app.getPos('X') && y > app.getPos('Y') //проверка на вход в область окна
					&& x <= app.getPos('X') + app.getSize('X') //заполнение по x
					&& y <= app.getPos('Y') + app.getSize('Y'))//заполнение по y
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

int main()
{
	window my_app;
	Display my_display;
	string command;
	while (command != "close")
	{
		cout << "Enter command; move, resize, display : ";
		cin >> command;
		if (command == "move")
			my_app.move(my_display.getSizeDisplay('X'), my_display.getSizeDisplay('Y'));
		if (command == "resize")
			my_app.resize(my_display.getSizeDisplay('X'), my_display.getSizeDisplay('Y'));
		if (command == "display")
			my_display.display(my_app);
	}
	return 0;
}