#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

//таймер
int main()
{
	//1 статичный таймер, 2 динамический, 3 для задержки
	tm user_timer, current_timer, last_timer;

	cout << "Enter time (H:M:S): ";
	cin >> get_time(&user_timer, "%H:%M:%S");

	//поинт старта таймера
	time_t start_time_pos = time(nullptr);
	//нужно для того что бы следуйщее условие для задержки стартануло
	time_t buffer = difftime(start_time_pos, start_time_pos);
	gmtime_s(&last_timer, &buffer);

	while (true)
	{
		//динамический поинт
		time_t last_time_pos = time(nullptr);
		time_t buffer = difftime(last_time_pos, start_time_pos);
		gmtime_s(&current_timer, &buffer);
		//условие для задержки
		if (current_timer.tm_sec != last_timer.tm_sec)
		{
			last_timer = current_timer;

			cout << put_time(&current_timer, "%H:%M:%S") << "\n";

			if (current_timer.tm_hour == user_timer.tm_hour
				&& current_timer.tm_min == user_timer.tm_min
				&& current_timer.tm_sec == user_timer.tm_sec)
				break;
		}

	}
	cout << "DING!DING!\n";
}

//будильник
// 
//#include <iostream>
//#include <ctime>
//#include <iomanip>
// 
////импортировал для создания задержки
// 
//#include <chrono>
//#include <thread>
//
//using namespace std;
//int main()
//{
//	tm local, timer;
//
//	cout << "Enter time (H:M:S): ";
//	cin >> get_time(&timer, "%H:%M:%S");
//	while (true)
//	{
//		time_t local_ptr = time(nullptr);
//		localtime_s(&local, &local_ptr);
//
//		cout << put_time(&local, "%H:%M:%S") << "\n";
//		this_thread::sleep_for(chrono::seconds(1));
//
//		if (local.tm_hour == timer.tm_hour && local.tm_min == timer.tm_min && local.tm_sec == timer.tm_sec)
//			break;
//	}
//	cout << "DING!DING!\n";
//}
