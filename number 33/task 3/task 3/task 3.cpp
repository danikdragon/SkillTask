#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename KeyType, typename ValueType>

struct Reestr
{
	vector<KeyType> key;
	vector<ValueType> value;

	void add(KeyType _key, ValueType _value)
	{
		key.push_back(_key);
		value.push_back(_value);
	}
	void remove(KeyType _key)
	{
		for (int i = 0; i < key.size();)
		{
			if (key[i] == _key)
			{
				swap(key[i], key.back());
				key.pop_back();

				swap(value[i], value.back());
				value.pop_back();
			}
			else
				i++;
		}

	}
	void find(KeyType _key)
	{
		for (int i = 0; i < key.size(); i++)
			if(key[i] == _key)
				cout << key[i] << " : " << value[i] << "\n";
	}
	void print()
	{
		for (int i = 0; i < key.size(); i++)
			cout << key[i] << " : " << value[i] << "\n";
	}
};

int main()
{
	string command;
	Reestr<int, double> temp;
	
	temp.add(1, 1.5);
	temp.add(2, 2.5);
	temp.add(1, 3.5);
	temp.add(3, 4.5);

	temp.print();
	cout << "\n 1.1 -------------------------------------------\n";
	temp.find(1);
	cout << "\n 1.2 -------------------------------------------\n";
	temp.find(2);
	cout << "\n 1.3 -------------------------------------------\n";
	temp.remove(1);
	temp.print();


	cout << "\n-------------------------------------------\n";
	Reestr<string, double> temp1;

	temp1.add("1", 1.5);
	temp1.add("2", 2.5);
	temp1.add("1", 3.5);

	temp1.print();
	cout << "\n 2.1 -------------------------------------------\n";
	temp1.find("1");
	cout << "\n 2.2 -------------------------------------------\n";
	temp1.find("2");
	cout << "\n 2.3 -------------------------------------------\n";
	temp1.remove("1");
	temp1.print();
}