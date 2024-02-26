#include <iostream>
#include "ram.h"

void setRam(ram& a, int b[8])
{
	for (int i = 0; i < 8; i++)
	{
		a.date[i] = b[i];
	}
}
int* getRam(ram a)
{
	return a.date;
}