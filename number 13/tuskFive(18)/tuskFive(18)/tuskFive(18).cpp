#include <iostream>
using namespace std;

void popIt(bool mas[][12], int start_one, int finish_one, int start_two, int finish_two) {
	for (int i = start_one; i < start_two; i++)
	{
		for (int j = finish_one; j < finish_two; j++)
		{
			if (mas[i][j]) {
				mas[i][j] = false;
				cout << "PoP! \n";
			}
		}
	}
}

void coutBabyBump(bool mas[][12]) {
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (!mas[i][j]) {
				cout << 'x' << " ";
			}else cout << 'o' << " ";
		}
		cout << "\n";
	}
}
int popTracer(bool mas[][12]) {
	int popPop(0);
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (!mas[i][j]) 
				popPop++;
		}
	}
	return popPop;
}

int main()
{
	bool BabyBump[12][12];
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			BabyBump[i][j] = true;
		}
	}

	int start_one(0), finish_one(0), start_two(0), finish_two(0);
	while (popTracer(BabyBump) < 12*12)
	{
		cout << "Input top left corner (x.1-y.1) : ";

		cin >> start_one >> finish_one;

		cout << "Input down right corner x.2-y.2: ";

		cin >> start_two >> finish_two;

		start_one--;
		finish_one--;

		popIt(BabyBump, start_one, finish_one, start_two, finish_two);
		coutBabyBump(BabyBump);
	}
	return 0;
}