#include <iostream>
#include "gpu.h"
using namespace std;

void GPU(int date[8])
{
	for (int i = 0; i < 8; i++)
	{
		cout << "Elem #" << i + 1 << " - " << date[i] << "\n";
	}
}
