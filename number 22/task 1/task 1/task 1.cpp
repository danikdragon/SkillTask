#include <iostream>
#include <string>
#include <map>

using namespace std;
// по сути find и есть log n
void find_name(const string number, map<string, string>& numbers)
{
	if (!numbers[number].empty())
	{
		cout << "name: " << numbers[number];
		cout << "\n";
	}
}
// log n * на кол-во номеров
void find_numbers(const string name, map<string, string>& numbers)
{
	for (map<string, string>::iterator i = numbers.begin(); i != numbers.end(); i++)
	{
		if (i->second == name)
		{
			cout << "number : " << i->first << "\n";
		}
	}
}

int main()
{
	map<string, string> numbers;
	while (true)
	{
		string buffer;
		string number = "";
		string name = "";

		cout << "Enter (name | number | number & name )\n";
		getline(cin, buffer);

		for (int i = 0; i < buffer.length(); i++)
		{
			if (buffer[i] == ' ')
			{
				number = buffer.substr(0, (i));
				name = buffer.substr((i+1), (buffer.length() - (i + 1)) );
				numbers[number] = name;
				break;
			}
		}

		if(number.empty())
			if (buffer[0] >= 48 && buffer[0] <= 57)
			{
				number = buffer;
				find_name(number, numbers);
			}
			else
			{
				name = buffer;
				find_numbers(name, numbers);
			}

	}
}