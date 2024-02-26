#include <iostream>
using namespace std;
// a=97 z=122
string encrypt_decrypt_caesar(string str, int step, int choice) {
	step = choice == 1 ? step: step - (step * 2);
	for (int i = 0; i < str.length(); i++) {
		str[i] = step + str[i];
	}
}

int main()
{

	int choice;
	string text;
	int step;
	
	cout << "encrypt or decrypt? (1-0) ";
	cin >> choice;
	cout << "Your text: ";
	cin >> text;
	cout << "what will be the step?: ";
	cin >> step;

	if (choice == 1 || choice == 0) {
		cout << encrypt_decrypt_caesar(text, step, choice);
	}
	else {
		cout << "incorrect select number";
	}
}