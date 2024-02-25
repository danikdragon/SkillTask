#include <iostream>
#include <vector>
using namespace std;

float addition_prices(vector<float> prices, vector<float> items) 
{
	float sum(0);
	for(int i = 0; i < items.size(); i++)
	{
		sum += prices[items[i]];
	}
	return sum;
}
int main()
{
	vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
	vector<float> items{};
	int num(0);
	cout << "Input your number (stop = -1): ";
	//добавляем ячейки в вектор items, с произвольной длиной 
	while (num != -1) 
	{
		cin >> num;
		items.push_back(num);
	}
	//удаляем -1
	items.pop_back();
	cout << addition_prices(prices, items);
}
