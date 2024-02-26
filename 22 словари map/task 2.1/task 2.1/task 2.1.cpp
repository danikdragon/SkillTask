#include <iostream>
#include <string>
#include <map>

using namespace std;

void sort_map(map<int, string>& my_map, static string buffer)
{
	int i_buffer = 0;
	bool checker;
	// тут проверяем меньше центра наше значение или нет
	// тут условие с нахождением места куда можно вставить человека
	// тут мы сдвигаем все в нужную нам сторону
	while (true)
	{

	}
}

int main()
{
	map<int, string> queue;
	string buffer;

	while(buffer != "Exit")
	{
		cout << " <- ";
		cin >> buffer;
		if (buffer != "Next" && buffer != "Exit")
		{
			if (queue.empty())
			{
				queue.insert(make_pair(0, buffer));
			}
			else
			{
				sort_map(queue, buffer);
			}
		}
		else if (buffer == "Next" && !queue.empty())
		{
			cout << " -> " << queue.begin()->second << "\n";
			queue.erase(queue.begin());
		}
	}
}