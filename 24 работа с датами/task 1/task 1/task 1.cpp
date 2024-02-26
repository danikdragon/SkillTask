#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>

using namespace std;

time_t begin(vector<string>& name_task)
{
	string buffer;
	cout << "Enter name task: ";
	cin >> buffer;
	name_task.push_back(buffer);
	return time(nullptr);;
}

tm end(time_t time_start)
{
	time_t time_end = time(nullptr);
	time_t dif = difftime(time_end, time_start);
	tm temp;
	gmtime_s(&temp, &dif);
	return temp;
}

void status(vector<string>& name_task, vector<tm> time_task)
{
	for (int i = 0; i < name_task.size(); i++)
	{
		cout << name_task[i] << ": " << put_time(&time_task[i], "%H:%M:%S") << '\n';
	}
}

int main()
{
	vector<string> name_task;
	vector<tm> time_task;

	string s_buffer;
	time_t t_buffer;
	bool adder_check = false;
	while (true)
	{
		cout << "Enter command: ";
		cin >> s_buffer;

		if (s_buffer == "begin")
		{
			if (adder_check)
				time_task.push_back(end(t_buffer));

			t_buffer = begin(name_task);
			adder_check = true;
		}
		else if (s_buffer == "end" && adder_check)
		{
			time_task.push_back(end(t_buffer));
			adder_check = false;
		}
		else if (s_buffer == "status")
		{
			if (adder_check)
			{
				if (adder_check)
					time_task.push_back(end(t_buffer));

				status(name_task, time_task);

				if (adder_check)
					time_task.pop_back();
			}
			else
				status(name_task, time_task);
		}
		else if (s_buffer == "exit")
			break;
	}
}