#include <iostream>
#include <vector>
using namespace std;
void coutMas(int mas[][3]) {
	cout << '|';
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mas[i][j] << ',';
		}
		cout << '|';
	}
	cout << "\n";
}
int main()
{
	// 1 значение это приборы, 2 это тарелки, а 3 для стульев
	// 1 ряд
	int packagesNumOne[5][3] = { {3,2,1},
								 {3,2,1},
								 {3,2,1},
								 {3,2,1},
								 {3,2,1} }; // + 0,0,1
	// 2 ряд
	int packagesNumTwo[5][3] = { {3,2,1},
								 {3,2,1},
								 {3,2,1}, // - 1,0,0 // + 1,0,0
								 {3,2,1},
								 {3,2,1} };
	// Vip места
	int vip[2][3] = { {3,3,1}, // - 1,0,0 // -1,0,0
					  {3,3,1} };

	//1 действие
	packagesNumOne[4][2] += 1;
	//2 действие
	packagesNumTwo[2][0] -= 1;
	//3 действие
	vip[0][0] -= 1;
	//4 действие
	packagesNumTwo[2][0] += 1;
	//5 действие
	vip[0][0] -= 1;
	//вывод стола
	coutMas(packagesNumOne);
	for (int i = 0; i < 2; i++) {
		cout << '|';
		for (int j = 0; j < 3; j++) {
			cout << vip[i][j] << ',';
		}
		cout << '|';
		cout << "		    ";
	}
	cout << "\n";
	coutMas(packagesNumOne);
}