#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	vector<string> data;
	ifstream path;
	path.open("B:\\c++\\task 1\\task 1\\words.txt");
	
	string neededWord;
	int countWords = 0;
	cout << "Hello user enter needed word!\n";
	cin >> neededWord;

	if (path.is_open()) 
	{
		string word;
		while (!path.eof())
		{
			path >> word;
			data.push_back(word);
		}
		for (int i = 0; i < data.size(); i++)
		{
			cout << data[i] << ' ';
			if (data[i] == neededWord)
				countWords++;
		}
		cout << '\n';
	}
	cout << "word count " << neededWord << " equals " << countWords;
	path.close();
}