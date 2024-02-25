#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class WinExcept : public exception
{
public:
	const char* what() const noexcept override
	{
		return "you won";
	}
};

class LoseExcept : public exception
{
public:
	const char* what() const noexcept override
	{
		cout << "Try again: ";
		return "you lose";
	}
};

enum POOL
{
	NONE,
	BOOT,
	FISH
};

void foo(int pool[9])
{
	int select;
	cout << "Select cell (1-9): ";
	cin >> select;
	select--;

	if (select > 8 || select < 0)
		throw invalid_argument("Select > 9 | < 1");
	if (pool[select] == FISH)
		throw WinExcept();
	if (pool[select] == BOOT)
		throw LoseExcept();
	if (pool[select] == NONE)
		throw invalid_argument("None");
}

int main()
{
	srand(time(nullptr));
	int pool[9]{ 0 };

	for (int i = 0; i < 3;)
	{
		int my_rand = rand() % 9;
		if(pool[my_rand] == NONE)
		{
			i++;
			pool[my_rand] = BOOT;
			cout << "Boot number: " << i << " on pool position: " << my_rand+1 << "\n";
		}
	}

	while (true)
	{
		int my_rand = rand() % 9;
		if (pool[my_rand] == NONE)
		{
			pool[my_rand] = FISH;
			cout << "Fish on pool position: " << my_rand + 1 << "\n";
			break;
		}
	}

	for (int i = 0; true;)
	{
		try
		{
			i++;
			foo(pool);
		}
		catch(invalid_argument e)
		{
			i--;
			cout << e.what() << "\n";
		}
		catch(WinExcept e)
		{
			cout << e.what() << "\n";
			cout << "Try count " << i;
			break;
		}
		catch (LoseExcept e)
		{
			cout << e.what() << "\n";
		}
		catch (...)
		{
			cout <<"ERROR\n";
		}
	}
}