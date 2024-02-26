#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ifstream user("B:\\c++\\task 3\\task 3\\users.txt");

	string name, lastName, date;
	int sum, maxSum = 0, tempId = 0, idMaxSum = 0;

	vector<string> oneUser;

	if (user.is_open()) 
	{
		while (!user.eof()) 
		{
			user >> name >> lastName >> sum >> date;
			if (sum > maxSum) 
			{
				maxSum = sum;
				idMaxSum = tempId;
			}
			tempId++;
			oneUser.push_back(name + ' ' + lastName + ' ' + to_string(sum) + ' ' + date);
		}
		cout << oneUser[idMaxSum] << '\n';
	}
	else 
	{
		cout << "ERROR";
	}
	user.close();
}