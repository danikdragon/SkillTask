#pragma once
#include <iostream>
struct ram
{
	int date[8] = {0};
};
void setRam(ram& a, int b[8]);
int* getRam(ram a);