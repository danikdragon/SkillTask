#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = { 19,1,-3,4,-1,2,1,-5,4 };
	int temp(0), temp2(0);
	int start_count(0), finish_count(0);
	for (int i = 0; i < a.size(); i++)
	{
		temp2 = 0;
		for (int j = i; j < a.size(); j++) {
			temp2 += a[j];
			if (temp2 > temp) {
				start_count = i;
				temp = temp2;
				finish_count = j;
			}
		}
	}
	cout << "sum " << temp << " start " << start_count << " finish " << finish_count;
}
