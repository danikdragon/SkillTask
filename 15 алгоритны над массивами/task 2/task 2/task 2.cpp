#include <iostream>
#include <string>
using namespace std;
int main()
{
    string num1, num2, num3;
    double num4;
    cout << "Enter number one: ";
    cin >> num1;
    cout << "Enter number two: ";
    cin >> num2;
    num3 = num1 + "." + num2;
    num4 = stod(num3);
    cout << "Thats your number: " << num4;
}
