#include <iostream>
#include <string>
#include <map>

using namespace std;
// нам нужно сделать счетчик i = 0
// на ай разместить 1 слово
// в буффер слов положить чар этого слова под номером 0
// следуйщее слово делает проверку менше ли индекс его или больше чем у чара в буфере
// если меньше то получаем индекс слова под номером 0 
//

void find_human_and_remove(map<int, string>& my_map)
{
	int buffer = 0;
	string str_buffer = "z";
	for (map<int, string>::iterator i = my_map.begin(); i != my_map.end(); i++)
	{
		if (i->second[0] <= str_buffer[0])
		{
			buffer = i->first;
			str_buffer = i->second[0];
		}
	}
	if(buffer != 0)
	{
		cout << " -> " << my_map.find(buffer)->second << "\n";
		my_map.erase(buffer);
	}
}

int main()
{
    map<int, string> queue;
	string buffer;

	for (int i = 1; buffer != "Exit";)
	{
		cout << " <- ";
		cin >> buffer;
		if (buffer != "Next" && buffer != "Exit")
		{
			queue.insert(make_pair(i, buffer));
			i++;
		}
		else if(buffer == "Next" && !queue.empty())
		{
			find_human_and_remove(queue);
		}
	}

	cout << "Your queue :\n";
	for (map<int, string>::iterator i = queue.begin(); i != queue.end(); i++)
	{
		cout << "---" << i->second << "\n";
	}
}
