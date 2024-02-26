#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	ofstream o_file("..\\my_file.txt", ios::app); // запись

	string date;
	string name, lastName;
	int long salary;

	//переменная для проверки даты, если проверка провалена то в цикле пропускаю часть кода
	bool check_date = true;
	//цикл на запись данных в строку
	while (true)
	{
		//пропускаем если проверка даты прошла неправильно
		if (check_date)
		{
			cout << "Enter name and last name \n";
			cout << "If you want exit press 1 \n";

			cin >> name;
			if (name == "1")
			{
				check_date = false;
				break;
			}
			cin >> lastName;


			cout << "Enter salary \n";
			cin >> salary;
		}

		cout << "Enter date dd.mm.yyyy\n";
		cin >> date;

		//создаю и получаю индексы начала и конца чисел в дате
		int l_data = static_cast<int>(date.length());
		int pos_start1{ 0 }, pos_start2{ -1 }, pos_start3{ -1 };
		int pos_finish1{ 0 }, pos_finish2{ -1 }, pos_finish3{ l_data };
		for (int i = 0; i < date.length(); i++)
		{
			if (date[i] == '.')
			{
				if (pos_start2 == -1)
				{
					pos_start2 = i + 1;
					pos_finish1 = i + 1;
				}
				else if (pos_start3 == -1)
				{
					pos_start3 = i + 1;
					pos_finish2 = i + 1;

				}
			}
		}
		//записываю данные в инт
		int dd = stoi(date.substr(pos_start1, pos_finish1 - pos_start1));
		int mm = stoi(date.substr(pos_start2, pos_finish2 - pos_start2));
		int yyyy = stoi(date.substr(pos_start3, pos_finish3 - pos_start3));

		//проверка даты
		if ((dd <= 31 && dd > 0) &&
			(mm <= 12 && mm > 0) &&
			(yyyy >= 1900 && yyyy <= 2023))
			check_date = true;
		else
			check_date = false;

		//пропускаем если проверка даты прошла неправильно
		if (check_date)
		{
			o_file << name << ' ' << lastName << ' ' << salary << ' ' << date << '\n';
		}
		cout << "\n";
	}
	cout << "\n";
	o_file.close();

	ifstream i_file("..\\my_file.txt"); // чтение

	vector<string> oneUser = {"1"};
	int maxSum = 0;

	if (i_file.is_open())
	{
		while (!i_file.eof())
		{
			i_file >> name >> lastName >> salary >> date;
			if (salary > maxSum)
			{
				oneUser.pop_back();
				maxSum = salary;
				oneUser.push_back(name + ' ' + lastName + ' ' + to_string(salary) + ' ' + date);
			}

		}
		cout << oneUser[0] << '\n';
	}
	else
	{
		cout << "ERROR";
	}
	cout << '\n';
	i_file.close();

	return 0;
}