#include <iostream>
#include <vector>
using namespace std;
int main()
{
	float a[4][4] = { {12.7, 23.6, 41.5, 23.3}, {123.7, 51.8, 234.8, 52.9}, {123.8, 43.7, 54.6, 32.5}, {12.4, 534.3, 64.2, 23.1} };
	vector<float> b = { 6, 5, 3, 4 };
	vector<float> c = { 0, 0, 0, 0 };
	for (int i = 0; i < 4; i++)
	{
		float abc = 0;
		for (int j = 0; j < 4; j++)
		{
			abc += a[i][j] * b[j];
		}
		c[i] = abc;
		cout << c[i] << "\n";
	}
}