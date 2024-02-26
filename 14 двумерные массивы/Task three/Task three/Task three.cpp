#include <iostream>
#include <vector>
using namespace std;

vector<int> sortByPop(vector<int> vec) 
{
	for (int j = 0; j < vec.size(); j++)
	{
		for (int i = 0; i < vec.size() - 1 - j; i++)
		{
			if (vec[i] > vec[i + 1])
			{
				int temp = vec[i + 1];
				vec[i + 1] = vec[i];
				vec[i] = temp;
			}
		}
	}
	while (vec.size() > 5)
	{
		vec.pop_back();
	}
	return vec;
}

void coutVecAndFiveNumber(vector<int> vec) 
{
	if (vec.size() > 4) 
	{
		cout << "output: " << vec[4] << " ( ";
		for (int i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << ' ';
		}
		cout << ") \n";
	}
}

int main()
{
	vector<int> vec;
	int lastnum(0);
	int maxnum;

	while (lastnum != -2)
	{
		cout << "Enter: ";
		lastnum = 0;


		while (lastnum != -1 && lastnum != -2) 
		{
			cin >> lastnum;

			if (vec.size() >= 5) {
				maxnum = vec[4];
				if (lastnum < maxnum)
					vec.push_back(lastnum);
			}
			else vec.push_back(lastnum);
		}
		vec.pop_back();
		vec = sortByPop(vec);
		coutVecAndFiveNumber(vec);
		maxnum = vec[4];
	}
}