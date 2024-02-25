#include <iostream>
#include <fstream>
#include <string>
#include "disk.h"

using namespace std;

void Save(int date[8])
{
	ofstream  Path("..\\Date.txt", ios::trunc);
	if (Path.is_open())
	{
		for (int i = 0; i < 8; i++)
		{
			Path << date[i] << "\n";
		}
		cout << "Complete!\n";
	}
	else
		cout << "Fatal error\n";
	Path.close();
}
void Load(int* date)
{
	ifstream Path("..\\Date.txt");
	if (Path.is_open())
	{
		for (int i = 0; i < 8; i++)
		{
			Path >> date[i];
		}
		cout << "Complete!\n";
	}
	else
		cout << "No save found\n";
	Path.close();
}
