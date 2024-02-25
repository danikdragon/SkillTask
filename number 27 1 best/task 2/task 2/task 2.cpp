#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

enum TaskList
{
	A,
	B,
	C,
	NONE,
};
class Person
{
public:
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
protected:
	string name = "Unknown";
};
class Worker:public Person
{
public:
	void setTask(TaskList task)
	{
		this->task = task;
		switch (task)
		{
		case A:
			cout << A << "\n";
			cout << name << " get task A\n";
			break;
		case B:
			cout << name << " get task B\n";
			break;
		case C:
			cout << name << " get task C\n";
			break;
		case NONE:
			break;
		default:
			break;
		}
	}
	TaskList getTask()
	{
		return task;
	}
protected:
	TaskList task = NONE;
};

class Manager:public Worker
{
public:
	void addTask()
	{
		srand(hash + task);
		int taskCount = (rand() % team.size() + 1);
		cout << name << '\n';

		for (int i = 0; i < team.size(); i++)
		{
			if (taskCount > 0 && team[i].getTask() == NONE)
			{
				team[i].setTask((TaskList)(rand() % 3));
				taskCount--;
			}
		}
	}
	bool checkAllWorker()
	{
		for (int i = 0; i < team.size(); i++)
		{
			if (team[i].getTask() == NONE)
				return false;
		}
		return true;
	}
	void createTeam(int person, int hash)
	{
		this->hash = hash;
		for (int i = 0; i < person; i++)
		{
			Worker tempTeam;
			tempTeam.setName("Employ #" + to_string(i));
			team.push_back(tempTeam);
		}
		addTask();
	}
protected:
	int hash;
	vector<Worker> team;
};

class Boss:public Person
{
public:
	void addTask()
	{
		for (int i = 0; i < teams.size(); i++)
		{
			teams[i].addTask();
		}
	}
	bool checkAllTeam()
	{
		for (int i = 0; i < teams.size(); i++)
		{
			if (!teams[i].checkAllWorker())
				return false;
		}
		return true;
	}
	void createCompany(int team, int person, int hash)
	{
		for (int i = 0; i < team; i++)
		{
			Manager tempManager;
			tempManager.setName("Manager #" + to_string(i));
			tempManager.setTask((TaskList)(rand()%3));
			tempManager.createTeam(person, hash);
			teams.push_back(tempManager);
		}
	}
protected:
	vector<Manager> teams;
};

int main()
{
	Boss company;
	int countTeam, countPerson, hash;
	string str_buffer;

	cout << "Enter your name: ";
	cin >> str_buffer;
	company.setName(str_buffer);

	cout << "Enter count team & person & hash: ";
	cin >> countTeam >> countPerson >> hash;
	company.createCompany(countTeam, countPerson, hash);

	while (true)
	{
		cout << "next? y-n: ";
		cin >> str_buffer;

		if (company.checkAllTeam())
		{
			cout << "All employ have task";
			break;
		}
		else if (str_buffer == "n")
			break;

		company.addTask();
	}
}