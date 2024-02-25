#include <iostream>
using namespace std;
//проверка повторения собачек
bool check_mail_at(int a, bool errorNumber1, bool errorNumber2) {
	if ((a > 1 || a == 0) && (errorNumber1 && errorNumber2)) {
		return false;
	}
	else {
		return true;
	}
}
//проверка корректности символа
bool check_mail_symbol(char str) {
	if (isalpha(str) ||
		str == '.' || 
		str == '@' ||
		str == '_' ||
		str == '+' ||
		(str >= '0' && str <= '9')) {
		return true;
	}
	else {
		return false; 
	}
}
//проверка длины
bool check_mail_max_length(int a) {
	if (a > 64) {
		return false;
	}
	else {
		return true;
	}
}

void check_mail(string str) {
	bool doth = true;
	bool symbol = true;
	bool underscore = true;
	int at = 0;
	int maxLength = 0;
	
	for (int i = 0; i < str.length(); i++) {
		maxLength++;
		if (str[i] == '.' && str[i + 1] == '.') {
			doth = false;
			cout << "Repeat doth\n";
			break;
		}
		if (check_mail_symbol(str[i]) == false) {
			symbol = false;
			cout << "incorrect symbol\n";
			break;
		}
		if (str[i] == '@') {
			at += 1;
			for (int j = i; j < str.length(); j++) {
				maxLength--;
				if (str[j] == '_') {
					underscore = false;
					cout << "on the right side underscore\n";
					break;
				}
			}
		}
	}
	if (!check_mail_at(at, symbol, doth)) {
		cout << "none or more than one at\n";
	}
	else if (!check_mail_max_length(maxLength)) {
		cout << "max left length > 64\n";
	}
	else if (symbol && doth && underscore) {
		cout << "yes\n";
	}
}
int main()
{
	string email;
	cout << "Enter your email: ";
	cin >> email;
	check_mail(email);
}