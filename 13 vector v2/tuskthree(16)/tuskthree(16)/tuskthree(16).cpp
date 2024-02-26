#include <iostream>
using namespace std;

bool checkMatrix(int mas1[][4], int mas2[][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (mas1[i][j] != mas2[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void diagonalMatrix(int mas[][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (j != i) {
				mas[i][j] = 0;
			}
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
}

int main()
{
	// 1 случай
	int mas1[4][4] = { {1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4} };
	int mas2[4][4] = { {1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4} };
	if (checkMatrix(mas1, mas2)) {
		cout << "true! \n";
	}
	else cout << "ERROR \n";

	// 2 случай
	int mas3[4][4] = { {3,3,3,3}, {3,3,3,3}, {3,3,3,3}, {3,3,3,3} };
	int mas4[4][4] = { {1,2,3,4}, {1,2,3,4}, {1,2,3,4}, {1,2,3,4} };
	if (checkMatrix(mas3, mas4)) {
		cout << "true!";
	}
	else diagonalMatrix(mas4);
}