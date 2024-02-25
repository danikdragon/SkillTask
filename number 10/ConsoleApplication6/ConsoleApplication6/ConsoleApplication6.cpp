#include <iostream>
using namespace std;
// Общие кол-во всех символов на выбор Х или О
int CounterChar(string str1, string str2, string str3, char XorO) {
	int count(0);
	str1 += str2 + str3;
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == XorO) count++;
	}
	return count;
}
// горизонтальная проверка
int WinOnLineHorizontal(string str1, string str2, string str3, char XorO) {
	int allWin(0), winStr1(0), winStr2(0), winStr3(0);
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == XorO) winStr1++;
		if (str2[i] == XorO) winStr2++;
		if (str3[i] == XorO) winStr3++;
	}
	allWin += winStr1 == 3 ? 1 : 0;
	allWin += winStr2 == 3 ? 1 : 0;
	allWin += winStr3 == 3 ? 1 : 0;
	return allWin;
}
// вертикальная проверка
int WinOnLineVertical(string str1, string str2, string str3, char XorO) {
	int allWin(0);
	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] == XorO && (str1[i] == str2[i] && str2[i] == str3[i])) {
			allWin++;
		}
		for (int k = 0; k < str3.length(); k++)
		{
			if (k != 1) {
				if (str1[i] == XorO && (str1[i] == str2[1] && str2[1] == str3[k])) {
					allWin++;
				}
			}
		}
	}
	return allWin;
}
// проверка на правильность ввода
bool CheckCorrectXO(string str1, string str2, string str3) {
	int len(0);
	string allStr = str1 + str2 + str3;
	for (int i = 0; i < allStr.length(); i++) {
		if (allStr[i] == 'x' || allStr[i] == 'o' || allStr[i] == '.') {
			len++;
		}
		else {
			return false;
		}
	}
	if(len == 9){
		return true;
	}
	return false;
}
// запуск всех функций, проверка результата и вывод итогов
void WhoWon(string str1, string str2, string str3) {
	int winP(0), winV(0);
	int allX(0), allO(0);
	// проверка на коректность написанного
	if (CheckCorrectXO(str1, str2, str3)) {
		// проверка совпадений по вертикали
		winP += WinOnLineVertical(str1, str2, str3, 'x');
		winV += WinOnLineVertical(str1, str2, str3, 'o');
		// проверка совпадений по горизонтали
		winP += WinOnLineHorizontal(str1, str2, str3, 'x');
		winV += WinOnLineHorizontal(str1, str2, str3, 'o');
		// проверка на кол-во Х и О
		allX += CounterChar(str1, str2, str3, 'x');
		allO += CounterChar(str1, str2, str3, 'o');
		// вывод результатов
		if ( (winP <= 1 && winV <= 1)) {
			if (winP == 1 && winV == 1) {
				cout << "Incorrect";
			}
			else if (winP == 0 && winV == 0) {
				cout << "Nobody";
			}
			else if (winP == 1) {
				if (allX > allO) {
					cout << "Petya won";
				}
				else {
					cout << "Incorrect";
				}
			}
			else if (winV == 1) {
				if(allX == allO){
					cout << "Vanya won";
				}
				else {
					cout << "Incorrect";
				}
			}
		}
		else {
			cout << "Incorrect";
		}
	}
	else {
		cout << "Incorrect";
	}
}

int main()
{
	string str1, str2, str3;
	cout << "enter your match\n";
	cin >> str1 >> str2 >> str3;
	WhoWon(str1, str2, str3);
}