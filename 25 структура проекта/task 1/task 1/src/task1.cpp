#include <iostream>
#include "StructurProgramm.h"

using namespace std;

int main()
{
	double a, b;
	// ввод 2х позиций разреза 
	cout << "scalpel, enter 2 pos: ";
	scalpel(a, b);
	// ввод 1 позиции, если позиция == а значит можно продолжить
	while (true)
	{
		cout << "hemostat, enter 1 pos: ";
		if (hemostat(a))
			break;
	}
	// ввод 1 позиции, если позиция == b значит можно продолжить
	while (true)
	{
		cout << "tweezers, enter 1 pos: ";
		if (tweezers(b))
			break;
	}
	// ввод двух позиций, пока они не будут меньше нуля
	while (true)
	{
		cout << "suture, enter 2 pos: ";
		if (suture(a, b))
			break;
	}
	cout << "Complite!";
}
