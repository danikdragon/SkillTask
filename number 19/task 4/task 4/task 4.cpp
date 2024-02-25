#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	char check[4];
	ifstream path;
	cout << "Enter your path: ";
	string userPath;
	getline(cin, userPath);

	//B:\\c++\\task 1\\task 1\\words.txt
	//B:\\c++\\task 4\\task 4\\cat.png
	path.open(userPath,ios::binary);

	if (path.is_open())
	{
		int subDothPos = 0;
		bool checkPref = false;
		for (int i = 0; i < userPath.length(); i++)
		{
			if(i < 4)
				path >> check[i];
			if (userPath[i] == '.')
				subDothPos = i;
		}

		if (check[0] == -119 && (check[1] == 'P' && check[2] == 'N' && check[3] == 'G'))
			checkPref = true;

		if ( (userPath.substr(subDothPos+1,3) == "png") && checkPref)
		{
			cout << "that is png!\n";
		}
		else
			cout << "that is not png!\n";

	}
	else 
		cout << "Incorrect path\n";
	
	path.close();
}