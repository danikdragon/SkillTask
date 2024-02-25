#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = { -100,-50, -5, 1, 10, 15 };
	for (int j = 0; j < vec.size(); j++)
	{
		if (vec[j] < 0) {
			for (int i = 0; i < vec.size() - 1 - j; i++)
			{
				if (abs(vec[i]) > vec[i + 1])
				{
					int temp = vec[i + 1];
					vec[i + 1] = vec[i];
					vec[i] = temp;
				}
				else break;
			}
		}
	}
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}
