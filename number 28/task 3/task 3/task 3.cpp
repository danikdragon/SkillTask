#include <iostream>
#include <thread>
#include <mutex>
#include <cstdlib>
#include <vector>
using namespace std;
mutex cooked, brought, carried, next;

void courier(const string dish)
{
	carried.lock();
	cout << "Courier take: " << dish << "\n";
	this_thread::sleep_for(chrono::seconds(30));
	cout << "\nCourier give: " << dish << "\n";
	carried.unlock();
}

void kitchen(const string dish)
{
	cooked.lock();
	srand(time(nullptr));
	int time = ((rand() % 10) + 5) + 1;
	cout << "Kitchen take: " << dish << "\n";
	while (time > 0)
	{
		cout << time << " second left until " << dish << " is ready" << "\n";
		this_thread::sleep_for(chrono::seconds(1));
		time--;
	}
	cout << "\nKitchen give: " << dish << "\n";
	cooked.unlock();
}

void waiter(const string dish)
{
	brought.lock();
	srand(time(nullptr));
	cout << "Waiter take: " << dish << "\n";
	this_thread::sleep_for(chrono::seconds(((rand() % 5) + 5) + 1));
	cout << "\nWaiter give: " << dish << "\n";
	brought.unlock();
}
void restaurant(const string dish)
{
	thread waiter_temp(waiter, dish);
	waiter_temp.join();
	thread kitchen_temp(kitchen, dish);
	kitchen_temp.join();
	thread courier_temp(courier, dish);
	courier_temp.join();
}
int main()
{
	static string menu[5] = {"pizza", "soup", "steak", "salad", "sushi"};
	vector<thread*> my_restaurant;

	// сделал 3 за место 10 что бы не ждать по долгу
	for(int i = 0; i < 3; i++)
	{
		string order = menu[rand() % 5];
		my_restaurant.push_back(new thread(restaurant, order));
	}
	for (int i = 0; i < my_restaurant.size(); i++)
	{
		my_restaurant[i]->join();
		delete my_restaurant[i];
		my_restaurant[i] = nullptr;
	}
	cout << "Complete!";
}