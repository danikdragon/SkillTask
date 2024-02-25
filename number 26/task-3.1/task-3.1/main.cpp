#include "main.h"
using namespace std;

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
			my_app.move(my_display);
		if (command == "resize")
			my_app.resize(my_display);
		if (command == "display")
			my_display.display(my_app);
	}
	return 0;
}