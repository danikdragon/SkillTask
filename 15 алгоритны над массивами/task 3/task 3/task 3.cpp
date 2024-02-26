#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int main()
{
	string expression;
	cout << "Enter expression: ";
	cin >> expression;

	int a, b;
	char op;

	stringstream buffer_stream(expression);
	buffer_stream >> a >> op >> b;
	switch (op)
	{
		case '+':
			a = a + b;
			break;

		case '-':
			a = a - b;
			break;

		case '*':
			a = a * b;
			break;

		case '/':
			if (b != 0) {
				a = a / b;
			}
			else {
				cout << "incorrect integer, number two = 0\n";
			}
			break;

		default:
			break;
	}
	cout << a;
}
