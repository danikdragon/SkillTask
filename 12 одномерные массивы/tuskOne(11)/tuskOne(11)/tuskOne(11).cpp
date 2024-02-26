#include <iostream>
#include <vector>
using namespace std;
void cout_all_vector(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
}
vector<int> del_needed_numbers(vector<int> vec) {
	int delNumber;
	cout << "Input number to delete: ";
	cin >> delNumber;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == delNumber) {
			vec[i] = vec.back();
			vec.pop_back();
		}
	}
	return vec;
}
int main()
{
	vector<int> vec{};
	int num(0);
	cout << "Input your number (stop = -1): ";
	//добавляем ячейки в вектор, с произвольной длиной 
	while(num != -1){
		cin >> num;
		vec.push_back(num);
	}
	//удаляем -1
	vec.pop_back();

	cout_all_vector(vec);
	vec = del_needed_numbers(vec);
	cout_all_vector(vec);
}
