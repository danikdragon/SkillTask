#include <iostream>
#include "cpu.h"

using namespace std;
void CPU(int date[8])
{
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		sum += date[i];
	}
	cout << "Sum : " << sum << "\n";
}