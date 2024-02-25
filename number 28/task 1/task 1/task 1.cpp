#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;
mutex winner_check;

void swimmer(string name, int speed, vector<string>& winners)
{
    int distant = 100;
    while (distant > 0)
    {
        this_thread::sleep_for(chrono::seconds(1));
        distant -= speed;
        cout << '\n' << name << ": " << distant << "m" << '\n';
    }
    cout << name << " finished!\n";
    winner_check.lock();
    winners.push_back(name);
    winner_check.unlock();
}

int main()
{
    string name[6];
    int speed[6];
    thread* swimmers[6];
    vector<string> winners;
    // запись
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter name swimmer #" << i << ": ";
        cin >> name[i];
        cout << "Enter speed swimmer #" << i << ": ";
        cin >> speed[i];
    }
    // старт
    for (int i = 0; i < 6; i++)
    {
        swimmers[i] = new thread(swimmer, name[i], speed[i], ref(winners));
    }

    for (int i = 0; i < 6; i++)
    {
        if (swimmers[i]->joinable())
        {
            swimmers[i]->join();
            delete swimmers[i];
            swimmers[i] = nullptr;
        }
    }

    // финиш
    for (int i = 0; i < winners.size(); i++)
    {
        cout << "#" << i + 1 << " " << winners[i] << '\n';
    }
}
//thread swimmer1(swimmer, name[0], speed[0], winners);
//thread swimmer2(swimmer, name[1], speed[1], winners);
//thread swimmer3(swimmer, name[2], speed[2], winners);
//thread swimmer4(swimmer, name[3], speed[3], winners);
//thread swimmer5(swimmer, name[4], speed[4], winners);
//thread swimmer6(swimmer, name[5], speed[5], winners);
//swimmer1.join();
//swimmer2.join();
//swimmer3.join();
//swimmer4.join();
//swimmer5.join();
//swimmer6.join();