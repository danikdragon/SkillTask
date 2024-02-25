#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <string> 
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	//инициализация рандома
	srand(time(0));

	ifstream question_file("..\\question_file.txt");
	vector<string> question;
	vector<string> answer;

	for (int i = 0; !question_file.eof(); i++)
	{
		string temp;
		getline(question_file, temp);
		question.push_back(temp);
		getline(question_file, temp);
		answer.push_back(temp);
	}

	int viewers(0);
	int players[13] = {0};

	while (true)
	{
		int lastUser(-1);

		int currentUser;
		int currentQuest;

		string userAnswer;
		// цикл на создание рандомного игрока, повторяется если выпал прошлый игрок
		do {
			currentUser = rand() % 13;
		} while (lastUser == currentUser);

		//выбор квеста 
		currentQuest = rand() % (question.size());

		cout << "User number " << currentUser << " this is your quest\n";
		cout << question[currentQuest] << '\n';

		cin >> userAnswer;
		if (userAnswer == answer[currentQuest])
			players[currentUser]++;
		else
			viewers++;
		cout << '\n';

		//проверка на победу
		if (players[currentUser] == 6)
		{
			cout << "Winer players number - " << currentUser << "! Congratulations!\n";
			break;
		}
		else if (viewers == 6)
		{
			cout << "Unfortunately, not a single player won today, but I hasten to congratulate our viewers on their victory!\n";
			break;
		}
		lastUser = currentUser;

	}
	//закрытие программ
	question_file.close();
}