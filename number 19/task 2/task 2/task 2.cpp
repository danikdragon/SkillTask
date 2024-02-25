#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream userFile;
	cout << "Enter path  your file\n";
	string pathUserFile;


	//..\\words.txt

	getline(cin, pathUserFile);
	userFile.open(pathUserFile);

	if (userFile.is_open())
	{
		//размер сделал на 1 больше что бы в конце файла не съедал последний символ
		const int size = 16;
		char buffer[size + 1];
		//читаю данный на размер массива - 1, тоже для того что бы не съедал символ
		while (userFile.read(buffer, size)) {
			buffer[userFile.gcount()] = '\0';
			std::cout << buffer;
		}
		buffer[userFile.gcount()] = '\0';
		std::cout << buffer;
	}
	else
	{
		cout << "Incorrect path";
	}
	userFile.close();
}