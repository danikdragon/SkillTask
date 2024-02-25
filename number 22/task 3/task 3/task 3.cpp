#include <iostream>
#include <string>
#include <map>

using namespace std;

bool check_anagram(string buffer_first, string buffer_second)
{
	if (buffer_first.length() != buffer_second.length())
		return false;

	for (int i = 0; i < buffer_first.length(); i++)
	{
		for (int j = 0; j < buffer_second.length(); j++)
		{
			if(buffer_first[i] == buffer_second[j])
			{
				buffer_second.erase(j, 1);
				break;
			}
		}
	}

	if (buffer_second.length() == 0)
		return true;
	else
		return false;
}

int main()
{
	cout << "Anagram:\n";
	while (true)
	{
		map<string, string> anagram;
		string buffer_first, buffer_second;

		cout << "Enter two words: ";
		cin >> buffer_first >> buffer_second;
		anagram.insert(make_pair(buffer_first, buffer_second));

		if (check_anagram(anagram.begin()->first, anagram.begin()->second))
			cout << "This is anagram\n";
		else
			cout << "This is not anagram\n";
	}
}