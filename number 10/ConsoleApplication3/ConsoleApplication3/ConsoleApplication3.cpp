#include <iostream>
#include <string>
using namespace std;
bool corect_string(string str) {
	for (int i = 0; i < str.length(); i++) {
		if ( (str[i] < 'A' && str[i] > 'Z')
		  && (str[i] <! 'a' && str[i] >!'z') && str[i] != ' ')
		{
			return false;
		}
		else {
			return true;
		}
	}
}
string encrypt_decrypt_caesar(string str, int step, int choice) {
	step = choice == 1 ? step : -step;
	for (int i = 0; i < str.length(); i++) {
		if (isalpha(str[i])) {
			char base = isupper(str[i]) ? 'A' : 'a';
			str[i] = ((str[i] - base + step) + 26) % 26 + base; 
		}
	}
	return str;
}
int main()
{
	string text;
	cout << "Your text: ";
	getline(cin, text);
	if (!corect_string(text)) {
		cout << "incorrect select number text";
		return 1;
	}

	int choice;
	cout << "encrypt or decrypt? (1-0) ";
	cin >> choice;
	
	int step;
	cout << "what will be the step?: ";
	cin >> step;

	if (choice == 1 || choice == 0) {
		cout << encrypt_decrypt_caesar(text, step, choice);
	}
	else {
		cout << "incorrect select number";
	}
}