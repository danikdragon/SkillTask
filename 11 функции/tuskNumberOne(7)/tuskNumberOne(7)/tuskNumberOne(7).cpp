#include <iostream>
using namespace std;
int main()
{
	string floor[] = { "SidorovA", "IvanovA", "PetrovA", "SidorovB", "IvanovB", "PetrovB", "SidorovC", "IvanovC", "PetrovC", "SidorovD"};
	int n;
	while (true) {
		cout << "Enter floor: ";
		cin >> n;
		cout << floor[n-1] << "\n";
	}
}