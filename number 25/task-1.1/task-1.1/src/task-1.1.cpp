#include <iostream>
#include "task-1.1.h"

using namespace std;

int main()
{
	Point p1, p2;
	// ввод 2х позиций разреза 
	cout << "scalpel, enter 4 pos 2 for start and 2 for finish: ";
	scalpel(p1, p2);
	// ввод 1 позиции, если позиция == а значит можно продолжить
	while (true)
	{
		cout << "tweezers, enter 2 pos (start): ";
		if (hemostat(p1))
			break;
	}
	// ввод 1 позиции, если позиция == b значит можно продолжить
	while (true)
	{
		cout << "tweezers, enter 2 pos (finish): ";
		if (tweezers(p2))
			break;
	}
	// ввод двух позиций, пока они не будут меньше нуля
	while (true)
	{
		cout << "suture, enter 4 pos 2 for start and 2 for finish: ";
		if (suture(p1, p2))
			break;
	}
	cout << "Complete!";
	return 0;
}
