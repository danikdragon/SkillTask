#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void CreatCoutNominal(int* arr)
{
	const int nominal[6] = { 100,200,500,1000,2000,5000 };
	int masNom[6] = { 0 };
	int buffer;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			if(arr[j] == nominal[i])
				masNom[i]++;
		}
	}
	long sum = 0;
	for (int i = 5; i >= 0; i--)
	{
		cout << nominal[i] << " rub \t : " << masNom[i] << "\n";
		sum += masNom[i] * nominal[i];
	}
	cout << "\nSummary : " << sum << "\n\n";
}

void randSum(int* arr, int i)
{
	const int sum[6] = { 100, 200, 500, 1000, 2000, 5000 };
	int r = rand() % 6;
	arr[i] = sum[r];
}

void OnCreateFile(int* arr, string path)
{
	// ios::out для создания файла если его не существует
	ofstream file(path, ios::binary | ios::out);
	file.close();
	for (int i = 0; i < 1000; i++)
	{
		randSum(arr, i);
	}
}

void FileNotEmpty(fstream& bank, int* arr)
{
	for (int i = 0; !bank.eof(); i++)
	{
		char buffer[4];
		bank.read(buffer, 4);
		// нашел функцию которая копирует байты из одной облости в другую, не нужно конвертировать
		memcpy(&arr[i], buffer, 4);
	}
	bank.seekg(0);
}

void CinBank(int* arr)
{
	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] == 0)
		{
			randSum(arr, i);
		}
	}
	CreatCoutNominal(arr);
}

void dell(int* arr, int sum)
{
	const int nominal[6] = { 5000,2000,1000,500,200,100 };
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			if (arr[j] == nominal[i])
			{
				sum -= nominal[i];
				arr[j] = 0;
				if (sum < 0)
				{
					sum += nominal[i];
					arr[j] = nominal[i];
					break;
				}
			}
			if (sum == 0)
				break;
		}
		if (sum == 0)
			break;
	}
}

void TakeMoney(int* arr)
{
	int sum;
	int arrSum[6] = {0};
	while (true)
	{
		cout << "Enter needed sum : ";
		cin >> sum;
		if (sum % 100 == 0)
			break;
		else
			cout << "Incorrect sum\n";
	}

	dell(arr, sum);
	for (int i = 0; i < 6; i++)
	{
		if (sum != 0)
		{
			cout << " !ERORR! \n";
			break;
		}
	}
	CreatCoutNominal(arr);
}

void Program(fstream& bank, int* arr)
{
	bank.seekg(0);

	CreatCoutNominal(arr);
	char action = 'N';
	while (action != 'E')
	{
		cout << "Select an action (+ - E) : ";
		cin >> action;
		if (action == '+')
			CinBank(arr);
		else if (action == '-')
			TakeMoney(arr);
	}
	CreatCoutNominal(arr);
}

void EndProgram(fstream& bank, int* arr)
{
	for (int i = 0; i < 1000; i++)
	{
		bank.write((const char*)&arr[i], sizeof(arr[i]));
	}
}

int main()
{
	fstream bank("..\\bank.bin", ios::binary | ios::in | ios::out);
	int arr[1000] = { 0 };

	if(bank.is_open())
	{
		FileNotEmpty(bank, arr);
		Program(bank, arr);
	}
	else 
	{
		OnCreateFile(arr, "..\\bank.bin");
		bank.open("..\\bank.bin");
		Program(bank, arr);
	}
	EndProgram(bank, arr);
	bank.close();
}