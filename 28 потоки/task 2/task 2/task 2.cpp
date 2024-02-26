#include <iostream>
#include <thread>
#include <mutex>
using namespace std;
mutex wait;

void station(static string name, static int time)
{
	this_thread::sleep_for(chrono::seconds(time));
	cout << name << " wait station\n";
	wait.lock();
	string command;
	while(command != "depart")
	{
		cout << "Enter depart from - " << name << '\n';
		cin >> command;
	}
	wait.unlock();
}

int main()
{
	int time[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter time for train number :" << (char)('A' + i) << "\n";
		cin >> time[i];
	}
	thread A(station,"A", time[0]);
	thread B(station,"B", time[1]);
	thread C(station,"C", time[2]);
	A.join();
	B.join();
	C.join();
}